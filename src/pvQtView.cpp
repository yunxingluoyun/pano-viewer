#include "pvQtView.h"

#include <QFile>
#include <QMouseEvent>
#include <QPainter>
#include <QResizeEvent>
#include <QWheelEvent>
#include <rhi/qrhi.h>

#include <cmath>
#include <iterator>
#include <memory>

#define KLIP(x, l, u) ((x) < (l) ? (l) : (x) > (u) ? (u) : (x))

#ifndef Pi
#define Pi 3.141592654
#define DEG(r) (180.0 * (r) / Pi)
#define RAD(d) (Pi * (d) / 180.0)
#endif

#define MAXPROJFOV 150
#define MAXDANGLE 88
#define MAXDIST tan(RAD(MAXDANGLE))

struct pvQtView::UniformBlock
{
    QVector4D view0;
    QVector4D view1;
    QVector4D view2;
    QVector4D eye;
    QVector4D params0;
    QVector4D params1;
    QVector4D image0;
    QVector4D image1;
    QVector4D image2;
    QVector4D overlay;
};

pvQtView::pvQtView(QWidget *parent)
    : QRhiWidget(parent),
      thePic(nullptr),
      picType(pvQtPic::nil),
      ipicType(0),
      surface(0),
      MacCubeLimit(0),
      povly(nullptr),
      recenter(false),
      texPwr2(false),
      cubeMap(true),
      maxcube(8192),
      max2d(8192),
      maxTex2Dsqr(8192, 8192),
      maxTex2Drec(8192, 4096),
      maxTexCube(4096, 4096),
      picok(false),
      errmsg(tr("no picture")),
      m_ubuf(nullptr),
      m_sampler(nullptr),
      m_texture2D(nullptr),
      m_cubeTexture(nullptr),
      m_overlayTexture(nullptr),
      m_srb(nullptr),
      m_pipeline(nullptr),
      m_have2DImage(false),
      m_haveCubeImages(false),
      m_haveOverlayImage(false),
      m_texturesDirty(false),
      m_resourcesReady(false),
      m_renderPending(false)
{
    setFocusPolicy(Qt::StrongFocus);
    setMouseTracking(true);

    mTimer.setInterval(50);
    mTimer.setSingleShot(true);
    connect(&mTimer, &QTimer::timeout, this, &pvQtView::mTimeout);

    Width = Height = 400;
    portAR = 1.0;
    minpan = -180;
    maxpan = 180;
    mintilt = -180;
    maxtilt = 180;
    turnRoll = turnPitch = turnYaw = 0;
    turn90 = 0;
    initView();
}

pvQtView::~pvQtView()
{
    releaseRhiResources();
}

QSize pvQtView::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize pvQtView::sizeHint() const
{
    return QSize(400, 400);
}

bool pvQtView::OpenGLOK()
{
    return true;
}

void pvQtView::initialize(QRhiCommandBuffer *cb)
{
    Q_UNUSED(cb);
    releaseRhiResources();
    m_resourcesReady = true;

    if (QRhi *ri = rhi()) {
        m_backendName = QString::fromLatin1(ri->backendName());
        const int limit = ri->resourceLimit(QRhi::TextureSizeMax);
        if (limit > 0) {
            max2d = limit;
            maxcube = limit;
            maxTex2Dsqr = QSize(limit, limit);
            maxTex2Drec = QSize(limit, qMax(64, limit / 2));
            maxTexCube = QSize(qMin(limit, 4096), qMin(limit, 4096));
        }
    }
}

void pvQtView::render(QRhiCommandBuffer *cb)
{
    if (!m_resourcesReady || !ensurePipeline())
        return;

    uploadPendingTextures(cb);

    QRhiResourceUpdateBatch *updates = rhi()->nextResourceUpdateBatch();
    const UniformBlock ub = buildUniforms();
    updates->updateDynamicBuffer(m_ubuf, 0, sizeof(UniformBlock), &ub);

    const QSize outputSize = renderTarget()->pixelSize();
    Width = qMax(1, outputSize.width());
    Height = qMax(1, outputSize.height());
    portAR = double(Width) / double(Height);

    cb->beginPass(renderTarget(), QColor(Qt::black), { 1.0f, 0 }, updates);
    cb->setGraphicsPipeline(m_pipeline);
    cb->setViewport(QRhiViewport(0, 0, Width, Height));
    cb->setShaderResources(m_srb);
    cb->draw(3);
    cb->endPass();

    m_renderPending = false;
}

