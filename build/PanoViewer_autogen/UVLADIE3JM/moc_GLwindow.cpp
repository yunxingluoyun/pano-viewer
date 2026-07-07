/****************************************************************************
** Meta object code from reading C++ file 'GLwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/GLwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8GLwindowE_t {};
} // unnamed namespace

template <> constexpr inline auto GLwindow::qt_create_metaobjectdata<qt_meta_tag_ZN8GLwindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GLwindow",
        "showTitle",
        "",
        "msg",
        "showProj",
        "name",
        "showFov",
        "QSizeF",
        "fovs",
        "showSurface",
        "surf",
        "newPicture",
        "const char*",
        "type",
        "about_pvQt",
        "save_as",
        "set_surface",
        "turn90",
        "t",
        "setCubeLimit",
        "picTypeChanged",
        "hFovChanged",
        "h",
        "vFovChanged",
        "v",
        "OGLerror",
        "reportTurn",
        "turn",
        "roll",
        "pitch",
        "yaw",
        "reset_turn",
        "overlayCtl",
        "c"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showTitle'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'showProj'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'showFov'
        QtMocHelpers::SignalData<void(QSizeF)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'showSurface'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'newPicture'
        QtMocHelpers::SlotData<void(const char *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'about_pvQt'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save_as'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'set_surface'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'turn90'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'setCubeLimit'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'picTypeChanged'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'hFovChanged'
        QtMocHelpers::SlotData<void(double)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 22 },
        }}),
        // Slot 'vFovChanged'
        QtMocHelpers::SlotData<void(double)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Slot 'OGLerror'
        QtMocHelpers::SlotData<void(QString)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'reportTurn'
        QtMocHelpers::SlotData<void(int, double, double, double)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 27 }, { QMetaType::Double, 28 }, { QMetaType::Double, 29 }, { QMetaType::Double, 30 },
        }}),
        // Slot 'reset_turn'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'overlayCtl'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GLwindow, qt_meta_tag_ZN8GLwindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GLwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GLwindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GLwindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8GLwindowE_t>.metaTypes,
    nullptr
} };

void GLwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GLwindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showTitle((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->showProj((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->showFov((*reinterpret_cast<std::add_pointer_t<QSizeF>>(_a[1]))); break;
        case 3: _t->showSurface((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->newPicture((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 5: _t->about_pvQt(); break;
        case 6: _t->save_as(); break;
        case 7: _t->set_surface((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->turn90((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setCubeLimit((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->picTypeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->hFovChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->vFovChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->OGLerror((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->reportTurn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 15: _t->reset_turn(); break;
        case 16: _t->overlayCtl((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GLwindow::*)(QString )>(_a, &GLwindow::showTitle, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLwindow::*)(QString )>(_a, &GLwindow::showProj, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLwindow::*)(QSizeF )>(_a, &GLwindow::showFov, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLwindow::*)(int )>(_a, &GLwindow::showSurface, 3))
            return;
    }
}

const QMetaObject *GLwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GLwindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GLwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void GLwindow::showTitle(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GLwindow::showProj(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void GLwindow::showFov(QSizeF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void GLwindow::showSurface(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
