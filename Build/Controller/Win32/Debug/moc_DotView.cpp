/****************************************************************************
** Meta object code from reading C++ file 'DotView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Controller/Views/DotView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DotView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DotViewWidget[] = {

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
      15,   14,   14,   14, 0x08,
      29,   14,   14,   14, 0x08,
      43,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DotViewWidget[] = {
    "DotViewWidget\0\0exportAsSvg()\0exportAsDot()\0"
    "exportAsPdf()\0"
};

void DotViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DotViewWidget *_t = static_cast<DotViewWidget *>(_o);
        switch (_id) {
        case 0: _t->exportAsSvg(); break;
        case 1: _t->exportAsDot(); break;
        case 2: _t->exportAsPdf(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DotViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DotViewWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_DotViewWidget,
      qt_meta_data_DotViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DotViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DotViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DotViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DotViewWidget))
        return static_cast<void*>(const_cast< DotViewWidget*>(this));
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(const_cast< DotViewWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int DotViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