void pvQtView::resizeEvent(QResizeEvent *event)
{
    QRhiWidget::resizeEvent(event);
    Width = qMax(1, event->size().width());
    Height = qMax(1, event->size().height());
    fwf = 2.0 / Width;
    fhf = 2.0 / Height;
    portAR = double(Width) / double(Height);
    requestRender();
    showview();
}

void pvQtView::releaseRhiResources()
{
    delete m_pipeline;
    delete m_srb;
    delete m_overlayTexture;
    delete m_cubeTexture;
    delete m_texture2D;
    delete m_sampler;
    delete m_ubuf;

    m_pipeline = nullptr;
    m_srb = nullptr;
    m_overlayTexture = nullptr;
    m_cubeTexture = nullptr;
    m_texture2D = nullptr;
    m_sampler = nullptr;
    m_ubuf = nullptr;
    m_texture2DSize = QSize();
    m_cubeTextureSize = QSize();
    m_overlayTextureSize = QSize();
}

QShader pvQtView::loadShader(const QString &name) const
{
    QFile f(name);
    if (!f.open(QIODevice::ReadOnly))
        return QShader();
    return QShader::fromSerialized(f.readAll());
}

bool pvQtView::ensurePipeline()
{
    QRhi *ri = rhi();
    if (!ri)
        return false;

    if (!m_ubuf) {
        m_ubuf = ri->newBuffer(QRhiBuffer::Dynamic, QRhiBuffer::UniformBuffer, sizeof(UniformBlock));
        m_ubuf->create();
    }

    if (!m_sampler) {
        m_sampler = ri->newSampler(QRhiSampler::Linear, QRhiSampler::Linear, QRhiSampler::None,
                                   QRhiSampler::ClampToEdge, QRhiSampler::ClampToEdge, QRhiSampler::ClampToEdge);
        m_sampler->create();
    }

    if (!ensureTextureResources())
        return false;

    if (!m_srb) {
        m_srb = ri->newShaderResourceBindings();
        m_srb->setBindings({
            QRhiShaderResourceBinding::uniformBuffer(0,
                QRhiShaderResourceBinding::VertexStage | QRhiShaderResourceBinding::FragmentStage,
                m_ubuf),
            QRhiShaderResourceBinding::sampledTexture(1, QRhiShaderResourceBinding::FragmentStage,
                m_texture2D, m_sampler),
            QRhiShaderResourceBinding::sampledTexture(2, QRhiShaderResourceBinding::FragmentStage,
                m_cubeTexture, m_sampler),
            QRhiShaderResourceBinding::sampledTexture(3, QRhiShaderResourceBinding::FragmentStage,
                m_overlayTexture, m_sampler)
        });
        m_srb->create();
    }

    if (!m_pipeline) {
        const QShader vs = loadShader(QStringLiteral(":/shaders/shaders/pano.vert.qsb"));
        const QShader fs = loadShader(QStringLiteral(":/shaders/shaders/pano.frag.qsb"));
        if (!vs.isValid() || !fs.isValid()) {
            errmsg = tr("QRhi shader load failed");
            picok = false;
            emit OGLerror(errmsg);
            return false;
        }

        m_pipeline = ri->newGraphicsPipeline();
        m_pipeline->setShaderStages({
            { QRhiShaderStage::Vertex, vs },
            { QRhiShaderStage::Fragment, fs }
        });
        m_pipeline->setShaderResourceBindings(m_srb);
        m_pipeline->setRenderPassDescriptor(renderTarget()->renderPassDescriptor());
        m_pipeline->create();
    }

    return true;
}

static QImage singlePixel(const QColor &color)
{
    QImage img(1, 1, QImage::Format_RGBA8888);
    img.fill(color);
    return img;
}

