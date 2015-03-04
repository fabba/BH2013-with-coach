/****************************************************************************
** Meta object code from reading C++ file 'ImageView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Controller/Views/ImageView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,
      44,   12,   12,   12, 0x08,
      56,   12,   12,   12, 0x08,
      66,   12,   12,   12, 0x08,
      78,   12,   12,   12, 0x08,
      89,   12,   12,   12, 0x08,
     101,   12,   12,   12, 0x08,
     113,   12,   12,   12, 0x08,
     122,   12,   12,   12, 0x08,
     132,   12,   12,   12, 0x08,
     143,   12,   12,   12, 0x08,
     154,   12,   12,   12, 0x08,
     169,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageWidget[] = {
    "ImageWidget\0\0value\0headControlToggled(bool)\0"
    "headAngle()\0camUpOn()\0camDownOn()\0"
    "greenAct()\0yellowAct()\0orangeAct()\0"
    "redAct()\0blueAct()\0whiteAct()\0blackAct()\0"
    "allColorsAct()\0saveColorCalibration()\0"
};

void ImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageWidget *_t = static_cast<ImageWidget *>(_o);
        switch (_id) {
        case 0: _t->headControlToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->headAngle(); break;
        case 2: _t->camUpOn(); break;
        case 3: _t->camDownOn(); break;
        case 4: _t->greenAct(); break;
        case 5: _t->yellowAct(); break;
        case 6: _t->orangeAct(); break;
        case 7: _t->redAct(); break;
        case 8: _t->blueAct(); break;
        case 9: _t->whiteAct(); break;
        case 10: _t->blackAct(); break;
        case 11: _t->allColorsAct(); break;
        case 12: _t->saveColorCalibration(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageWidget,
      qt_meta_data_ImageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageWidget))
        return static_cast<void*>(const_cast< ImageWidget*>(this));
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(const_cast< ImageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
