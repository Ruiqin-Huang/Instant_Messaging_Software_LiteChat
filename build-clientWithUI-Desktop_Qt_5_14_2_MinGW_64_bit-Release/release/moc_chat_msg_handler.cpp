/****************************************************************************
** Meta object code from reading C++ file 'chat_msg_handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/Network/Handlers/chat_msg_handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat_msg_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatMsgHandler_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatMsgHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatMsgHandler_t qt_meta_stringdata_ChatMsgHandler = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ChatMsgHandler"
QT_MOC_LITERAL(1, 15, 16), // "readyShowChatMsg"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "ChatMessage"
QT_MOC_LITERAL(4, 45, 8), // "chat_msg"
QT_MOC_LITERAL(5, 54, 16), // "readyShowChatPic"
QT_MOC_LITERAL(6, 71, 17) // "readyShowChatFile"

    },
    "ChatMsgHandler\0readyShowChatMsg\0\0"
    "ChatMessage\0chat_msg\0readyShowChatPic\0"
    "readyShowChatFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatMsgHandler[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ChatMsgHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatMsgHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyShowChatMsg((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        case 1: _t->readyShowChatPic((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        case 2: _t->readyShowChatFile((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatMsgHandler::*)(ChatMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMsgHandler::readyShowChatMsg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatMsgHandler::*)(ChatMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMsgHandler::readyShowChatPic)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatMsgHandler::*)(ChatMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatMsgHandler::readyShowChatFile)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatMsgHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<MsgHandler::staticMetaObject>(),
    qt_meta_stringdata_ChatMsgHandler.data,
    qt_meta_data_ChatMsgHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatMsgHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatMsgHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMsgHandler.stringdata0))
        return static_cast<void*>(this);
    return MsgHandler::qt_metacast(_clname);
}

int ChatMsgHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ChatMsgHandler::readyShowChatMsg(ChatMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatMsgHandler::readyShowChatPic(ChatMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatMsgHandler::readyShowChatFile(ChatMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
