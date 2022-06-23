/****************************************************************************
** Meta object code from reading C++ file 'graphcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progettoPlamadeala/grafi/graphcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphController_t {
    QByteArrayData data[15];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphController_t qt_meta_stringdata_GraphController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GraphController"
QT_MOC_LITERAL(1, 16, 11), // "changedSize"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "QSize*"
QT_MOC_LITERAL(4, 36, 7), // "newSize"
QT_MOC_LITERAL(5, 44, 13), // "value_Changed"
QT_MOC_LITERAL(6, 58, 1), // "x"
QT_MOC_LITERAL(7, 60, 1), // "y"
QT_MOC_LITERAL(8, 62, 8), // "newValue"
QT_MOC_LITERAL(9, 71, 12), // "value_Column"
QT_MOC_LITERAL(10, 84, 6), // "column"
QT_MOC_LITERAL(11, 91, 7), // "colname"
QT_MOC_LITERAL(12, 99, 9), // "set_value"
QT_MOC_LITERAL(13, 109, 9), // "get_value"
QT_MOC_LITERAL(14, 119, 12) // "getColumName"

    },
    "GraphController\0changedSize\0\0QSize*\0"
    "newSize\0value_Changed\0x\0y\0newValue\0"
    "value_Column\0column\0colname\0set_value\0"
    "get_value\0getColumName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphController[] = {

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

void GraphController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphController *_t = static_cast<GraphController *>(_o);
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
            typedef void (GraphController::*_t)(QSize * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphController::changedSize)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GraphController::*_t)(int , int , double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphController::value_Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GraphController::*_t)(int , QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphController::value_Column)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GraphController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphController.data,
      qt_meta_data_GraphController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GraphController::changedSize(QSize * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphController::value_Changed(int _t1, int _t2, double _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< GraphController *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphController::value_Column(int _t1, QString _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< GraphController *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
