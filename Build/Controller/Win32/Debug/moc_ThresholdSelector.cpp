/****************************************************************************
** Meta object code from reading C++ file 'ThresholdSelector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Controller/Views/ColorCalibrationView/ThresholdSelector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThresholdSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThresholdSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x08,
      44,   19,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ThresholdSelector[] = {
    "ThresholdSelector\0\0value\0sliderChanged(int)\0"
    "lineEditChanged(QString)\0"
};

void ThresholdSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThresholdSelector *_t = static_cast<ThresholdSelector *>(_o);
        switch (_id) {
        case 0: _t->sliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->lineEditChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThresholdSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThresholdSelector::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_ThresholdSelector,
      qt_meta_data_ThresholdSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThresholdSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThresholdSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThresholdSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThresholdSelector))
        return static_cast<void*>(const_cast< ThresholdSelector*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int ThresholdSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
