/****************************************************************************
** Meta object code from reading C++ file 'graphcontrollerinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progettoPlamadeala/grafi/graphcontrollerinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphcontrollerinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphControllerInterface_t {
    QByteArrayData data[24];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphControllerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphControllerInterface_t qt_meta_stringdata_GraphControllerInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GraphControllerInterface"
QT_MOC_LITERAL(1, 25, 11), // "changedSize"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "QSize*"
QT_MOC_LITERAL(4, 45, 7), // "newSize"
QT_MOC_LITERAL(5, 53, 13), // "value_Changed"
QT_MOC_LITERAL(6, 67, 1), // "x"
QT_MOC_LITERAL(7, 69, 1), // "y"
QT_MOC_LITERAL(8, 71, 8), // "newValue"
QT_MOC_LITERAL(9, 80, 12), // "value_Column"
QT_MOC_LITERAL(10, 93, 6), // "column"
QT_MOC_LITERAL(11, 100, 7), // "colname"
QT_MOC_LITERAL(12, 108, 9), // "value_Row"
QT_MOC_LITERAL(13, 118, 3), // "row"
QT_MOC_LITERAL(14, 122, 7), // "rowname"
QT_MOC_LITERAL(15, 130, 14), // "get_graphQsize"
QT_MOC_LITERAL(16, 145, 9), // "set_value"
QT_MOC_LITERAL(17, 155, 9), // "newValuez"
QT_MOC_LITERAL(18, 165, 9), // "get_value"
QT_MOC_LITERAL(19, 175, 12), // "getColumName"
QT_MOC_LITERAL(20, 188, 10), // "getRowName"
QT_MOC_LITERAL(21, 199, 16), // "rowColumnChanged"
QT_MOC_LITERAL(22, 216, 8), // "QString&"
QT_MOC_LITERAL(23, 225, 1) // "s"

    },
    "GraphControllerInterface\0changedSize\0"
    "\0QSize*\0newSize\0value_Changed\0x\0y\0"
    "newValue\0value_Column\0column\0colname\0"
    "value_Row\0row\0rowname\0get_graphQsize\0"
    "set_value\0newValuez\0get_value\0"
    "getColumName\0getRowName\0rowColumnChanged\0"
    "QString&\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphControllerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    3,   67,    2, 0x06 /* Public */,
       9,    2,   74,    2, 0x06 /* Public */,
      12,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   84,    2, 0x0a /* Public */,
      16,    3,   85,    2, 0x0a /* Public */,
      18,    2,   92,    2, 0x0a /* Public */,
      19,    1,   97,    2, 0x0a /* Public */,
      20,    1,  100,    2, 0x0a /* Public */,
      21,    3,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 22,    6,    7,   23,

       0        // eod
};

void GraphControllerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphControllerInterface *_t = static_cast<GraphControllerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedSize((*reinterpret_cast< QSize*(*)>(_a[1]))); break;
        case 1: _t->value_Changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->value_Column((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->value_Row((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->get_graphQsize(); break;
        case 5: _t->set_value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: _t->get_value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->getColumName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->getRowName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->rowColumnChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GraphControllerInterface::*_t)(QSize * ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphControllerInterface::changedSize)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GraphControllerInterface::*_t)(int , int , double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphControllerInterface::value_Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GraphControllerInterface::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphControllerInterface::value_Column)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GraphControllerInterface::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphControllerInterface::value_Row)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GraphControllerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphControllerInterface.data,
      qt_meta_data_GraphControllerInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphControllerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphControllerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphControllerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphControllerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GraphControllerInterface::changedSize(QSize * _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< GraphControllerInterface *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphControllerInterface::value_Changed(int _t1, int _t2, double _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< GraphControllerInterface *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphControllerInterface::value_Column(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphControllerInterface::value_Row(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
