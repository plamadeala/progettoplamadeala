/****************************************************************************
** Meta object code from reading C++ file 'abstractgraphcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progettoPlamadeala/grafi/abstractgraphcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractgraphcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractGraphController_t {
    QByteArrayData data[15];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractGraphController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractGraphController_t qt_meta_stringdata_AbstractGraphController = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AbstractGraphController"
QT_MOC_LITERAL(1, 24, 11), // "changedSize"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "QSize*"
QT_MOC_LITERAL(4, 44, 7), // "newSize"
QT_MOC_LITERAL(5, 52, 13), // "value_Changed"
QT_MOC_LITERAL(6, 66, 1), // "x"
QT_MOC_LITERAL(7, 68, 1), // "y"
QT_MOC_LITERAL(8, 70, 8), // "newValue"
QT_MOC_LITERAL(9, 79, 12), // "value_Column"
QT_MOC_LITERAL(10, 92, 6), // "column"
QT_MOC_LITERAL(11, 99, 7), // "colname"
QT_MOC_LITERAL(12, 107, 9), // "set_value"
QT_MOC_LITERAL(13, 117, 9), // "get_value"
QT_MOC_LITERAL(14, 127, 12) // "getColumName"

    },
    "AbstractGraphController\0changedSize\0"
    "\0QSize*\0newSize\0value_Changed\0x\0y\0"
    "newValue\0value_Column\0column\0colname\0"
    "set_value\0get_value\0getColumName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractGraphController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    3,   47,    2, 0x06 /* Public */,
       9,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    3,   59,    2, 0x0a /* Public */,
      13,    2,   66,    2, 0x0a /* Public */,
      14,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void AbstractGraphController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractGraphController *_t = static_cast<AbstractGraphController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedSize((*reinterpret_cast< QSize*(*)>(_a[1]))); break;
        case 1: _t->value_Changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->value_Column((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->set_value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->get_value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->getColumName((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AbstractGraphController::*_t)(QSize * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractGraphController::changedSize)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractGraphController::*_t)(int , int , double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractGraphController::value_Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractGraphController::*_t)(int , QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractGraphController::value_Column)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AbstractGraphController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractGraphController.data,
      qt_meta_data_AbstractGraphController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AbstractGraphController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractGraphController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractGraphController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractGraphController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AbstractGraphController::changedSize(QSize * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractGraphController::value_Changed(int _t1, int _t2, double _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< AbstractGraphController *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractGraphController::value_Column(int _t1, QString _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< AbstractGraphController *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
