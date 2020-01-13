/****************************************************************************
** Meta object code from reading C++ file 'walletview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletView_t {
    QByteArrayData data[38];
    char stringdata0[509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletView_t qt_meta_stringdata_WalletView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WalletView"
QT_MOC_LITERAL(1, 11, 7), // "message"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "title"
QT_MOC_LITERAL(4, 26, 5), // "style"
QT_MOC_LITERAL(5, 32, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(6, 56, 22), // "hdEnabledStatusChanged"
QT_MOC_LITERAL(7, 79, 19), // "incomingTransaction"
QT_MOC_LITERAL(8, 99, 4), // "date"
QT_MOC_LITERAL(9, 104, 4), // "unit"
QT_MOC_LITERAL(10, 109, 7), // "CAmount"
QT_MOC_LITERAL(11, 117, 6), // "amount"
QT_MOC_LITERAL(12, 124, 4), // "type"
QT_MOC_LITERAL(13, 129, 7), // "address"
QT_MOC_LITERAL(14, 137, 5), // "label"
QT_MOC_LITERAL(15, 143, 10), // "walletName"
QT_MOC_LITERAL(16, 154, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(17, 178, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(18, 195, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(19, 211, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(20, 232, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(21, 250, 4), // "addr"
QT_MOC_LITERAL(22, 255, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(23, 274, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(24, 295, 21), // "processNewTransaction"
QT_MOC_LITERAL(25, 317, 6), // "parent"
QT_MOC_LITERAL(26, 324, 5), // "start"
QT_MOC_LITERAL(27, 330, 13), // "encryptWallet"
QT_MOC_LITERAL(28, 344, 6), // "status"
QT_MOC_LITERAL(29, 351, 12), // "backupWallet"
QT_MOC_LITERAL(30, 364, 16), // "changePassphrase"
QT_MOC_LITERAL(31, 381, 12), // "unlockWallet"
QT_MOC_LITERAL(32, 394, 20), // "usedSendingAddresses"
QT_MOC_LITERAL(33, 415, 22), // "usedReceivingAddresses"
QT_MOC_LITERAL(34, 438, 22), // "updateEncryptionStatus"
QT_MOC_LITERAL(35, 461, 12), // "showProgress"
QT_MOC_LITERAL(36, 474, 9), // "nProgress"
QT_MOC_LITERAL(37, 484, 24) // "requestedSyncWarningInfo"

    },
    "WalletView\0message\0\0title\0style\0"
    "encryptionStatusChanged\0hdEnabledStatusChanged\0"
    "incomingTransaction\0date\0unit\0CAmount\0"
    "amount\0type\0address\0label\0walletName\0"
    "outOfSyncWarningClicked\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0processNewTransaction\0"
    "parent\0start\0encryptWallet\0status\0"
    "backupWallet\0changePassphrase\0"
    "unlockWallet\0usedSendingAddresses\0"
    "usedReceivingAddresses\0updateEncryptionStatus\0"
    "showProgress\0nProgress\0requestedSyncWarningInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  134,    2, 0x06 /* Public */,
       5,    0,  141,    2, 0x06 /* Public */,
       6,    0,  142,    2, 0x06 /* Public */,
       7,    7,  143,    2, 0x06 /* Public */,
      16,    0,  158,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  159,    2, 0x0a /* Public */,
      18,    0,  160,    2, 0x0a /* Public */,
      19,    0,  161,    2, 0x0a /* Public */,
      20,    1,  162,    2, 0x0a /* Public */,
      20,    0,  165,    2, 0x2a /* Public | MethodCloned */,
      22,    1,  166,    2, 0x0a /* Public */,
      22,    0,  169,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  170,    2, 0x0a /* Public */,
      23,    0,  173,    2, 0x2a /* Public | MethodCloned */,
      24,    3,  174,    2, 0x0a /* Public */,
      27,    1,  181,    2, 0x0a /* Public */,
      29,    0,  184,    2, 0x0a /* Public */,
      30,    0,  185,    2, 0x0a /* Public */,
      31,    0,  186,    2, 0x0a /* Public */,
      32,    0,  187,    2, 0x0a /* Public */,
      33,    0,  188,    2, 0x0a /* Public */,
      34,    0,  189,    2, 0x0a /* Public */,
      35,    2,  190,    2, 0x0a /* Public */,
      37,    0,  195,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   11,   12,   13,   14,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   25,   26,    2,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,   36,
    QMetaType::Void,

       0        // eod
};

void WalletView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletView *_t = static_cast<WalletView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->encryptionStatusChanged(); break;
        case 2: _t->hdEnabledStatusChanged(); break;
        case 3: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 4: _t->outOfSyncWarningClicked(); break;
        case 5: _t->gotoOverviewPage(); break;
        case 6: _t->gotoHistoryPage(); break;
        case 7: _t->gotoReceiveCoinsPage(); break;
        case 8: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->gotoSendCoinsPage(); break;
        case 10: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->gotoSignMessageTab(); break;
        case 12: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoVerifyMessageTab(); break;
        case 14: _t->processNewTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->backupWallet(); break;
        case 17: _t->changePassphrase(); break;
        case 18: _t->unlockWallet(); break;
        case 19: _t->usedSendingAddresses(); break;
        case 20: _t->usedReceivingAddresses(); break;
        case 21: _t->updateEncryptionStatus(); break;
        case 22: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->requestedSyncWarningInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::message)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::encryptionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::hdEnabledStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , int , const CAmount & , const QString & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::incomingTransaction)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::outOfSyncWarningClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject WalletView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_WalletView.data,
      qt_meta_data_WalletView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletView.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int WalletView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void WalletView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletView::encryptionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletView::hdEnabledStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletView::incomingTransaction(const QString & _t1, int _t2, const CAmount & _t3, const QString & _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletView::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
