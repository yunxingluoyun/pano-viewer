/****************************************************************************
** Meta object code from reading C++ file 'pvQtView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/pvQtView.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pvQtView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8pvQtViewE_t {};
} // unnamed namespace

template <> constexpr inline auto pvQtView::qt_create_metaobjectdata<qt_meta_tag_ZN8pvQtViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "pvQtView",
        "reportView",
        "",
        "msg",
        "OGLerror",
        "reportTurn",
        "turn",
        "roll",
        "pitch",
        "yaw",
        "reportFov",
        "QSizeF",
        "fovs",
        "reportProj",
        "name",
        "reportSurface",
        "surf",
        "reportRecenter",
        "setPan",
        "iangle",
        "setTilt",
        "setSpin",
        "setZoom",
        "setDist",
        "dist",
        "step_pan",
        "dp",
        "step_tilt",
        "step_zoom",
        "step_roll",
        "step_dist",
        "step_hfov",
        "step_vfov",
        "step_iproj",
        "reset_view",
        "set_view",
        "v",
        "home_view",
        "home_eyeXY",
        "super_fish",
        "picChanged",
        "newFace",
        "pvQtPic::PicFace",
        "face",
        "setSurface",
        "setTurn",
        "setCubeLimit",
        "lim",
        "recenterMode",
        "step_eyex",
        "step_eyey",
        "mTimeout"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'reportView'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'OGLerror'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'reportTurn'
        QtMocHelpers::SignalData<void(int, double, double, double)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Double, 7 }, { QMetaType::Double, 8 }, { QMetaType::Double, 9 },
        }}),
        // Signal 'reportFov'
        QtMocHelpers::SignalData<void(QSizeF)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'reportProj'
        QtMocHelpers::SignalData<void(QString)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Signal 'reportSurface'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Signal 'reportRecenter'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPan'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'setTilt'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'setSpin'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'setZoom'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'setDist'
        QtMocHelpers::SlotData<void(double)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'step_pan'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_tilt'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_zoom'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_roll'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_dist'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_hfov'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_vfov'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'step_iproj'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'reset_view'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'set_view'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 36 },
        }}),
        // Slot 'home_view'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'home_eyeXY'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'super_fish'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'picChanged'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newFace'
        QtMocHelpers::SlotData<void(pvQtPic::PicFace)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'setSurface'
        QtMocHelpers::SlotData<void(int)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'setTurn'
        QtMocHelpers::SlotData<void(int, double, double, double)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Double, 7 }, { QMetaType::Double, 8 }, { QMetaType::Double, 9 },
        }}),
        // Slot 'setCubeLimit'
        QtMocHelpers::SlotData<void(int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 47 },
        }}),
        // Slot 'recenterMode'
        QtMocHelpers::SlotData<void(bool)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'step_eyex'
        QtMocHelpers::SlotData<void(int)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'step_eyey'
        QtMocHelpers::SlotData<void(int)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'mTimeout'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<pvQtView, qt_meta_tag_ZN8pvQtViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject pvQtView::staticMetaObject = { {
    QMetaObject::SuperData::link<QRhiWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8pvQtViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8pvQtViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8pvQtViewE_t>.metaTypes,
    nullptr
} };

void pvQtView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<pvQtView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reportView((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->OGLerror((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->reportTurn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 3: _t->reportFov((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 4: _t->reportProj((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->reportSurface((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->reportRecenter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setPan((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setTilt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setSpin((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setZoom((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setDist((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->step_pan((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->step_tilt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->step_zoom((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->step_roll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->step_dist((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->step_hfov((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->step_vfov((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->step_iproj((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->reset_view(); break;
        case 21: _t->set_view((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->home_view(); break;
        case 23: _t->home_eyeXY(); break;
        case 24: _t->super_fish(); break;
        case 25: _t->picChanged(); break;
        case 26: _t->newFace((*reinterpret_cast<std::add_pointer_t<pvQtPic::PicFace>>(_a[1]))); break;
        case 27: _t->setSurface((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->setTurn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 29: _t->setCubeLimit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->recenterMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->step_eyex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->step_eyey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->mTimeout(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(QString )>(_a, &pvQtView::reportView, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(QString )>(_a, &pvQtView::OGLerror, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(int , double , double , double )>(_a, &pvQtView::reportTurn, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(QSizeF )>(_a, &pvQtView::reportFov, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(QString )>(_a, &pvQtView::reportProj, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(int )>(_a, &pvQtView::reportSurface, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (pvQtView::*)(bool )>(_a, &pvQtView::reportRecenter, 6))
            return;
    }
}

const QMetaObject *pvQtView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pvQtView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8pvQtViewE_t>.strings))
        return static_cast<void*>(this);
    return QRhiWidget::qt_metacast(_clname);
}

int pvQtView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRhiWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void pvQtView::reportView(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void pvQtView::OGLerror(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void pvQtView::reportTurn(int _t1, double _t2, double _t3, double _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void pvQtView::reportFov(QSizeF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void pvQtView::reportProj(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void pvQtView::reportSurface(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void pvQtView::reportRecenter(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
