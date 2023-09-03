/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/UI/interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Interface_t {
    QByteArrayData data[28];
    char stringdata0[458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Interface"
QT_MOC_LITERAL(1, 10, 15), // "interfaceClosed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 32), // "on_friend_list_itemDoubleClicked"
QT_MOC_LITERAL(4, 60, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 77, 4), // "item"
QT_MOC_LITERAL(6, 82, 31), // "on_group_list_itemDoubleClicked"
QT_MOC_LITERAL(7, 114, 19), // "on_info_set_clicked"
QT_MOC_LITERAL(8, 134, 28), // "on_add_delete_friend_clicked"
QT_MOC_LITERAL(9, 163, 23), // "on_create_group_clicked"
QT_MOC_LITERAL(10, 187, 21), // "on_join_group_clicked"
QT_MOC_LITERAL(11, 209, 20), // "on_minimized_clicked"
QT_MOC_LITERAL(12, 230, 16), // "on_close_clicked"
QT_MOC_LITERAL(13, 247, 25), // "on_change_account_clicked"
QT_MOC_LITERAL(14, 273, 19), // "show_friend_request"
QT_MOC_LITERAL(15, 293, 8), // "UserInfo"
QT_MOC_LITERAL(16, 302, 6), // "sender"
QT_MOC_LITERAL(17, 309, 16), // "addFriendSuccess"
QT_MOC_LITERAL(18, 326, 15), // "addFriendFailed"
QT_MOC_LITERAL(19, 342, 7), // "MsgType"
QT_MOC_LITERAL(20, 350, 4), // "type"
QT_MOC_LITERAL(21, 355, 21), // "sigAddGroupSuccessful"
QT_MOC_LITERAL(22, 377, 17), // "sigAddGroupFailed"
QT_MOC_LITERAL(23, 395, 16), // "refreshGroupList"
QT_MOC_LITERAL(24, 412, 17), // "refreshFriendList"
QT_MOC_LITERAL(25, 430, 11), // "receiveFile"
QT_MOC_LITERAL(26, 442, 11), // "ChatMessage"
QT_MOC_LITERAL(27, 454, 3) // "msg"

    },
    "Interface\0interfaceClosed\0\0"
    "on_friend_list_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_group_list_itemDoubleClicked\0"
    "on_info_set_clicked\0on_add_delete_friend_clicked\0"
    "on_create_group_clicked\0on_join_group_clicked\0"
    "on_minimized_clicked\0on_close_clicked\0"
    "on_change_account_clicked\0show_friend_request\0"
    "UserInfo\0sender\0addFriendSuccess\0"
    "addFriendFailed\0MsgType\0type\0"
    "sigAddGroupSuccessful\0sigAddGroupFailed\0"
    "refreshGroupList\0refreshFriendList\0"
    "receiveFile\0ChatMessage\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  105,    2, 0x08 /* Private */,
       6,    1,  108,    2, 0x08 /* Private */,
       7,    0,  111,    2, 0x08 /* Private */,
       8,    0,  112,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    1,  118,    2, 0x08 /* Private */,
      17,    1,  121,    2, 0x08 /* Private */,
      18,    2,  124,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,
      22,    1,  130,    2, 0x08 /* Private */,
      23,    0,  133,    2, 0x08 /* Private */,
      24,    0,  134,    2, 0x08 /* Private */,
      25,    1,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 15,   20,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interfaceClosed(); break;
        case 1: _t->on_friend_list_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_group_list_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_info_set_clicked(); break;
        case 4: _t->on_add_delete_friend_clicked(); break;
        case 5: _t->on_create_group_clicked(); break;
        case 6: _t->on_join_group_clicked(); break;
        case 7: _t->on_minimized_clicked(); break;
        case 8: _t->on_close_clicked(); break;
        case 9: _t->on_change_account_clicked(); break;
        case 10: _t->show_friend_request((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 11: _t->addFriendSuccess((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 12: _t->addFriendFailed((*reinterpret_cast< MsgType(*)>(_a[1])),(*reinterpret_cast< UserInfo(*)>(_a[2]))); break;
        case 13: _t->sigAddGroupSuccessful(); break;
        case 14: _t->sigAddGroupFailed((*reinterpret_cast< MsgType(*)>(_a[1]))); break;
        case 15: _t->refreshGroupList(); break;
        case 16: _t->refreshFriendList(); break;
        case 17: _t->receiveFile((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Interface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interface::interfaceClosed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Interface.data,
    qt_meta_data_Interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Interface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Interface::interfaceClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
