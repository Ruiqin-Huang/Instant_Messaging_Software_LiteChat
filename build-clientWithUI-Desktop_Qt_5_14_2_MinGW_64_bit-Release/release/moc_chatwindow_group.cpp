/****************************************************************************
** Meta object code from reading C++ file 'chatwindow_group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/UI/chatwindow_group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindow_group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatwindow_group_t {
    QByteArrayData data[12];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatwindow_group_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatwindow_group_t qt_meta_stringdata_chatwindow_group = {
    {
QT_MOC_LITERAL(0, 0, 16), // "chatwindow_group"
QT_MOC_LITERAL(1, 17, 18), // "newMessageReceived"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "message"
QT_MOC_LITERAL(4, 45, 16), // "on_close_clicked"
QT_MOC_LITERAL(5, 62, 19), // "on_minimize_clicked"
QT_MOC_LITERAL(6, 82, 15), // "on_send_clicked"
QT_MOC_LITERAL(7, 98, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(8, 122, 14), // "receiveMessage"
QT_MOC_LITERAL(9, 137, 11), // "ChatMessage"
QT_MOC_LITERAL(10, 149, 4), // "info"
QT_MOC_LITERAL(11, 154, 20) // "readyGroupHistoryMsg"

    },
    "chatwindow_group\0newMessageReceived\0"
    "\0message\0on_close_clicked\0on_minimize_clicked\0"
    "on_send_clicked\0on_pushButton_5_clicked\0"
    "receiveMessage\0ChatMessage\0info\0"
    "readyGroupHistoryMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatwindow_group[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void chatwindow_group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatwindow_group *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_minimize_clicked(); break;
        case 3: _t->on_send_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->receiveMessage((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        case 6: _t->readyGroupHistoryMsg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (chatwindow_group::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&chatwindow_group::newMessageReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatwindow_group::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_chatwindow_group.data,
    qt_meta_data_chatwindow_group,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatwindow_group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatwindow_group::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatwindow_group.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int chatwindow_group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void chatwindow_group::newMessageReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
