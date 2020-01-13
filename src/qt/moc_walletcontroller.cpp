/****************************************************************************
** Meta object code from reading C++ file 'walletcontroller.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletController_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletController_t qt_meta_stringdata_WalletController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WalletController"
QT_MOC_LITERAL(1, 17, 11), // "walletAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "WalletModel*"
QT_MOC_LITERAL(4, 43, 12), // "wallet_model"
QT_MOC_LITERAL(5, 56, 13), // "walletRemoved"
QT_MOC_LITERAL(6, 70, 9), // "coinsSent"
QT_MOC_LITERAL(7, 80, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(8, 99, 9), // "recipient"
QT_MOC_LITERAL(9, 109, 11) // "transaction"

    },
    "WalletController\0walletAdded\0\0"
    "WalletModel*\0wallet_model\0walletRemoved\0"
    "coinsSent\0SendCoinsRecipient\0recipient\0"
    "transaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletController[] = {

 // content:
       7,       // revision
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
       6,    3,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7, QMetaType::QByteArray,    4,    8,    9,

       0        // eod
};

void WalletController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletController *_t = static_cast<WalletController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletAdded((*reinterpret_cast< WalletModel*(*)>(_a[1]))); break;
        case 1: _t->walletRemoved((*reinterpret_cast< WalletModel*(*)>(_a[1]))); break;
        case 2: _t->coinsSent((*reinterpret_cast< WalletModel*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletController::*_t)(WalletModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletController::walletAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletController::*_t)(WalletModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletController::walletRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletController::*_t)(WalletModel * , SendCoinsRecipient , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletController::coinsSent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WalletController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletController.data,
      qt_meta_data_WalletController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WalletController::walletAdded(WalletModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletController::walletRemoved(WalletModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletController::coinsSent(WalletModel * _t1, SendCoinsRecipient _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_WalletControllerActivity_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletControllerActivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletControllerActivity_t qt_meta_stringdata_WalletControllerActivity = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletControllerActivity"
QT_MOC_LITERAL(1, 25, 8), // "finished"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "WalletControllerActivity\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletControllerActivity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WalletControllerActivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletControllerActivity *_t = static_cast<WalletControllerActivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletControllerActivity::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletControllerActivity::finished)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WalletControllerActivity::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletControllerActivity.data,
      qt_meta_data_WalletControllerActivity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletControllerActivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletControllerActivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletControllerActivity.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletControllerActivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WalletControllerActivity::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CreateWalletActivity_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateWalletActivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateWalletActivity_t qt_meta_stringdata_CreateWalletActivity = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CreateWalletActivity"
QT_MOC_LITERAL(1, 21, 7), // "created"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "WalletModel*"
QT_MOC_LITERAL(4, 43, 12) // "wallet_model"

    },
    "CreateWalletActivity\0created\0\0"
    "WalletModel*\0wallet_model"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateWalletActivity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void CreateWalletActivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateWalletActivity *_t = static_cast<CreateWalletActivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< WalletModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CreateWalletActivity::*_t)(WalletModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateWalletActivity::created)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CreateWalletActivity::staticMetaObject = {
    { &WalletControllerActivity::staticMetaObject, qt_meta_stringdata_CreateWalletActivity.data,
      qt_meta_data_CreateWalletActivity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CreateWalletActivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateWalletActivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateWalletActivity.stringdata0))
        return static_cast<void*>(this);
    return WalletControllerActivity::qt_metacast(_clname);
}

int CreateWalletActivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WalletControllerActivity::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CreateWalletActivity::created(WalletModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OpenWalletActivity_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenWalletActivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenWalletActivity_t qt_meta_stringdata_OpenWalletActivity = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OpenWalletActivity"
QT_MOC_LITERAL(1, 19, 6), // "opened"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "WalletModel*"
QT_MOC_LITERAL(4, 40, 12) // "wallet_model"

    },
    "OpenWalletActivity\0opened\0\0WalletModel*\0"
    "wallet_model"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenWalletActivity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void OpenWalletActivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenWalletActivity *_t = static_cast<OpenWalletActivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opened((*reinterpret_cast< WalletModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OpenWalletActivity::*_t)(WalletModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenWalletActivity::opened)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OpenWalletActivity::staticMetaObject = {
    { &WalletControllerActivity::staticMetaObject, qt_meta_stringdata_OpenWalletActivity.data,
      qt_meta_data_OpenWalletActivity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenWalletActivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenWalletActivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenWalletActivity.stringdata0))
        return static_cast<void*>(this);
    return WalletControllerActivity::qt_metacast(_clname);
}

int OpenWalletActivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WalletControllerActivity::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OpenWalletActivity::opened(WalletModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
