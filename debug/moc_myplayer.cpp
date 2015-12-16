/****************************************************************************
** Meta object code from reading C++ file 'myplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myPlayer_t {
    QByteArrayData data[12];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myPlayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myPlayer_t qt_meta_stringdata_myPlayer = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 9),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 10),
QT_MOC_LITERAL(4, 31, 16),
QT_MOC_LITERAL(5, 48, 12),
QT_MOC_LITERAL(6, 61, 9),
QT_MOC_LITERAL(7, 71, 17),
QT_MOC_LITERAL(8, 89, 18),
QT_MOC_LITERAL(9, 108, 24),
QT_MOC_LITERAL(10, 133, 20),
QT_MOC_LITERAL(11, 154, 17)
    },
    "myPlayer\0playMusic\0\0pauseMusic\0"
    "fastForwardMusic\0reverseMusic\0stopMusic\0"
    "playButtonPressed\0pauseButtonPressed\0"
    "fastForwardButtonPressed\0reverseButtonPressed\0"
    "stopButtonPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myPlayer *_t = static_cast<myPlayer *>(_o);
        switch (_id) {
        case 0: _t->playMusic(); break;
        case 1: _t->pauseMusic(); break;
        case 2: _t->fastForwardMusic(); break;
        case 3: _t->reverseMusic(); break;
        case 4: _t->stopMusic(); break;
        case 5: _t->playButtonPressed(); break;
        case 6: _t->pauseButtonPressed(); break;
        case 7: _t->fastForwardButtonPressed(); break;
        case 8: _t->reverseButtonPressed(); break;
        case 9: _t->stopButtonPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (myPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myPlayer::playMusic)) {
                *result = 0;
            }
        }
        {
            typedef void (myPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myPlayer::pauseMusic)) {
                *result = 1;
            }
        }
        {
            typedef void (myPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myPlayer::fastForwardMusic)) {
                *result = 2;
            }
        }
        {
            typedef void (myPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myPlayer::reverseMusic)) {
                *result = 3;
            }
        }
        {
            typedef void (myPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myPlayer::stopMusic)) {
                *result = 4;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject myPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_myPlayer.data,
      qt_meta_data_myPlayer,  qt_static_metacall, 0, 0}
};


const QMetaObject *myPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myPlayer.stringdata))
        return static_cast<void*>(const_cast< myPlayer*>(this));
    if (!strcmp(_clname, "musicEngine"))
        return static_cast< musicEngine*>(const_cast< myPlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int myPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void myPlayer::playMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void myPlayer::pauseMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void myPlayer::fastForwardMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void myPlayer::reverseMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void myPlayer::stopMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