bool pvQtView::ensureTextureResources()
{
    QRhi *ri = rhi();
    if (!ri)
        return false;

    const QSize tex2DSize = m_have2DImage ? m_pending2DImage.size() : QSize(1, 1);
    if (!m_texture2D || m_texture2DSize != tex2DSize) {
        delete m_srb;
        m_srb = nullptr;
        delete m_texture2D;
        m_texture2D = ri->newTexture(QRhiTexture::RGBA8, tex2DSize);
        m_texture2D->create();
        m_texture2DSize = tex2DSize;
        m_texturesDirty = true;
    }

    const QSize cubeSize = m_haveCubeImages ? m_pendingCubeImages[0].size() : QSize(1, 1);
    if (!m_cubeTexture || m_cubeTextureSize != cubeSize) {
        delete m_srb;
        m_srb = nullptr;
        delete m_cubeTexture;
        m_cubeTexture = ri->newTexture(QRhiTexture::RGBA8, cubeSize, 1, QRhiTexture::CubeMap);
        m_cubeTexture->create();
        m_cubeTextureSize = cubeSize;
        m_texturesDirty = true;
    }

    const QSize overlaySize = m_haveOverlayImage ? m_pendingOverlayImage.size() : QSize(1, 1);
    if (!m_overlayTexture || m_overlayTextureSize != overlaySize) {
        delete m_srb;
        m_srb = nullptr;
        delete m_overlayTexture;
        m_overlayTexture = ri->newTexture(QRhiTexture::RGBA8, overlaySize);
        m_overlayTexture->create();
        m_overlayTextureSize = overlaySize;
        m_texturesDirty = true;
    }

    return true;
}

QImage pvQtView::normalizedTextureImage(QImage *image) const
{
    if (!image || image->isNull())
        return singlePixel(Qt::black);
    return image->convertToFormat(QImage::Format_RGBA8888);
}

void pvQtView::uploadPendingTextures(QRhiCommandBuffer *cb)
{
    Q_UNUSED(cb);
    if (!m_texturesDirty || !ensureTextureResources())
        return;

    QRhiResourceUpdateBatch *updates = rhi()->nextResourceUpdateBatch();

    const QImage tex = m_have2DImage ? m_pending2DImage : singlePixel(Qt::black);
    updates->uploadTexture(m_texture2D, tex);

    QRhiTextureUploadEntry cubeEntries[6];
    for (int i = 0; i < 6; ++i) {
        const QImage face = m_haveCubeImages ? m_pendingCubeImages[i] : singlePixel(Qt::black);
        cubeEntries[i] = QRhiTextureUploadEntry(i, 0, QRhiTextureSubresourceUploadDescription(face));
    }
    QRhiTextureUploadDescription cubeUpload;
    cubeUpload.setEntries(std::begin(cubeEntries), std::end(cubeEntries));
    updates->uploadTexture(m_cubeTexture, cubeUpload);

    const QImage overlay = m_haveOverlayImage ? m_pendingOverlayImage : singlePixel(Qt::transparent);
    updates->uploadTexture(m_overlayTexture, overlay);

    cb->resourceUpdate(updates);
    m_texturesDirty = false;
}

pvQtView::UniformBlock pvQtView::buildUniforms() const
{
    UniformBlock ub = {};
    const QMatrix4x4 view = viewRotation();
    const QMatrix4x4 image = imageRotation();
    ub.view0 = QVector4D(view(0, 0), view(1, 0), view(2, 0), 0);
    ub.view1 = QVector4D(view(0, 1), view(1, 1), view(2, 1), 0);
    ub.view2 = QVector4D(view(0, 2), view(1, 2), view(2, 2), 0);
    ub.eye = QVector4D(float(eyex), float(eyey), float(eyez), 0);
    ub.params0 = QVector4D(float(portAR), float(std::tan(0.5 * RAD(wFOV))),
                           float(framex + fcompx), float(framey + fcompy));
    ub.params1 = QVector4D(float(xtexmag), float(ytexmag), float(curr_pt), float(surface));
    ub.image0 = QVector4D(image(0, 0), image(1, 0), image(2, 0), 0);
    ub.image1 = QVector4D(image(0, 1), image(1, 1), image(2, 1), 0);
    ub.image2 = QVector4D(image(0, 2), image(1, 2), image(2, 2),
                          (picType == pvQtPic::cub && m_haveCubeImages) ? 1.0f : 0.0f);

    const float overlayEnabled = (m_haveOverlayImage && !m_pendingOverlayImage.isNull()) ? 1.0f : 0.0f;
    const float overlayWidth = overlayEnabled
        ? float((double(m_pendingOverlayImage.width()) / m_pendingOverlayImage.height()) / portAR)
        : 0.0f;
    ub.overlay = QVector4D(overlayEnabled, overlayWidth, 0, 0);
    return ub;
}

