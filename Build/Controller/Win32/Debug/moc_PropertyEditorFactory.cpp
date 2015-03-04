/****************************************************************************
** Meta object code from reading C++ file 'PropertyEditorFactory.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Controller/Views/DataView/PropertyEditorFactory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEditorFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyEditorFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   23,   22,   22, 0x09,
      91,   82,   22,   22, 0x09,
     120,   82,   22,   22, 0x09,
     165,  157,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PropertyEditorFactory[] = {
    "PropertyEditorFactory\0\0property,val\0"
    "slotManagerValueChanged(QtProperty*,QVariant)\0"
    "newValue\0slotSpinBoxValueChanged(int)\0"
    "slotFloatSpinBoxValueChanged(double)\0"
    "pObject\0slotEditorDestroyed(QObject*)\0"
};

void PropertyEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyEditorFactory *_t = static_cast<PropertyEditorFactory *>(_o);
        switch (_id) {
        case 0: _t->slotManagerValueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->slotSpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotFloatSpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->slotEditorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertyEditorFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyEditorFactory::staticMetaObject = {
    { &MakeDebugCompileOnMac::staticMetaObject, qt_meta_stringdata_PropertyEditorFactory,
      qt_meta_data_PropertyEditorFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyEditorFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditorFactory))
        return static_cast<void*>(const_cast< PropertyEditorFactory*>(this));
    return MakeDebugCompileOnMac::qt_metacast(_clname);
}

int PropertyEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MakeDebugCompileOnMac::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
