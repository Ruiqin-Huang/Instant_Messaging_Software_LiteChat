/****************************************************************************
** Meta object code from reading C++ file 'clientcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/Controller/clientcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientController_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientController_t qt_meta_stringdata_ClientController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClientController"
QT_MOC_LITERAL(1, 17, 17), // "requestOfflineMsg"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 28), // "requestAllFriendListUserInfo"
QT_MOC_LITERAL(4, 65, 19), // "dynamicAppendFriend"
QT_MOC_LITERAL(5, 85, 8), // "UserInfo"
QT_MOC_LITERAL(6, 94, 7), // "_friend"
QT_MOC_LITERAL(7, 102, 18), // "dynamicAppendGroup"
QT_MOC_LITERAL(8, 121, 9), // "GroupInfo"
QT_MOC_LITERAL(9, 131, 6), // "_group"
QT_MOC_LITERAL(10, 138, 15), // "requestChatFile"
QT_MOC_LITERAL(11, 154, 11), // "ChatMessage"
QT_MOC_LITERAL(12, 166, 8) // "chat_msg"

    },
    "ClientController\0requestOfflineMsg\0\0"
    "requestAllFriendListUserInfo\0"
    "dynamicAppendFriend\0UserInfo\0_friend\0"
    "dynamicAppendGroup\0GroupInfo\0_group\0"
    "requestChatFile\0ChatMessage\0chat_msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
      10,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void ClientController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestOfflineMsg(); break;
        case 1: _t->requestAllFriendListUserInfo(); break;
        case 2: _t->dynamicAppendFriend((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 3: _t->dynamicAppendGroup((*reinterpret_cast< GroupInfo(*)>(_a[1]))); break;
        case 4: _t->requestChatFile((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ClientController.data,
    qt_meta_data_ClientController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
