/****************************************************************************
** Meta object code from reading C++ file 'myDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../samp13_1/myDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myDialog_t {
    QByteArrayData data[10];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myDialog_t qt_meta_stringdata_myDialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myDialog"
QT_MOC_LITERAL(1, 9, 17), // "onthreadA_started"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "onthreadA_finished"
QT_MOC_LITERAL(4, 47, 9), // "onTimeOut"
QT_MOC_LITERAL(5, 57, 25), // "on_btnStartThread_clicked"
QT_MOC_LITERAL(6, 83, 23), // "on_btnDiceBegin_clicked"
QT_MOC_LITERAL(7, 107, 21), // "on_btnDiceEnd_clicked"
QT_MOC_LITERAL(8, 129, 24), // "on_btnStopThread_clicked"
QT_MOC_LITERAL(9, 154, 19) // "on_btnClear_clicked"

    },
    "myDialog\0onthreadA_started\0\0"
    "onthreadA_finished\0onTimeOut\0"
    "on_btnStartThread_clicked\0"
    "on_btnDiceBegin_clicked\0on_btnDiceEnd_clicked\0"
    "on_btnStopThread_clicked\0on_btnClear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onthreadA_started(); break;
        case 1: _t->onthreadA_finished(); break;
        case 2: _t->onTimeOut(); break;
        case 3: _t->on_btnStartThread_clicked(); break;
        case 4: _t->on_btnDiceBegin_clicked(); break;
        case 5: _t->on_btnDiceEnd_clicked(); break;
        case 6: _t->on_btnStopThread_clicked(); break;
        case 7: _t->on_btnClear_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject myDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_myDialog.data,
    qt_meta_data_myDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int myDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