QMatrix4x4 pvQtView::viewRotation() const
{
    QMatrix4x4 m;
    if (recenter) {
        m.rotate(float(-spinAngle), 0, 0, 1);
        m.rotate(float(tiltAngle), 1, 0, 0);
        m.rotate(float(panAngle), 0, 1, 0);
    } else {
        m.rotate(float(-spinAngle), 0, 0, 1);
        m.rotate(float(tiltAngle), 1, 0, 0);
        m.rotate(float(panAngle), 0, 1, 0);
    }
    return m;
}

QMatrix4x4 pvQtView::imageRotation() const
{
    QMatrix4x4 m;
    const double turnAngle = turn90 * 90 + turnRoll;
    if (picType == pvQtPic::cub) {
        m.rotate(180.0f, 0, 1, 0);
        m.rotate(180.0f, 0, 0, 1);
        m.rotate(float(-turnYaw), 0, 1, 0);
        m.rotate(float(-turnPitch), 1, 0, 0);
        m.rotate(float(-turnAngle), 0, 0, 1);
    } else {
        m.rotate(float(-turnAngle), 0, 0, 1);
    }
    return m;
}

void pvQtView::requestRender()
{
    m_renderPending = true;
    update();
}

void pvQtView::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
}

void pvQtView::mousePressEvent(QMouseEvent *event)
{
    const QPoint p = event->position().toPoint();
    mx1 = mx0 = p.x();
    my1 = my0 = p.y();
    mb = event->buttons();
    mk = event->modifiers();
    if (mk == Qt::ShiftModifier && mb == Qt::LeftButton) {
        framex0 = framex;
        framey0 = framey;
    }
    mTimer.start();
}

void pvQtView::mouseMoveEvent(QMouseEvent *event)
{
    const QPoint p = event->position().toPoint();
    mx1 = p.x();
    my1 = p.y();
    mb = event->buttons();
    mk = event->modifiers();
}

void pvQtView::mouseReleaseEvent(QMouseEvent *event)
{
    const QPoint p = event->position().toPoint();
    mx1 = mx0 = p.x();
    my1 = my0 = p.y();
    mb = event->buttons();
    mk = event->modifiers();
    if (mb == Qt::NoButton)
        mTimer.stop();
}

