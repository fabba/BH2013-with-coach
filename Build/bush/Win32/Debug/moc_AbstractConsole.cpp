/****************************************************************************
** Meta object code from reading C++ file 'AbstractConsole.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Utils/bush/cmdlib/AbstractConsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractConsole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_AbstractConsole[] = {
    "AbstractConsole\0\0target,msg\0"
    "sPrint(ConsolePrintTarget,QString)\0"
};

void AbstractConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractConsole *_t = static_cast<AbstractConsole *>(_o);
        switch (_id) {
        case 0: _t->sPrint((*reinterpret_cast< ConsolePrintTarget(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractConsole::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractConsole,
      qt_meta_data_AbstractConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractConsole))
        return static_cast<void*>(const_cast< AbstractConsole*>(this));
    if (!strcmp(_clname, "IConsole"))
        return static_cast< IConsole*>(const_cast< AbstractConsole*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AbstractConsole::sPrint(ConsolePrintTarget _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
