/****************************************************************************
** Meta object code from reading C++ file 'MapVisibilityWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/rtabmap/guilib/src/MapVisibilityWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapVisibilityWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rtabmap__MapVisibilityWidget_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__MapVisibilityWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__MapVisibilityWidget_t qt_meta_stringdata_rtabmap__MapVisibilityWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "rtabmap::MapVisibilityWidget"
QT_MOC_LITERAL(1, 29, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 2), // "id"
QT_MOC_LITERAL(4, 51, 7), // "visible"
QT_MOC_LITERAL(5, 59, 16), // "signalVisibility"
QT_MOC_LITERAL(6, 76, 9) // "selectAll"

    },
    "rtabmap::MapVisibilityWidget\0"
    "visibilityChanged\0\0id\0visible\0"
    "signalVisibility\0selectAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__MapVisibilityWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void rtabmap::MapVisibilityWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapVisibilityWidget *_t = static_cast<MapVisibilityWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->signalVisibility(); break;
        case 2: _t->selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MapVisibilityWidget::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapVisibilityWidget::visibilityChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject rtabmap::MapVisibilityWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_rtabmap__MapVisibilityWidget.data,
      qt_meta_data_rtabmap__MapVisibilityWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rtabmap::MapVisibilityWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::MapVisibilityWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__MapVisibilityWidget.stringdata0))
        return static_cast<void*>(const_cast< MapVisibilityWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int rtabmap::MapVisibilityWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::MapVisibilityWidget::visibilityChanged(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