void pvQtView::mTimeout()
{
    if (mb == Qt::NoButton)
        return;

    const int dx = (mx1 - mx0) / 3;
    const int dy = (my0 - my1) / 3;

    if (mb == Qt::LeftButton) {
        if (mk & Qt::ShiftModifier) {
            if (!(mk & Qt::AltModifier))
                framex = framex0 + KLIP(fwf * dx, -1, 1);
            if (!(mk & Qt::ControlModifier))
                framey = framey0 + KLIP(fhf * dy, -1, 1);
        } else {
            if (!(mk & Qt::AltModifier)) {
                ipan += dx;
                panAngle = normalizeAngle(ipan, 1, minpan, maxpan);
            }
            if (!(mk & Qt::ControlModifier)) {
                itilt += dy;
                tiltAngle = normalizeAngle(itilt, 1, mintilt, maxtilt);
            }
        }
    } else if (mb == Qt::RightButton) {
        if (mk & Qt::ShiftModifier) {
            if (!(mk & Qt::AltModifier))
                eyex += 0.001 * dx;
            if (!(mk & Qt::ControlModifier))
                eyey -= 0.001 * dy;
            clipEyePosition();
        } else {
            if (!(mk & Qt::AltModifier))
                stepDangl(-dx, 1);
            if (!(mk & Qt::ControlModifier)) {
                izoom -= dy;
                setFOV(normalizeAngle(izoom, 1, minFOV, maxFOV));
            }
        }
    } else if (mb == (Qt::LeftButton | Qt::RightButton)) {
        if (mk & Qt::ShiftModifier) {
            if (!(mk & Qt::AltModifier))
                xtexmag -= 0.00225 * dx;
            if (!(mk & Qt::ControlModifier))
                ytexmag -= 0.00225 * dy;
            setTexMag(xtexmag, ytexmag);
        } else {
            if (!(mk & Qt::AltModifier)) {
                ispin += dx;
                spinAngle = normalizeAngle(ispin, 1, -180, 180);
            }
            if (!(mk & Qt::ControlModifier)) {
                itilt += dy;
                tiltAngle = normalizeAngle(itilt, 1, mintilt, maxtilt);
            }
        }
    }

    requestRender();
    showview();
    mTimer.start();
}

void pvQtView::wheelEvent(QWheelEvent *event)
{
    const int d = event->angleDelta().y();
    if (d == 0) {
        event->ignore();
        return;
    }
    step_zoom(d < 0 ? -1 : 1);
}

double pvQtView::normalizeAngle(int &iangle, int istep, double lwr, double upr)
{
    if (lwr >= upr) {
        iangle = 0;
        return 0;
    }
    double a = iangle / 16.0;
    if (lwr < 0) {
        while (a <= -180.0)
            a += 360.0;
        while (a > 180.0)
            a -= 360.0;
    } else {
        while (a < 0.0)
            a += 360.0;
        while (a >= 360.0)
            a -= 360.0;
    }
    if (a < lwr)
        a = lwr;
    else if (a > upr)
        a = upr;
    iangle = int(16 * a);
    const int r = iangle % istep;
    if (r < 0)
        iangle -= istep + r;
    else if (r > 0)
        iangle += istep - r;
    return a;
}

int pvQtView::iAngle(double angle)
{
    return int(16 * angle);
}

void pvQtView::step_pan(int dp) { setPan(ipan + dp * panstep); }
void pvQtView::step_tilt(int dp) { setTilt(itilt + dp * tiltstep); }
void pvQtView::step_zoom(int dp) { setZoom(izoom - dp * zoomstep); }
void pvQtView::step_roll(int dp) { setSpin(ispin + dp * spinstep); }
void pvQtView::step_dist(int dp) { stepDangl(dp, danglstep); }

void pvQtView::step_eyex(int dp)
{
    if (recenter) {
        ihangl -= dp * hanglstep;
        hangle = normalizeAngle(ihangl, hanglstep, -180, 180);
    } else {
        eyex -= 0.01 * dp;
    }
    clipEyePosition();
    requestRender();
    showview();
}

void pvQtView::step_eyey(int dp)
{
    if (recenter) {
        ivangl -= dp * vanglstep;
        vangle = normalizeAngle(ivangl, vanglstep, -90, 90);
    } else {
        eyey -= 0.01 * dp;
    }
    clipEyePosition();
    requestRender();
    showview();
}

void pvQtView::clipEyePosition()
{
    if (recenter) {
        const double alt = RAD(vangle);
        const double azi = RAD(hangle);
        const double c = -std::cos(alt);
        double s = eyeDistance;
        if (picType == pvQtPic::cub)
            s *= 0.5;
        eyex = c * std::sin(azi) * s;
        eyey = std::sin(alt) * s;
        eyez = c * std::cos(azi) * s;
        fcompx = fcompy = 0;
    } else {
        eyex = KLIP(eyex, -1, 1);
        eyey = KLIP(eyey, -1, 1);
        eyez = eyeDistance;
        fcompx = eyex;
        fcompy = -eyey;
    }
}

