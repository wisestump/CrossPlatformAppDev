/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QMLFileBrowser/filesystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileSystem_t {
    QByteArrayData data[4];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSystem_t qt_meta_stringdata_FileSystem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileSystem"
QT_MOC_LITERAL(1, 11, 8), // "getIndex"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1) // "i"

    },
    "FileSystem\0getIndex\0\0i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QModelIndex, QMetaType::Int,    3,

       0        // eod
};

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSystem *_t = static_cast<FileSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QModelIndex _r = _t->getIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject FileSystem::staticMetaObject = {
    { &QFileSystemModel::staticMetaObject, qt_meta_stringdata_FileSystem.data,
      qt_meta_data_FileSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystem.stringdata0))
        return static_cast<void*>(const_cast< FileSystem*>(this));
    return QFileSystemModel::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
