/****************************************************************************
** Meta object code from reading C++ file 'myMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../samp4_9/myMainWindow.h"
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
    QByteArrayData data[19];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myMainWindow_t qt_meta_stringdata_myMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "myMainWindow"
QT_MOC_LITERAL(1, 13, 23), // "on_btnSetHeader_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "on_btnIniData_clicked"
QT_MOC_LITERAL(4, 60, 31), // "on_tableInfo_currentCellChanged"
QT_MOC_LITERAL(5, 92, 10), // "currentRow"
QT_MOC_LITERAL(6, 103, 13), // "currentColumn"
QT_MOC_LITERAL(7, 117, 11), // "previousRow"
QT_MOC_LITERAL(8, 129, 14), // "previousColumn"
QT_MOC_LITERAL(9, 144, 23), // "on_btnInsertRow_clicked"
QT_MOC_LITERAL(10, 168, 23), // "on_btnAppendRow_clicked"
QT_MOC_LITERAL(11, 192, 23), // "on_btnDelCurRow_clicked"
QT_MOC_LITERAL(12, 216, 24), // "on_chkBoxHeaderH_clicked"
QT_MOC_LITERAL(13, 241, 7), // "checked"
QT_MOC_LITERAL(14, 249, 24), // "on_chkBoxHeaderV_clicked"
QT_MOC_LITERAL(15, 274, 25), // "on_chkBoxRowColor_clicked"
QT_MOC_LITERAL(16, 300, 25), // "on_rBtnSelectItem_clicked"
QT_MOC_LITERAL(17, 326, 24), // "on_rBtnSelectRow_clicked"
QT_MOC_LITERAL(18, 351, 24) // "on_btnReadToEdit_clicked"

    },
    "myMainWindow\0on_btnSetHeader_clicked\0"
    "\0on_btnIniData_clicked\0"
    "on_tableInfo_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_btnInsertRow_clicked\0"
    "on_btnAppendRow_clicked\0on_btnDelCurRow_clicked\0"
    "on_chkBoxHeaderH_clicked\0checked\0"
    "on_chkBoxHeaderV_clicked\0"
    "on_chkBoxRowColor_clicked\0"
    "on_rBtnSelectItem_clicked\0"
    "on_rBtnSelectRow_clicked\0"
    "on_btnReadToEdit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    4,   76,    2, 0x08 /* Private */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    1,   88,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSetHeader_clicked(); break;
        case 1: _t->on_btnIniData_clicked(); break;
        case 2: _t->on_tableInfo_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->on_btnInsertRow_clicked(); break;
        case 4: _t->on_btnAppendRow_clicked(); break;
        case 5: _t->on_btnDelCurRow_clicked(); break;
        case 6: _t->on_chkBoxHeaderH_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_chkBoxHeaderV_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_chkBoxRowColor_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_rBtnSelectItem_clicked(); break;
        case 10: _t->on_rBtnSelectRow_clicked(); break;
        case 11: _t->on_btnReadToEdit_clicked(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