void pvQtView::stepDangl(int dp, int stp)
{
    if (recenter) {
        const double d = std::abs(stp) > 1 ? 0.0025 : 0.00025;
        setDist(KLIP(eyeDistance + dp * d, 0, 0.927));
    } else {
        idangl += dp * stp;
        if (idangl < 0)
            idangl = 0;
        const double a = normalizeAngle(idangl, stp, 0, MAXDANGLE);
        setDist(std::tan(RAD(a)));
    }
    requestRender();
    showview();
}

void pvQtView::step_hfov(int dp)
{
    framex = KLIP(framex + 10 * fwf * dp, -1, 1);
    requestRender();
    showview();
}

void pvQtView::step_vfov(int dp)
{
    framey = KLIP(framey + 10 * fhf * dp, -1, 1);
    requestRender();
    showview();
}

void pvQtView::step_iproj(int dp)
{
    int i = curr_ipt;
    if (i < Nprojections && thePic != nullptr) {
        if (dp > 0) {
            if (++i >= Nprojections)
                i = 0;
        } else {
            if (--i < 0)
                i = Nprojections - 1;
        }
        const pvQtPic::PicType pt = pictypes.PicType(i);
        curr_fovs = thePic->changeFovType(picType, thePic->FaceFOV(), pt);
        curr_pt = pt;
        curr_ipt = i;
        setTexMag(xtexmag, ytexmag);
        emit reportProj(QString(pictypes.picTypeName(curr_pt)));
        requestRender();
    }
}

void pvQtView::reset_view()
{
    setPicType(picType);
    initView();
    requestRender();
    showview();
}

void pvQtView::home_view()
{
    panAngle = tiltAngle = spinAngle = 0;
    ipan = itilt = ispin = 0;
    requestRender();
    showview();
}

void pvQtView::home_eyeXY()
{
    eyex = eyey = 0;
    fcompx = fcompy = 0;
    framex = framey = 0;
    requestRender();
    showview();
}

void pvQtView::super_fish()
{
    setDist(1.07);
    setZoom(int(16 * maxFOV));
    requestRender();
    showview();
}

void pvQtView::set_view(int v)
{
    double d = 0;
    if (v == 1)
        d = 1;
    else if (v == 2)
        d = MAXDIST;
    setDist(d);
    requestRender();
    showview();
}

void pvQtView::setTurn(int turn, double roll, double pitch, double yaw)
{
    turn90 = turn & 3;
    turnRoll = KLIP(roll, -45, 45);
    turnPitch = KLIP(pitch, -90, 90);
    turnYaw = KLIP(yaw, -180, 180);
    requestRender();
    showview();
    emit reportTurn(turn90, turnRoll, turnPitch, turnYaw);
}

void pvQtView::showview()
{
    QString s;
    if (recenter) {
        s = QString::asprintf("Y%.1f P%.1f R%.1f V%.1f eD%.2f eA(%.1f, %.1f) fS(%.2f, %.2f)",
                              panAngle, tiltAngle, spinAngle, vFOV, eyeDistance,
                              -hangle, -vangle, framex, framey);
    } else {
        s = QString::asprintf("Y%.1f P%.1f R%.1f V%.1f eD%.2f eS(%.2f, %.2f) fS(%.2f, %.2f)",
                              panAngle, tiltAngle, spinAngle, vFOV, eyeDistance,
                              eyex, eyey, framex, framey);
    }
    emit reportView(s);
}

bool pvQtView::showPic(pvQtPic *pic)
{
    setupPic(pic);
    return picok;
}

void pvQtView::picChanged()
{
    updatePic();
}

void pvQtView::initView()
{
    Znear = 0.07;
    Zfar = 30;
    framex = framey = 0;
    eyeDistance = 0.0;
    idangl = 0;
    eyex = eyey = eyez = 0;
    fcompx = fcompy = 0;
    minFOV = 10.0;
    maxFOV = MAXPROJFOV;
    zoomstep = 40;
    izoom = 90 * 16;
    setFOV(90);
    panstep = tiltstep = spinstep = 32;
    idangl = 0;
    danglstep = 16;
    ihangl = 0;
    hanglstep = 16;
    ivangl = 0;
    vanglstep = 16;
    hangle = vangle = 0;
    panAngle = tiltAngle = spinAngle = 0;
    ipan = itilt = ispin = 0;
}

