/****************************************************************************
** Meta object code from reading C++ file 'myMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../samp5_8/myMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myMainWindow_t {
    QByteArrayData data[13];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myMainWindow_t qt_meta_stringdata_myMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "myMainWindow"
QT_MOC_LITERAL(1, 13, 17), // "on_currentChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 44, 7), // "current"
QT_MOC_LITERAL(5, 52, 8), // "previous"
QT_MOC_LITERAL(6, 61, 20), // "on_actOpen_triggered"
QT_MOC_LITERAL(7, 82, 22), // "on_actAppend_triggered"
QT_MOC_LITERAL(8, 105, 22), // "on_actDelete_triggered"
QT_MOC_LITERAL(9, 128, 25), // "on_actAlignLeft_triggered"
QT_MOC_LITERAL(10, 154, 24), // "on_actFontBold_triggered"
QT_MOC_LITERAL(11, 179, 7), // "checked"
QT_MOC_LITERAL(12, 187, 20) // "on_actSave_triggered"

    },
    "myMainWindow\0on_currentChanged\0\0"
    "QModelIndex\0current\0previous\0"
    "on_actOpen_triggered\0on_actAppend_triggered\0"
    "on_actDelete_triggered\0on_actAlignLeft_triggered\0"
    "on_actFontBold_triggered\0checked\0"
    "on_actSave_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

       0        // eod
};

void myMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->on_actOpen_triggered(); break;
        case 2: _t->on_actAppend_triggered(); break;
        case 3: _t->on_actDelete_triggered(); break;
        case 4: _t->on_actAlignLeft_triggered(); break;
        case 5: _t->on_actFontBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_actSave_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_myMainWindow.data,
    qt_meta_data_myMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int myMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
