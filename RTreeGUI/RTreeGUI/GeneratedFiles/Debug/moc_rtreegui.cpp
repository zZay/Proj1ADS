/****************************************************************************
** Meta object code from reading C++ file 'rtreegui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rtreegui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtreegui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RTreeGUI_t {
    QByteArrayData data[9];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTreeGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTreeGUI_t qt_meta_stringdata_RTreeGUI = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RTreeGUI"
QT_MOC_LITERAL(1, 9, 24), // "on_pushButton_im_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "on_pushButton_sh_clicked"
QT_MOC_LITERAL(4, 60, 24), // "on_pushButton_ve_clicked"
QT_MOC_LITERAL(5, 85, 24), // "on_pushButton_qu_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_pushButton_op_clicked"
QT_MOC_LITERAL(7, 135, 24), // "on_pushButton_ne_clicked"
QT_MOC_LITERAL(8, 160, 24) // "on_pushButton_re_clicked"

    },
    "RTreeGUI\0on_pushButton_im_clicked\0\0"
    "on_pushButton_sh_clicked\0"
    "on_pushButton_ve_clicked\0"
    "on_pushButton_qu_clicked\0"
    "on_pushButton_op_clicked\0"
    "on_pushButton_ne_clicked\0"
    "on_pushButton_re_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTreeGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RTreeGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RTreeGUI *_t = static_cast<RTreeGUI *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_im_clicked(); break;
        case 1: _t->on_pushButton_sh_clicked(); break;
        case 2: _t->on_pushButton_ve_clicked(); break;
        case 3: _t->on_pushButton_qu_clicked(); break;
        case 4: _t->on_pushButton_op_clicked(); break;
        case 5: _t->on_pushButton_ne_clicked(); break;
        case 6: _t->on_pushButton_re_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RTreeGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RTreeGUI.data,
      qt_meta_data_RTreeGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RTreeGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTreeGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RTreeGUI.stringdata))
        return static_cast<void*>(const_cast< RTreeGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RTreeGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
