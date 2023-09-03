/****************************************************************************
** Meta object code from reading C++ file 'makegroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/UI/makegroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'makegroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_makegroup_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_makegroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_makegroup_t qt_meta_stringdata_makegroup = {
    {
QT_MOC_LITERAL(0, 0, 9), // "makegroup"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 57, 22), // "on_groupid_textChanged"
QT_MOC_LITERAL(5, 80, 4), // "arg1"
QT_MOC_LITERAL(6, 85, 21), // "sigRegGroupSuccessful"
QT_MOC_LITERAL(7, 107, 9), // "GroupInfo"
QT_MOC_LITERAL(8, 117, 4), // "info"
QT_MOC_LITERAL(9, 122, 17), // "sigRegGroupFailed"
QT_MOC_LITERAL(10, 140, 16), // "refreshGroupList"
QT_MOC_LITERAL(11, 157, 19), // "on_minimize_clicked"
QT_MOC_LITERAL(12, 177, 16) // "on_close_clicked"

    },
    "makegroup\0on_pushButton_2_clicked\0\0"
    "on_pushButton_clicked\0on_groupid_textChanged\0"
    "arg1\0sigRegGroupSuccessful\0GroupInfo\0"
    "info\0sigRegGroupFailed\0refreshGroupList\0"
    "on_minimize_clicked\0on_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_makegroup[] = {

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
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void makegroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<makegroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_groupid_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->sigRegGroupSuccessful((*reinterpret_cast< GroupInfo(*)>(_a[1]))); break;
        case 4: _t->sigRegGroupFailed(); break;
        case 5: _t->refreshGroupList(); break;
        case 6: _t->on_minimize_clicked(); break;
        case 7: _t->on_close_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject makegroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_makegroup.data,
    qt_meta_data_makegroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *makegroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *makegroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_makegroup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int makegroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
