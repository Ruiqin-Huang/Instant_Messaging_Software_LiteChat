/****************************************************************************
** Meta object code from reading C++ file 'friend_request_result_handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/Network/Handlers/friend_request_result_handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friend_request_result_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FriendRequestResultHandler_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FriendRequestResultHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FriendRequestResultHandler_t qt_meta_stringdata_FriendRequestResultHandler = {
    {
QT_MOC_LITERAL(0, 0, 26), // "FriendRequestResultHandler"
QT_MOC_LITERAL(1, 27, 18), // "sigAddFriendFailed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 7), // "MsgType"
QT_MOC_LITERAL(4, 55, 4), // "type"
QT_MOC_LITERAL(5, 60, 8), // "UserInfo"
QT_MOC_LITERAL(6, 69, 6), // "sender"
QT_MOC_LITERAL(7, 76, 22), // "sigAddFriendSuccessful"
QT_MOC_LITERAL(8, 99, 17) // "refreshFriendList"

    },
    "FriendRequestResultHandler\0"
    "sigAddFriendFailed\0\0MsgType\0type\0"
    "UserInfo\0sender\0sigAddFriendSuccessful\0"
    "refreshFriendList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FriendRequestResultHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       7,    1,   34,    2, 0x06 /* Public */,
       8,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void FriendRequestResultHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FriendRequestResultHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigAddFriendFailed((*reinterpret_cast< MsgType(*)>(_a[1])),(*reinterpret_cast< UserInfo(*)>(_a[2]))); break;
        case 1: _t->sigAddFriendSuccessful((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 2: _t->refreshFriendList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FriendRequestResultHandler::*)(MsgType , UserInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendRequestResultHandler::sigAddFriendFailed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FriendRequestResultHandler::*)(UserInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendRequestResultHandler::sigAddFriendSuccessful)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FriendRequestResultHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendRequestResultHandler::refreshFriendList)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FriendRequestResultHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<MsgHandler::staticMetaObject>(),
    qt_meta_stringdata_FriendRequestResultHandler.data,
    qt_meta_data_FriendRequestResultHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FriendRequestResultHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendRequestResultHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FriendRequestResultHandler.stringdata0))
        return static_cast<void*>(this);
    return MsgHandler::qt_metacast(_clname);
}

int FriendRequestResultHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MsgHandler::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FriendRequestResultHandler::sigAddFriendFailed(MsgType _t1, UserInfo _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FriendRequestResultHandler::sigAddFriendSuccessful(UserInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FriendRequestResultHandler::refreshFriendList()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
