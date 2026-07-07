/*
 * QRhi-backed panorama display widget.
 */

#ifndef PVQTVIEW_H
#define PVQTVIEW_H

#include <QRhiWidget>
#include <QImage>
#include <QMatrix4x4>
#include <rhi/qshader.h>
#include <QTimer>

#include "pvQtPic.h"

class QRhi;
class QRhiBuffer;
class QRhiCommandBuffer;
class QRhiGraphicsPipeline;
class QRhiSampler;
class QRhiShaderResourceBindings;
class QRhiTexture;

class pvQtView : public QRhiWidget
{
    Q_OBJECT
public:
    explicit pvQtView(QWidget *parent = nullptr);
    ~pvQtView() override;

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    bool OpenGLOK();
    QString OpenGLVersion() { return QStringLiteral("QRhi"); }
    QString OpenGLVendor() { return QStringLiteral("Qt Rendering Hardware Interface"); }
    QString OpenGLHardware() { return m_backendName; }
    QString OpenGLLimits() {
        return QStringLiteral("texPwr2 %1, texMax %2, cubeMax %3")
            .arg(texPwr2).arg(max2d).arg(maxcube);
    }

    bool showOverlay(QImage *ovl);
    bool showPic(pvQtPic *pic);
    bool picOK(QString &errMsg) {
        errMsg = errmsg;
        return picok;
    }
    pvQtPic::PicFace pickFace(QPoint pnt);
    bool saveView(QString name, QSize size = QSize());
    bool saveView(QString name, double scale = 1.0);
    QSize screenSize() { return QSize(Width, Height); }

public slots:
    void setPan(int iangle);
    void setTilt(int iangle);
    void setSpin(int iangle);
    void setZoom(int iangle);
    void setDist(double dist);
    void step_pan(int dp);
    void step_tilt(int dp);
    void step_zoom(int dp);
    void step_roll(int dp);
    void step_dist(int dp);
    void step_hfov(int dp);
    void step_vfov(int dp);
    void step_iproj(int dp);
    void reset_view();
    void set_view(int v);
    void home_view();
    void home_eyeXY();
    void super_fish();
    void picChanged();
    void newFace(pvQtPic::PicFace face);
    void setSurface(int surf);
    void setTurn(int turn, double roll, double pitch, double yaw);
    void setCubeLimit(int lim);
    void recenterMode(bool);
    void step_eyex(int);
    void step_eyey(int);

signals:
    void reportView(QString msg);
    void OGLerror(QString msg);
    void reportTurn(int turn, double roll, double pitch, double yaw);
    void reportFov(QSizeF fovs);
    void reportProj(QString name);
    void reportSurface(int surf);
    void reportRecenter(bool);

protected:
    void initialize(QRhiCommandBuffer *cb) override;
    void render(QRhiCommandBuffer *cb) override;
    void resizeEvent(QResizeEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private slots:
    void mTimeout();

private:
    struct UniformBlock;

    double normalizeAngle(int &iangle, int istep, double lwr, double upr);
    int iAngle(double angle);
    void stepDangl(int dp, int stp);
    void showview();
    void setFOV(double fov = 0);
    void initView();
    void clipEyePosition();
    void setTexMag(double magx, double magy);
    void setPicType(pvQtPic::PicType pt);
    bool setupPic(pvQtPic *pic);
    void updatePic();
    void requestRender();
    void releaseRhiResources();
    bool ensurePipeline();
    bool ensureTextureResources();
    void uploadPendingTextures(QRhiCommandBuffer *cb);
    UniformBlock buildUniforms() const;
    QMatrix4x4 viewRotation() const;
    QMatrix4x4 imageRotation() const;
    QShader loadShader(const QString &name) const;
    QImage normalizedTextureImage(QImage *image) const;

    double hFOV, vFOV;
    double minFOV, maxFOV;
    double wFOV;
    double eyeDistance;
    double eyex, eyey, eyez;
    double framex, framey, fcompx, fcompy, framex0, framey0, fwf, fhf;

    int Width, Height;
    double portAR;
    double Znear, Zfar;
    double panAngle, tiltAngle, spinAngle;
    double minpan, maxpan, mintilt, maxtilt;
    int turn90;
    double turnRoll;
    double turnPitch;
    double turnYaw;

    int ipan, panstep;
    int itilt, tiltstep;
    int ispin, spinstep;
    int izoom, zoomstep;
    int idangl, danglstep;
    int ihangl, hanglstep;
    int ivangl, vanglstep;
    double hangle, vangle;
    int mx0, my0, mx1, my1;
    Qt::MouseButtons mb;
    Qt::KeyboardModifiers mk;
    QTimer mTimer;

    pvQtPic *thePic;
    pvQtPic::PicType picType;
    int ipicType;
    pictureTypes pictypes;
    QSizeF curr_fovs;
    pvQtPic::PicType curr_pt;
    int curr_ipt;
    QSizeF stdTexScale;
    double xtexmag;
    double ytexmag;
    int surface;
    int MacCubeLimit;
    QImage *povly;
    bool recenter;

    bool texPwr2;
    bool cubeMap;
    int maxcube;
    int max2d;
    QSize maxTex2Dsqr;
    QSize maxTex2Drec;
    QSize maxTexCube;
    bool picok;
    QString errmsg;
    QString m_backendName;

    QRhiBuffer *m_ubuf;
    QRhiSampler *m_sampler;
    QRhiTexture *m_texture2D;
    QRhiTexture *m_cubeTexture;
    QRhiTexture *m_overlayTexture;
    QRhiShaderResourceBindings *m_srb;
    QRhiGraphicsPipeline *m_pipeline;
    QSize m_texture2DSize;
    QSize m_cubeTextureSize;
    QSize m_overlayTextureSize;
    QImage m_pending2DImage;
    QImage m_pendingCubeImages[6];
    QImage m_pendingOverlayImage;
    bool m_have2DImage;
    bool m_haveCubeImages;
    bool m_haveOverlayImage;
    bool m_texturesDirty;
    bool m_resourcesReady;
    bool m_renderPending;
};

#endif
