/****************************************************************************
** Meta object code from reading C++ file 'library.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../library.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'library.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_library_t {
    QByteArrayData data[20];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_library_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_library_t qt_meta_stringdata_library = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 12),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 6),
QT_MOC_LITERAL(4, 29, 3),
QT_MOC_LITERAL(5, 33, 12),
QT_MOC_LITERAL(6, 46, 8),
QT_MOC_LITERAL(7, 55, 11),
QT_MOC_LITERAL(8, 67, 12),
QT_MOC_LITERAL(9, 80, 11),
QT_MOC_LITERAL(10, 92, 11),
QT_MOC_LITERAL(11, 104, 11),
QT_MOC_LITERAL(12, 116, 12),
QT_MOC_LITERAL(13, 129, 7),
QT_MOC_LITERAL(14, 137, 8),
QT_MOC_LITERAL(15, 146, 8),
QT_MOC_LITERAL(16, 155, 11),
QT_MOC_LITERAL(17, 167, 14),
QT_MOC_LITERAL(18, 182, 14),
QT_MOC_LITERAL(19, 197, 22)
    },
    "library\0setDirectory\0\0string\0dir\0"
    "getDirectory\0addMusic\0deleteMusic\0"
    "sortByArtist\0sortByGenre\0sortByTitle\0"
    "sortByAlbum\0sortByLength\0display\0"
    "nextSong\0prevSong\0currentSong\0"
    "moveToNextSong\0moveToPrevSong\0"
    "numberOfSongsInLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_library[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 3,
    0x80000000 | 3,
    0x80000000 | 3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void library::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        library *_t = static_cast<library *>(_o);
        switch (_id) {
        case 0: _t->setDirectory((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: { string _r = _t->getDirectory();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 2: _t->addMusic(); break;
        case 3: _t->deleteMusic(); break;
        case 4: _t->sortByArtist(); break;
        case 5: _t->sortByGenre(); break;
        case 6: _t->sortByTitle(); break;
        case 7: _t->sortByAlbum(); break;
        case 8: _t->sortByLength(); break;
        case 9: _t->display(); break;
        case 10: { string _r = _t->nextSong();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 11: { string _r = _t->prevSong();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 12: { string _r = _t->currentSong();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = _r; }  break;
        case 13: _t->moveToNextSong(); break;
        case 14: _t->moveToPrevSong(); break;
        case 15: { int _r = _t->numberOfSongsInLibrary();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject library::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_library.data,
      qt_meta_data_library,  qt_static_metacall, 0, 0}
};


const QMetaObject *library::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *library::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_library.stringdata))
        return static_cast<void*>(const_cast< library*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int library::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