void pvQtView::setFOV(double newvfov)
{
    if (newvfov == 0)
        newvfov = vFOV;
    vFOV = KLIP(newvfov, minFOV, maxFOV);
    wFOV = recenter ? vFOV : vFOV / (eyeDistance + 1);
}

void pvQtView::setDist(double d)
{
    d = KLIP(d, 0, MAXDIST);
    idangl = iAngle(DEG(std::atan(d)));
    eyeDistance = d;
    clipEyePosition();
    double m = MAXPROJFOV * (d > 1 ? 2 : d + 1);
    if (recenter && m > 175)
        m = 175;
    if (m < minFOV)
        m = minFOV;
    maxFOV = m;
    setFOV();
}

void pvQtView::setPan(int angle)
{
    panAngle = normalizeAngle(angle, panstep, minpan, maxpan);
    if (angle != ipan) {
        ipan = angle;
        requestRender();
        showview();
    }
}

void pvQtView::setTilt(int angle)
{
    tiltAngle = normalizeAngle(angle, tiltstep, mintilt, maxtilt);
    if (angle != itilt) {
        itilt = angle;
        requestRender();
        showview();
    }
}

void pvQtView::setSpin(int angle)
{
    spinAngle = normalizeAngle(angle, spinstep, -180, 180);
    if (angle != ispin) {
        ispin = angle;
        requestRender();
        showview();
    }
}

void pvQtView::setZoom(int angle)
{
    const double a = normalizeAngle(angle, zoomstep, minFOV, maxFOV);
    if (angle != izoom) {
        izoom = angle;
        setFOV(a);
        requestRender();
        showview();
    }
}

void pvQtView::setPicType(pvQtPic::PicType pt)
{
    picType = pt;
    ipicType = pictypes.picTypeIndex(picType);
    minpan = -180;
    maxpan = 180;
    mintilt = -180;
    maxtilt = 180;
    xtexmag = ytexmag = 1.0;
    curr_pt = picType;
    curr_ipt = ipicType;

    if (curr_pt != pvQtPic::nil && thePic) {
        stdTexScale = thePic->getTexScale();
        setTexMag(stdTexScale.width(), stdTexScale.height());
    } else {
        curr_fovs = QSizeF(0, 0);
    }
    emit reportProj(QString(pictypes.picTypeName(curr_pt)));
}

void pvQtView::setTexMag(double magx, double magy)
{
    if (picType != pvQtPic::cub && picType != pvQtPic::nil) {
        xtexmag = KLIP(magx, 1, 10);
        ytexmag = KLIP(magy, 1, 10);
    } else {
        xtexmag = ytexmag = 1.0;
    }
    if (thePic) {
        curr_fovs = thePic->picScale2Fov(QSizeF(xtexmag, ytexmag));
        emit reportFov(curr_fovs);
    }
}

bool pvQtView::setupPic(pvQtPic *pic)
{
    thePic = pic;
    picType = pic ? pic->Type() : pvQtPic::nil;
    setPicType(picType);
    initView();
    picok = true;
    errmsg = tr("no error");

    m_have2DImage = false;
    m_haveCubeImages = false;

    QSize maxdims(0, 0);
    switch (picType) {
    case pvQtPic::nil:
        break;
    case pvQtPic::rec:
    case pvQtPic::eqs:
    case pvQtPic::eqa:
    case pvQtPic::stg:
        maxdims = maxTex2Dsqr;
        break;
    case pvQtPic::cyl:
    case pvQtPic::eqr:
    case pvQtPic::mrc:
        maxdims = maxTex2Drec;
        break;
    case pvQtPic::cub:
        maxdims = maxTexCube;
#ifdef __APPLE__
        if (MacCubeLimit > 0)
            maxdims = QSize(MacCubeLimit, MacCubeLimit);
#endif
        break;
    }

    if (pic && !maxdims.isEmpty()) {
        thePic->fitFaceToImage(maxdims, texPwr2);
        if (picType == pvQtPic::cub) {
            QSize cubeSize;
            for (int i = 0; i < 6; ++i) {
                std::unique_ptr<QImage> img(thePic->FaceImage(pvQtPic::PicFace(i)));
                m_pendingCubeImages[i] = normalizedTextureImage(img.get());
                if (i == 0)
                    cubeSize = m_pendingCubeImages[i].size();
                if (m_pendingCubeImages[i].size() != cubeSize)
                    m_pendingCubeImages[i] = m_pendingCubeImages[i].scaled(cubeSize);
            }
            m_haveCubeImages = true;
        } else {
            std::unique_ptr<QImage> img(thePic->FaceImage(pvQtPic::front));
            m_pending2DImage = normalizedTextureImage(img.get());
            m_have2DImage = true;
        }
    }

    m_texturesDirty = true;
    requestRender();
    emit reportSurface(surface);
    return picok;
}

