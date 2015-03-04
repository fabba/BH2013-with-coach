/****************************************************************************
** Meta object code from reading C++ file 'TeamCommAgent.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Utils/bush/agents/TeamCommAgent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TeamCommAgent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TeamCommAgent[] = {

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
      15,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TeamCommAgent[] = {
    "TeamCommAgent\0\0"
    "powerChanged(std::map<std::string,Power>*)\0"
};

void TeamCommAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TeamCommAgent *_t = static_cast<TeamCommAgent *>(_o);
        switch (_id) {
        case 0: _t->powerChanged((*reinterpret_cast< std::map<std::string,Power>*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TeamCommAgent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TeamCommAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TeamCommAgent,
      qt_meta_data_TeamCommAgent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TeamCommAgent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TeamCommAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TeamCommAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TeamCommAgent))
        return static_cast<void*>(const_cast< TeamCommAgent*>(this));
    if (!strcmp(_clname, "Thread<TeamCommAgent>"))
        return static_cast< Thread<TeamCommAgent>*>(const_cast< TeamCommAgent*>(this));
    return QObject::qt_metacast(_clname);
}

int TeamCommAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TeamCommAgent::powerChanged(std::map<std::string,Power> * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
