/****************************************************************************
** Meta object code from reading C++ file 'grafico_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../progettoPlamadeala/Grafico_view/grafico_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grafico_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Grafico_view_t {
    QByteArrayData data[9];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Grafico_view_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Grafico_view_t qt_meta_stringdata_Grafico_view = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Grafico_view"
QT_MOC_LITERAL(1, 13, 8), // "gotValue"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "x"
QT_MOC_LITERAL(4, 25, 1), // "y"
QT_MOC_LITERAL(5, 27, 8), // "newValue"
QT_MOC_LITERAL(6, 36, 10), // "rowChanged"
QT_MOC_LITERAL(7, 47, 1), // "s"
QT_MOC_LITERAL(8, 49, 13) // "columnChanged"

    },
    "Grafico_view\0gotValue\0\0x\0y\0newValue\0"
    "rowChanged\0s\0columnChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Grafico_view[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       6,    2,   36,    2, 0x0a /* Public */,
       8,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    7,

       0        // eod
};

void Grafico_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Grafico_view *_t = static_cast<Grafico_view *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->rowChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->columnChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Grafico_view::staticMetaObject = {
    { &ViewGraphInterface::staticMetaObject, qt_meta_stringdata_Grafico_view.data,
      qt_meta_data_Grafico_view,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Grafico_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Grafico_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Grafico_view.stringdata0))
        return static_cast<void*>(this);
    return ViewGraphInterface::qt_metacast(_clname);
}

int Grafico_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewGraphInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