void pvQtView::updatePic()
{
    setupPic(thePic);
}

pvQtPic::PicFace pvQtView::pickFace(QPoint pnt)
{
    if (curr_pt != pvQtPic::cub)
        return pvQtPic::front;
    const double w = qMax(1, Width);
    const double h = qMax(1, Height);
    const double nx = 2.0 * pnt.x() / w - 1.0;
    const double ny = 1.0 - 2.0 * pnt.y() / h;
    QVector3D ray(float((nx - 2.0 * (framex + fcompx)) * portAR * std::tan(0.5 * RAD(wFOV))),
                  float((ny - 2.0 * (framey + fcompy)) * std::tan(0.5 * RAD(wFOV))),
                  1.0f);
    ray = viewRotation().mapVector(ray).normalized();
    const float ax = std::abs(ray.x());
    const float ay = std::abs(ray.y());
    const float az = std::abs(ray.z());
    if (az >= ax && az >= ay)
        return ray.z() >= 0 ? pvQtPic::front : pvQtPic::back;
    if (ax >= ay)
        return ray.x() >= 0 ? pvQtPic::left : pvQtPic::right;
    return ray.y() >= 0 ? pvQtPic::top : pvQtPic::bottom;
}

void pvQtView::newFace(pvQtPic::PicFace face)
{
    if (curr_pt != pvQtPic::cub || !thePic)
        return;
    std::unique_ptr<QImage> img(thePic->FaceImage(face));
    if (img) {
        m_pendingCubeImages[int(face)] = normalizedTextureImage(img.get());
        m_haveCubeImages = true;
        m_texturesDirty = true;
        requestRender();
        showview();
    }
}

bool pvQtView::saveView(QString name, QSize size)
{
    requestRender();
    QImage img = grabFramebuffer();
    if (img.isNull())
        img = grab().toImage();
    if (img.isNull())
        return false;
    if (size.isValid() && size != img.size())
        img = img.scaled(size, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    return img.save(name);
}

bool pvQtView::saveView(QString name, double scale)
{
    scale = KLIP(scale, 1, 5);
    return saveView(name, QSize(Width, Height) * scale);
}

void pvQtView::setSurface(int surf)
{
    surface = (surf < 0 || surf > 1) ? 0 : surf;
    requestRender();
    emit reportSurface(surface);
}

bool pvQtView::showOverlay(QImage *ovl)
{
    povly = ovl;
    m_haveOverlayImage = false;
    if (ovl) {
        if (ovl->isNull())
            return false;
        m_pendingOverlayImage = ovl->convertToFormat(QImage::Format_RGBA8888);
        m_haveOverlayImage = true;
    } else {
        m_pendingOverlayImage = QImage();
    }
    m_texturesDirty = true;
    requestRender();
    return true;
}

void pvQtView::recenterMode(bool ckd)
{
    recenter = ckd;
    hangle = -panAngle;
    vangle = -tiltAngle;
    ihangl = -ipan;
    ivangl = -itilt;
    eyex = eyey = eyez = 0;
    setDist(0);
    requestRender();
    showview();
    emit reportRecenter(ckd);
}

void pvQtView::setCubeLimit(int lim)
{
    MacCubeLimit = lim;
}
