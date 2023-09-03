/****************************************************************************
** Meta object code from reading C++ file 'localcache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project Code/Client/Network/ResAssist/localcache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localcache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalCache_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalCache_t qt_meta_stringdata_LocalCache = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LocalCache"
QT_MOC_LITERAL(1, 11, 19), // "alreadyReceivedFile"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "FileMeta"
QT_MOC_LITERAL(4, 41, 18), // "alreadyReceivedImg"
QT_MOC_LITERAL(5, 60, 4), // "Path"
QT_MOC_LITERAL(6, 65, 4) // "info"

    },
    "LocalCache\0alreadyReceivedFile\0\0"
    "FileMeta\0alreadyReceivedImg\0Path\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalCache[] = {

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
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    5,    6,

       0        // eod
};

void LocalCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alreadyReceivedFile((*reinterpret_cast< FileMeta(*)>(_a[1]))); break;
        case 1: _t->alreadyReceivedImg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FileMeta(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalCache::*)(FileMeta );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalCache::alreadyReceivedFile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocalCache::*)(QString , FileMeta );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalCache::alreadyReceivedImg)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LocalCache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LocalCache.data,
    qt_meta_data_LocalCache,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocalCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LocalCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LocalCache::alreadyReceivedFile(FileMeta _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LocalCache::alreadyReceivedImg(QString _t1, FileMeta _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
