/****************************************************************************
** Meta object code from reading C++ file 'systemcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Controllers/systemcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemController_t {
    QByteArrayData data[18];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemController_t qt_meta_stringdata_SystemController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SystemController"
QT_MOC_LITERAL(1, 17, 30), // "CurrentSystemTempratureChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 23), // "CurrentSystemTemprature"
QT_MOC_LITERAL(4, 73, 17), // "TargetTempChanged"
QT_MOC_LITERAL(5, 91, 10), // "TargetTemp"
QT_MOC_LITERAL(6, 102, 26), // "SystemStatusMessageChanged"
QT_MOC_LITERAL(7, 129, 19), // "SystemStatusMessage"
QT_MOC_LITERAL(8, 149, 18), // "SystemStateChanged"
QT_MOC_LITERAL(9, 168, 15), // "HeatSelectState"
QT_MOC_LITERAL(10, 184, 11), // "SystemState"
QT_MOC_LITERAL(11, 196, 26), // "setCurrentSystemTemprature"
QT_MOC_LITERAL(12, 223, 13), // "setTargetTemp"
QT_MOC_LITERAL(13, 237, 22), // "setSystemStatusMessage"
QT_MOC_LITERAL(14, 260, 14), // "setSystemState"
QT_MOC_LITERAL(15, 275, 7), // "HEATING"
QT_MOC_LITERAL(16, 283, 7), // "COOLING"
QT_MOC_LITERAL(17, 291, 4) // "AUTO"

    },
    "SystemController\0CurrentSystemTempratureChanged\0"
    "\0CurrentSystemTemprature\0TargetTempChanged\0"
    "TargetTemp\0SystemStatusMessageChanged\0"
    "SystemStatusMessage\0SystemStateChanged\0"
    "HeatSelectState\0SystemState\0"
    "setCurrentSystemTemprature\0setTargetTemp\0"
    "setSystemStatusMessage\0setSystemState\0"
    "HEATING\0COOLING\0AUTO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    3,   99,

 // enum data: key, value
      15, uint(SystemController::HEATING),
      16, uint(SystemController::COOLING),
      17, uint(SystemController::AUTO),

       0        // eod
};

void SystemController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CurrentSystemTempratureChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->TargetTempChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SystemStatusMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SystemStateChanged((*reinterpret_cast< HeatSelectState(*)>(_a[1]))); break;
        case 4: _t->setCurrentSystemTemprature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setTargetTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setSystemStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setSystemState((*reinterpret_cast< HeatSelectState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::CurrentSystemTempratureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::TargetTempChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::SystemStatusMessageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemController::*)(HeatSelectState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemController::SystemStateChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->CurrentSystemTemprature(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->TargetTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->SystemStatusMessage(); break;
        case 3: *reinterpret_cast< HeatSelectState*>(_v) = _t->SystemState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentSystemTemprature(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTargetTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSystemStatusMessage(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSystemState(*reinterpret_cast< HeatSelectState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SystemController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemController.data,
    qt_meta_data_SystemController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemController::CurrentSystemTempratureChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemController::TargetTempChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SystemController::SystemStatusMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemController::SystemStateChanged(HeatSelectState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
