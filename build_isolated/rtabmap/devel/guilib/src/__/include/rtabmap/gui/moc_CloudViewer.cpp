/****************************************************************************
** Meta object code from reading C++ file 'CloudViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../src/rtabmap/guilib/include/rtabmap/gui/CloudViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CloudViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rtabmap__CloudViewer_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__CloudViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__CloudViewer_t qt_meta_stringdata_rtabmap__CloudViewer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "rtabmap::CloudViewer"
QT_MOC_LITERAL(1, 21, 13), // "configChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "setDefaultBackgroundColor"
QT_MOC_LITERAL(4, 62, 5), // "color"
QT_MOC_LITERAL(5, 68, 18), // "setBackgroundColor"
QT_MOC_LITERAL(6, 87, 18), // "setCloudVisibility"
QT_MOC_LITERAL(7, 106, 11), // "std::string"
QT_MOC_LITERAL(8, 118, 2), // "id"
QT_MOC_LITERAL(9, 121, 9), // "isVisible"
QT_MOC_LITERAL(10, 131, 15), // "setCloudOpacity"
QT_MOC_LITERAL(11, 147, 7), // "opacity"
QT_MOC_LITERAL(12, 155, 17), // "setCloudPointSize"
QT_MOC_LITERAL(13, 173, 4), // "size"
QT_MOC_LITERAL(14, 178, 5) // "clear"

    },
    "rtabmap::CloudViewer\0configChanged\0\0"
    "setDefaultBackgroundColor\0color\0"
    "setBackgroundColor\0setCloudVisibility\0"
    "std::string\0id\0isVisible\0setCloudOpacity\0"
    "opacity\0setCloudPointSize\0size\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__CloudViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    2,   61,    2, 0x0a /* Public */,
      10,    2,   66,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x2a /* Public | MethodCloned */,
      12,    2,   74,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Double,    8,   11,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,   13,
    QMetaType::Void,

       0        // eod
};

void rtabmap::CloudViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CloudViewer *_t = static_cast<CloudViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->setDefaultBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setCloudVisibility((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setCloudOpacity((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setCloudOpacity((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->setCloudPointSize((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CloudViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CloudViewer::configChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject rtabmap::CloudViewer::staticMetaObject = {
    { &QVTKWidget::staticMetaObject, qt_meta_stringdata_rtabmap__CloudViewer.data,
      qt_meta_data_rtabmap__CloudViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rtabmap::CloudViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::CloudViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__CloudViewer.stringdata0))
        return static_cast<void*>(const_cast< CloudViewer*>(this));
    return QVTKWidget::qt_metacast(_clname);
}

int rtabmap::CloudViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVTKWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::CloudViewer::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
