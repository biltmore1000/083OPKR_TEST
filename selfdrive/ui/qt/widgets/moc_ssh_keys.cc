/****************************************************************************
** Meta object code from reading C++ file 'ssh_keys.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ssh_keys.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ssh_keys.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SSH_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSH_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSH_t qt_meta_stringdata_SSH = {
    {
QT_MOC_LITERAL(0, 0, 3), // "SSH"
QT_MOC_LITERAL(1, 4, 16), // "closeSSHSettings"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "NoSSHAdded"
QT_MOC_LITERAL(4, 33, 8), // "SSHAdded"
QT_MOC_LITERAL(5, 42, 14), // "failedResponse"
QT_MOC_LITERAL(6, 57, 11), // "errorString"
QT_MOC_LITERAL(7, 69, 10), // "gotSSHKeys"
QT_MOC_LITERAL(8, 80, 14), // "checkForSSHKey"
QT_MOC_LITERAL(9, 95, 10), // "getSSHKeys"
QT_MOC_LITERAL(10, 106, 7), // "timeout"
QT_MOC_LITERAL(11, 114, 13) // "parseResponse"

    },
    "SSH\0closeSSHSettings\0\0NoSSHAdded\0"
    "SSHAdded\0failedResponse\0errorString\0"
    "gotSSHKeys\0checkForSSHKey\0getSSHKeys\0"
    "timeout\0parseResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSH[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       7,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SSH::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SSH *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeSSHSettings(); break;
        case 1: _t->NoSSHAdded(); break;
        case 2: _t->SSHAdded(); break;
        case 3: _t->failedResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->gotSSHKeys(); break;
        case 5: _t->checkForSSHKey(); break;
        case 6: _t->getSSHKeys(); break;
        case 7: _t->timeout(); break;
        case 8: _t->parseResponse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SSH::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SSH::closeSSHSettings)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SSH::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SSH::NoSSHAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SSH::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SSH::SSHAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SSH::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SSH::failedResponse)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SSH::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SSH::gotSSHKeys)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SSH::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SSH.data,
    qt_meta_data_SSH,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SSH::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSH::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSH.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SSH::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SSH::closeSSHSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SSH::NoSSHAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SSH::SSHAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SSH::failedResponse(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SSH::gotSSHKeys()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
