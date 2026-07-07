/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MainWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "step_pan",
        "",
        "d",
        "step_tilt",
        "step_zoom",
        "step_roll",
        "step_dist",
        "step_hfov",
        "step_vfov",
        "step_iproj",
        "save_as",
        "home_view",
        "home_eyeXY",
        "reset_view",
        "reset_turn",
        "super_wide",
        "set_view",
        "v",
        "turn90",
        "set_surface",
        "surf",
        "step_eyex",
        "step_eyey",
        "newPicture",
        "const char*",
        "pictype",
        "about_pvQt",
        "overlayCtl",
        "c",
        "recenterMode",
        "ckd",
        "showStatus",
        "msg",
        "showTitle",
        "showProj",
        "name",
        "showFov",
        "QSizeF",
        "fovs",
        "showSurface",
        "showRecenter",
        "verify",
        "i",
        "panLft",
        "panRgt",
        "tiltUp",
        "tiltDwn",
        "zoomIn",
        "zoomOut",
        "rollLeft",
        "rollRight",
        "eyeIn",
        "eyeOut",
        "homeView",
        "resetView",
        "on_actionPanini_proj_triggered",
        "on_actionLinear_proj_triggered",
        "on_actionOrtho_proj_triggered",
        "on_actionSuper_wide_triggered",
        "on_action90_deg_CW_triggered",
        "on_actionQTVR_triggered",
        "on_actionRectilinear_triggered",
        "on_actionFisheye_triggered",
        "on_actionSpherical_triggered",
        "on_actionCylindrical_triggered",
        "on_actionStereographic_triggered",
        "on_actionMercator_triggered",
        "on_actionEquirectangular_triggered",
        "on_actionCube_faces_triggered",
        "on_actionPT_script_triggered",
        "on_actionAbout_pvQt_triggered",
        "on_actionMouse_modes_triggered",
        "on_actionSave_as_triggered",
        "on_actionHFovUp_triggered",
        "on_actionHFovDn_triggered",
        "on_actionVFovUp_triggered",
        "on_actionVFovDn_triggered",
        "on_actionHome_Eye_X_Y_triggered",
        "on_actionNone_wire_model_triggered",
        "on_actionNext_iProj_triggered",
        "on_actionToggleSurface_triggered",
        "on_actionReset_turn_triggered",
        "on_actionCube_limit_triggered",
        "on_actionShow_Hide_triggered",
        "on_actionLoad_overlay_triggered",
        "on_actionRemove_triggered",
        "on_actionFade_triggered",
        "on_actionRecenter_mode_triggered",
        "checked",
        "on_actionEye_right_triggered",
        "on_actionEye_left_triggered",
        "on_actionEye_up_triggered",
        "on_actionEye_down_triggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'step_pan'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_tilt'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_zoom'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_roll'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_dist'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_hfov'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_vfov'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'step_iproj'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'save_as'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'home_view'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'home_eyeXY'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'reset_view'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'reset_turn'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'super_wide'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'set_view'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Signal 'turn90'
        QtMocHelpers::SignalData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'set_surface'
        QtMocHelpers::SignalData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Signal 'step_eyex'
        QtMocHelpers::SignalData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'step_eyey'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'newPicture'
        QtMocHelpers::SignalData<void(const char *)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'about_pvQt'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overlayCtl'
        QtMocHelpers::SignalData<void(int)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Signal 'recenterMode'
        QtMocHelpers::SignalData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Slot 'showStatus'
        QtMocHelpers::SlotData<void(QString)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 33 },
        }}),
        // Slot 'showTitle'
        QtMocHelpers::SlotData<void(QString)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 33 },
        }}),
        // Slot 'showProj'
        QtMocHelpers::SlotData<void(QString)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 36 },
        }}),
        // Slot 'showFov'
        QtMocHelpers::SlotData<void(QSizeF)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'showSurface'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Slot 'showRecenter'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'verify'
        QtMocHelpers::SlotData<void(int)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 43 },
        }}),
        // Slot 'panLft'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'panRgt'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tiltUp'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tiltDwn'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomIn'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomOut'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rollLeft'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rollRight'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'eyeIn'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'eyeOut'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'homeView'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetView'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPanini_proj_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLinear_proj_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOrtho_proj_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSuper_wide_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action90_deg_CW_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionQTVR_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRectilinear_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFisheye_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSpherical_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCylindrical_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStereographic_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMercator_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEquirectangular_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCube_faces_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPT_script_triggered'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_pvQt_triggered'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMouse_modes_triggered'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_as_triggered'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHFovUp_triggered'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHFovDn_triggered'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVFovUp_triggered'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVFovDn_triggered'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHome_Eye_X_Y_triggered'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNone_wire_model_triggered'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNext_iProj_triggered'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggleSurface_triggered'
        QtMocHelpers::SlotData<void(bool)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Slot 'on_actionReset_turn_triggered'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCube_limit_triggered'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_Hide_triggered'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLoad_overlay_triggered'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemove_triggered'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFade_triggered'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRecenter_mode_triggered'
        QtMocHelpers::SlotData<void(bool)>(88, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 89 },
        }}),
        // Slot 'on_actionEye_right_triggered'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEye_left_triggered'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEye_up_triggered'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEye_down_triggered'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->step_pan((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->step_tilt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->step_zoom((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->step_roll((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->step_dist((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->step_hfov((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->step_vfov((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->step_iproj((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->save_as(); break;
        case 9: _t->home_view(); break;
        case 10: _t->home_eyeXY(); break;
        case 11: _t->reset_view(); break;
        case 12: _t->reset_turn(); break;
        case 13: _t->super_wide(); break;
        case 14: _t->set_view((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->turn90((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->set_surface((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->step_eyex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->step_eyey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->newPicture((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 20: _t->about_pvQt(); break;
        case 21: _t->overlayCtl((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->recenterMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->showStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->showTitle((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->showProj((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->showFov((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 27: _t->showSurface((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->showRecenter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->verify((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->panLft(); break;
        case 31: _t->panRgt(); break;
        case 32: _t->tiltUp(); break;
        case 33: _t->tiltDwn(); break;
        case 34: _t->zoomIn(); break;
        case 35: _t->zoomOut(); break;
        case 36: _t->rollLeft(); break;
        case 37: _t->rollRight(); break;
        case 38: _t->eyeIn(); break;
        case 39: _t->eyeOut(); break;
        case 40: _t->homeView(); break;
        case 41: _t->resetView(); break;
        case 42: _t->on_actionPanini_proj_triggered(); break;
        case 43: _t->on_actionLinear_proj_triggered(); break;
        case 44: _t->on_actionOrtho_proj_triggered(); break;
        case 45: _t->on_actionSuper_wide_triggered(); break;
        case 46: _t->on_action90_deg_CW_triggered(); break;
        case 47: _t->on_actionQTVR_triggered(); break;
        case 48: _t->on_actionRectilinear_triggered(); break;
        case 49: _t->on_actionFisheye_triggered(); break;
        case 50: _t->on_actionSpherical_triggered(); break;
        case 51: _t->on_actionCylindrical_triggered(); break;
        case 52: _t->on_actionStereographic_triggered(); break;
        case 53: _t->on_actionMercator_triggered(); break;
        case 54: _t->on_actionEquirectangular_triggered(); break;
        case 55: _t->on_actionCube_faces_triggered(); break;
        case 56: _t->on_actionPT_script_triggered(); break;
        case 57: _t->on_actionAbout_pvQt_triggered(); break;
        case 58: _t->on_actionMouse_modes_triggered(); break;
        case 59: _t->on_actionSave_as_triggered(); break;
        case 60: _t->on_actionHFovUp_triggered(); break;
        case 61: _t->on_actionHFovDn_triggered(); break;
        case 62: _t->on_actionVFovUp_triggered(); break;
        case 63: _t->on_actionVFovDn_triggered(); break;
        case 64: _t->on_actionHome_Eye_X_Y_triggered(); break;
        case 65: _t->on_actionNone_wire_model_triggered(); break;
        case 66: _t->on_actionNext_iProj_triggered(); break;
        case 67: _t->on_actionToggleSurface_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 68: _t->on_actionReset_turn_triggered(); break;
        case 69: _t->on_actionCube_limit_triggered(); break;
        case 70: _t->on_actionShow_Hide_triggered(); break;
        case 71: _t->on_actionLoad_overlay_triggered(); break;
        case 72: _t->on_actionRemove_triggered(); break;
        case 73: _t->on_actionFade_triggered(); break;
        case 74: _t->on_actionRecenter_mode_triggered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 75: _t->on_actionEye_right_triggered(); break;
        case 76: _t->on_actionEye_left_triggered(); break;
        case 77: _t->on_actionEye_up_triggered(); break;
        case 78: _t->on_actionEye_down_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_pan, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_tilt, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_zoom, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_roll, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_dist, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_hfov, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_vfov, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_iproj, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::save_as, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::home_view, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::home_eyeXY, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::reset_view, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::reset_turn, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::super_wide, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::set_view, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::turn90, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::set_surface, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_eyex, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::step_eyey, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const char * )>(_a, &MainWindow::newPicture, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::about_pvQt, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::overlayCtl, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::recenterMode, 22))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_MainWindow"))
        return static_cast< Ui_MainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 79)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 79;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::step_pan(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainWindow::step_tilt(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MainWindow::step_zoom(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MainWindow::step_roll(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MainWindow::step_dist(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MainWindow::step_hfov(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MainWindow::step_vfov(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void MainWindow::step_iproj(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void MainWindow::save_as()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::home_view()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::home_eyeXY()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MainWindow::reset_view()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainWindow::reset_turn()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MainWindow::super_wide()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainWindow::set_view(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void MainWindow::turn90(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void MainWindow::set_surface(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void MainWindow::step_eyex(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void MainWindow::step_eyey(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void MainWindow::newPicture(const char * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void MainWindow::about_pvQt()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MainWindow::overlayCtl(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void MainWindow::recenterMode(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}
QT_WARNING_POP
