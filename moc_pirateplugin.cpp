/****************************************************************************
** Meta object code from reading C++ file 'pirateplugin.h'
**
** Created: Sat Apr 24 15:17:57 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pirateplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pirateplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PiratePlugin[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      32,   13,   13,   13, 0x05,
      47,   13,   13,   13, 0x05,
      60,   13,   13,   13, 0x05,
      76,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   92,   13,   13, 0x0a,
     114,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PiratePlugin[] = {
    "PiratePlugin\0\0sendText(QString)\0"
    "setFormat(int)\0setMode(int)\0setSupply(bool)\0"
    "setPullup(bool)\0checked\0toggled(bool)\0"
    "dataReady()\0"
};

const QMetaObject PiratePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PiratePlugin,
      qt_meta_data_PiratePlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PiratePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PiratePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PiratePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PiratePlugin))
        return static_cast<void*>(const_cast< PiratePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PiratePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: setFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setSupply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setPullup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: toggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: dataReady(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PiratePlugin::sendText(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PiratePlugin::setFormat(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PiratePlugin::setMode(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PiratePlugin::setSupply(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PiratePlugin::setPullup(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
