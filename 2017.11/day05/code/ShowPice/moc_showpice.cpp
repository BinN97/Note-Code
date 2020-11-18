/****************************************************************************
** Meta object code from reading C++ file 'showpice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "showpice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showpice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShowPice_t {
    QByteArrayData data[8];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShowPice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShowPice_t qt_meta_stringdata_ShowPice = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ShowPice"
QT_MOC_LITERAL(1, 9, 14), // "on_clo_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "on_up_clicked"
QT_MOC_LITERAL(4, 39, 15), // "on_down_clicked"
QT_MOC_LITERAL(5, 55, 15), // "on_play_clicked"
QT_MOC_LITERAL(6, 71, 18), // "on_val_sliderMoved"
QT_MOC_LITERAL(7, 90, 8) // "position"

    },
    "ShowPice\0on_clo_clicked\0\0on_up_clicked\0"
    "on_down_clicked\0on_play_clicked\0"
    "on_val_sliderMoved\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowPice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ShowPice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShowPice *_t = static_cast<ShowPice *>(_o);
        switch (_id) {
        case 0: _t->on_clo_clicked(); break;
        case 1: _t->on_up_clicked(); break;
        case 2: _t->on_down_clicked(); break;
        case 3: _t->on_play_clicked(); break;
        case 4: _t->on_val_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ShowPice::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ShowPice.data,
      qt_meta_data_ShowPice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShowPice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowPice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShowPice.stringdata))
        return static_cast<void*>(const_cast< ShowPice*>(this));
    return QDialog::qt_metacast(_clname);
}

int ShowPice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
