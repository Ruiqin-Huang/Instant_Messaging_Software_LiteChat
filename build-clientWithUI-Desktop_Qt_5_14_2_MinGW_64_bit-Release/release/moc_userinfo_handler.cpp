/****************************************************************************
** Meta object code from reading C++ file 'userinfo_handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/Network/Handlers/userinfo_handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinfo_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserInfoHandler_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserInfoHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserInfoHandler_t qt_meta_stringdata_UserInfoHandler = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UserInfoHandler"
QT_MOC_LITERAL(1, 16, 17), // "readyShowUserInfo"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "UserInfo"
QT_MOC_LITERAL(4, 44, 4), // "info"
QT_MOC_LITERAL(5, 49, 22) // "readyRefreshFriendList"

    },
    "UserInfoHandler\0readyShowUserInfo\0\0"
    "UserInfo\0info\0readyRefreshFriendList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserInfoHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void UserInfoHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserInfoHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyShowUserInfo((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 1: _t->readyRefreshFriendList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserInfoHandler::*)(UserInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInfoHandler::readyShowUserInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserInfoHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInfoHandler::readyRefreshFriendList)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserInfoHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<MsgHandler::staticMetaObject>(),
    qt_meta_stringdata_UserInfoHandler.data,
    qt_meta_data_UserInfoHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserInfoHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserInfoHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserInfoHandler.stringdata0))
        return static_cast<void*>(this);
    return MsgHandler::qt_metacast(_clname);
}

int UserInfoHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MsgHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UserInfoHandler::readyShowUserInfo(UserInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UserInfoHandler::readyRefreshFriendList()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
