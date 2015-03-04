/****************************************************************************
** Meta object code from reading C++ file 'ViewBike.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Src/Controller/Views/ViewBike/ViewBike.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewBike.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewBikeHeaderedWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   24,   23,   23, 0x05,
      54,   24,   23,   23, 0x05,
      74,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   23,   23,   23, 0x08,
     113,   23,   23,   23, 0x08,
     133,   23,   23,   23, 0x08,
     153,   23,   23,   23, 0x08,
     175,   23,   23,   23, 0x08,
     189,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewBikeHeaderedWidget[] = {
    "ViewBikeHeaderedWidget\0\0available\0"
    "undoAvailable(bool)\0redoAvailable(bool)\0"
    "saveAvailable(bool)\0newButtonClicked()\0"
    "loadButtonClicked()\0saveButtonClicked()\0"
    "saveAsButtonClicked()\0undoChanges()\0"
    "redoChanges()\0"
};

void ViewBikeHeaderedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewBikeHeaderedWidget *_t = static_cast<ViewBikeHeaderedWidget *>(_o);
        switch (_id) {
        case 0: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->saveAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->newButtonClicked(); break;
        case 4: _t->loadButtonClicked(); break;
        case 5: _t->saveButtonClicked(); break;
        case 6: _t->saveAsButtonClicked(); break;
        case 7: _t->undoChanges(); break;
        case 8: _t->redoChanges(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewBikeHeaderedWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewBikeHeaderedWidget::staticMetaObject = {
    { &HeaderedWidget::staticMetaObject, qt_meta_stringdata_ViewBikeHeaderedWidget,
      qt_meta_data_ViewBikeHeaderedWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewBikeHeaderedWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewBikeHeaderedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewBikeHeaderedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewBikeHeaderedWidget))
        return static_cast<void*>(const_cast< ViewBikeHeaderedWidget*>(this));
    if (!strcmp(_clname, "SimRobot::Widget"))
        return static_cast< SimRobot::Widget*>(const_cast< ViewBikeHeaderedWidget*>(this));
    return HeaderedWidget::qt_metacast(_clname);
}

int ViewBikeHeaderedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HeaderedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ViewBikeHeaderedWidget::undoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewBikeHeaderedWidget::redoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewBikeHeaderedWidget::saveAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
