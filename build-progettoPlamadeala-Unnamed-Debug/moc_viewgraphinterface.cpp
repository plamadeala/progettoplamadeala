/****************************************************************************
** Meta object code from reading C++ file 'viewgraphinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progettoPlamadeala/grafi/viewgraphinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewgraphinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewGraphInterface_t {
    QByteArrayData data[21];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewGraphInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewGraphInterface_t qt_meta_stringdata_ViewGraphInterface = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ViewGraphInterface"
QT_MOC_LITERAL(1, 19, 8), // "getValue"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "x"
QT_MOC_LITERAL(4, 31, 1), // "y"
QT_MOC_LITERAL(5, 33, 11), // "ChangeValue"
QT_MOC_LITERAL(6, 45, 8), // "newValue"
QT_MOC_LITERAL(7, 54, 16), // "changeRowColumns"
QT_MOC_LITERAL(8, 71, 8), // "QString&"
QT_MOC_LITERAL(9, 80, 1), // "s"
QT_MOC_LITERAL(10, 82, 12), // "getColumName"
QT_MOC_LITERAL(11, 95, 6), // "column"
QT_MOC_LITERAL(12, 102, 10), // "getRowName"
QT_MOC_LITERAL(13, 113, 3), // "row"
QT_MOC_LITERAL(14, 117, 8), // "getQsize"
QT_MOC_LITERAL(15, 126, 8), // "NewShape"
QT_MOC_LITERAL(16, 135, 6), // "QSize*"
QT_MOC_LITERAL(17, 142, 1), // "q"
QT_MOC_LITERAL(18, 144, 8), // "gotValue"
QT_MOC_LITERAL(19, 153, 10), // "rowChanged"
QT_MOC_LITERAL(20, 164, 13) // "columnChanged"

    },
    "ViewGraphInterface\0getValue\0\0x\0y\0"
    "ChangeValue\0newValue\0changeRowColumns\0"
    "QString&\0s\0getColumName\0column\0"
    "getRowName\0row\0getQsize\0NewShape\0"
    "QSize*\0q\0gotValue\0rowChanged\0columnChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewGraphInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    3,   69,    2, 0x06 /* Public */,
       7,    3,   76,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,
      12,    1,   86,    2, 0x06 /* Public */,
      14,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   90,    2, 0x0a /* Public */,
      18,    3,   93,    2, 0x0a /* Public */,
      19,    2,  100,    2, 0x0a /* Public */,
      20,    2,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    3,    4,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    9,

       0        // eod
};

void ViewGraphInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewGraphInterface *_t = static_cast<ViewGraphInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->ChangeValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->changeRowColumns((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->getColumName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->getRowName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->getQsize(); break;
        case 6: _t->NewShape((*reinterpret_cast< QSize*(*)>(_a[1]))); break;
        case 7: _t->gotValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->rowChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->columnChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ViewGraphInterface::*_t)(int , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewGraphInterface::getValue)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ViewGraphInterface::*_t)(int , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewGraphInterface::ChangeValue)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ViewGraphInterface::*_t)(int , int , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewGraphInterface::changeRowColumns)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ViewGraphInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewGraphInterface::getColumName)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ViewGraphInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewGraphInterface::getRowName)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ViewGraphInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewGraphInterface::getQsize)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject ViewGraphInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ViewGraphInterface.data,
      qt_meta_data_ViewGraphInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ViewGraphInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewGraphInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewGraphInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewGraphInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ViewGraphInterface::getValue(int _t1, int _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< ViewGraphInterface *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewGraphInterface::ChangeValue(int _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewGraphInterface::changeRowColumns(int _t1, int _t2, QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ViewGraphInterface::getColumName(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ViewGraphInterface::getRowName(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ViewGraphInterface::getQsize()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
