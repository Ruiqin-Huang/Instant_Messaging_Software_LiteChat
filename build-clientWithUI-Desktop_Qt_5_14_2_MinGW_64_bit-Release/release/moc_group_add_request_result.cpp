/****************************************************************************
** Meta object code from reading C++ file 'group_add_request_result.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/Network/Handlers/group_add_request_result.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_add_request_result.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddGroupResultHandler_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddGroupResultHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddGroupResultHandler_t qt_meta_stringdata_AddGroupResultHandler = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AddGroupResultHandler"
QT_MOC_LITERAL(1, 22, 21), // "sigAddGroupSuccessful"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "sigAddGroupFailed"
QT_MOC_LITERAL(4, 63, 7), // "MsgType"
QT_MOC_LITERAL(5, 71, 4), // "type"
QT_MOC_LITERAL(6, 76, 16) // "refreshGroupList"

    },
    "AddGroupResultHandler\0sigAddGroupSuccessful\0"
    "\0sigAddGroupFailed\0MsgType\0type\0"
    "refreshGroupList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddGroupResultHandler[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       6,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void AddGroupResultHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddGroupResultHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigAddGroupSuccessful(); break;
        case 1: _t->sigAddGroupFailed((*reinterpret_cast< MsgType(*)>(_a[1]))); break;
        case 2: _t->refreshGroupList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddGroupResultHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddGroupResultHandler::sigAddGroupSuccessful)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddGroupResultHandler::*)(MsgType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddGroupResultHandler::sigAddGroupFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddGroupResultHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddGroupResultHandler::refreshGroupList)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddGroupResultHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<MsgHandler::staticMetaObject>(),
    qt_meta_stringdata_AddGroupResultHandler.data,
    qt_meta_data_AddGroupResultHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddGroupResultHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddGroupResultHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddGroupResultHandler.stringdata0))
        return static_cast<void*>(this);
    return MsgHandler::qt_metacast(_clname);
}

int AddGroupResultHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AddGroupResultHandler::sigAddGroupSuccessful()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddGroupResultHandler::sigAddGroupFailed(MsgType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddGroupResultHandler::refreshGroupList()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
