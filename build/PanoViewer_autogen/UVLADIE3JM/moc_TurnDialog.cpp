/****************************************************************************
** Meta object code from reading C++ file 'TurnDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/TurnDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TurnDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10TurnDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto TurnDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10TurnDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TurnDialog",
        "newTurn",
        "",
        "turn",
        "roll",
        "pitch",
        "yaw",
        "setTurn",
        "onTurnList_currentIndexChanged",
        "i",
        "onRollBox_valueChanged",
        "onPitchBox_valueChanged",
        "onYawBox_valueChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newTurn'
        QtMocHelpers::SignalData<void(int, double, double, double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Double, 4 }, { QMetaType::Double, 5 }, { QMetaType::Double, 6 },
        }}),
        // Slot 'setTurn'
        QtMocHelpers::SlotData<void(int, double, double, double)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Double, 4 }, { QMetaType::Double, 5 }, { QMetaType::Double, 6 },
        }}),
        // Slot 'onTurnList_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'onRollBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
        // Slot 'onPitchBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
        // Slot 'onYawBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TurnDialog, qt_meta_tag_ZN10TurnDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TurnDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TurnDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TurnDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10TurnDialogE_t>.metaTypes,
    nullptr
} };

void TurnDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TurnDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newTurn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 1: _t->setTurn((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4]))); break;
        case 2: _t->onTurnList_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onRollBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->onPitchBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->onYawBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TurnDialog::*)(int , double , double , double )>(_a, &TurnDialog::newTurn, 0))
            return;
    }
}

const QMetaObject *TurnDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TurnDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TurnDialogE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_TurnDialog"))
        return static_cast< Ui_TurnDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int TurnDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TurnDialog::newTurn(int _t1, double _t2, double _t3, double _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
