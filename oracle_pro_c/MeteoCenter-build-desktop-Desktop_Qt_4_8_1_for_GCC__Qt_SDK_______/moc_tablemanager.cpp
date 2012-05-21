/****************************************************************************
** Meta object code from reading C++ file 'tablemanager.h'
**
** Created: Mon May 21 17:17:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MeteoCenter/tablemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TableManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      34,   13,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TableManager[] = {
    "TableManager\0\0index\0setIndex(int)\0"
    "repaint()\0setClose()\0"
};

void TableManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TableManager *_t = static_cast<TableManager *>(_o);
        switch (_id) {
        case 0: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->repaint(); break;
        case 2: _t->setClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TableManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TableManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TableManager,
      qt_meta_data_TableManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TableManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TableManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TableManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TableManager))
        return static_cast<void*>(const_cast< TableManager*>(this));
    return QObject::qt_metacast(_clname);
}

int TableManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
