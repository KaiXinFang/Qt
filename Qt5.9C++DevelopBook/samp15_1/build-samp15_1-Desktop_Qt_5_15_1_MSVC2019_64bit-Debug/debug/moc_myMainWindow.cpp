/****************************************************************************
** Meta object code from reading C++ file 'myMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../samp15_1/myMainWindow.h"
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
    QByteArrayData data[22];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myMainWindow_t qt_meta_stringdata_myMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "myMainWindow"
QT_MOC_LITERAL(1, 13, 14), // "onStateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(4, 49, 5), // "state"
QT_MOC_LITERAL(5, 55, 17), // "onPlayListChanged"
QT_MOC_LITERAL(6, 73, 8), // "position"
QT_MOC_LITERAL(7, 82, 17), // "onDurationChanged"
QT_MOC_LITERAL(8, 100, 8), // "duration"
QT_MOC_LITERAL(9, 109, 17), // "onPositionChanged"
QT_MOC_LITERAL(10, 127, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(11, 145, 20), // "on_btnRemove_clicked"
QT_MOC_LITERAL(12, 166, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(13, 186, 27), // "on_listWidget_doubleClicked"
QT_MOC_LITERAL(14, 214, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 226, 5), // "index"
QT_MOC_LITERAL(16, 232, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(17, 251, 19), // "on_btnPause_clicked"
QT_MOC_LITERAL(18, 271, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(19, 290, 28), // "on_sliderVolumn_valueChanged"
QT_MOC_LITERAL(20, 319, 5), // "value"
QT_MOC_LITERAL(21, 325, 30) // "on_sliderPosition_valueChanged"

    },
    "myMainWindow\0onStateChanged\0\0"
    "QMediaPlayer::State\0state\0onPlayListChanged\0"
    "position\0onDurationChanged\0duration\0"
    "onPositionChanged\0on_btnAdd_clicked\0"
    "on_btnRemove_clicked\0on_btnClear_clicked\0"
    "on_listWidget_doubleClicked\0QModelIndex\0"
    "index\0on_btnPlay_clicked\0on_btnPause_clicked\0"
    "on_btnStop_clicked\0on_sliderVolumn_valueChanged\0"
    "value\0on_sliderPosition_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       9,    1,   88,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,
      19,    1,  100,    2, 0x08 /* Private */,
      21,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void myMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 1: _t->onPlayListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->onPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->on_btnAdd_clicked(); break;
        case 5: _t->on_btnRemove_clicked(); break;
        case 6: _t->on_btnClear_clicked(); break;
        case 7: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_btnPlay_clicked(); break;
        case 9: _t->on_btnPause_clicked(); break;
        case 10: _t->on_btnStop_clicked(); break;
        case 11: _t->on_sliderVolumn_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_sliderPosition_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
