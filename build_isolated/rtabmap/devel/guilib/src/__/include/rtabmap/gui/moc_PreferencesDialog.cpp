/****************************************************************************
** Meta object code from reading C++ file 'PreferencesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../src/rtabmap/guilib/include/rtabmap/gui/PreferencesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rtabmap__PreferencesDialog_t {
    QByteArrayData data[66];
    char stringdata0[1239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__PreferencesDialog_t qt_meta_stringdata_rtabmap__PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "rtabmap::PreferencesDialog"
QT_MOC_LITERAL(1, 27, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 30), // "PreferencesDialog::PANEL_FLAGS"
QT_MOC_LITERAL(4, 75, 22), // "rtabmap::ParametersMap"
QT_MOC_LITERAL(5, 98, 12), // "setInputRate"
QT_MOC_LITERAL(6, 111, 5), // "value"
QT_MOC_LITERAL(7, 117, 16), // "setDetectionRate"
QT_MOC_LITERAL(8, 134, 12), // "setTimeLimit"
QT_MOC_LITERAL(9, 147, 11), // "setSLAMMode"
QT_MOC_LITERAL(10, 159, 7), // "enabled"
QT_MOC_LITERAL(11, 167, 18), // "selectSourceDriver"
QT_MOC_LITERAL(12, 186, 3), // "Src"
QT_MOC_LITERAL(13, 190, 3), // "src"
QT_MOC_LITERAL(14, 194, 9), // "calibrate"
QT_MOC_LITERAL(15, 204, 15), // "calibrateSimple"
QT_MOC_LITERAL(16, 220, 11), // "closeDialog"
QT_MOC_LITERAL(17, 232, 16), // "QAbstractButton*"
QT_MOC_LITERAL(18, 249, 6), // "button"
QT_MOC_LITERAL(19, 256, 10), // "resetApply"
QT_MOC_LITERAL(20, 267, 13), // "resetSettings"
QT_MOC_LITERAL(21, 281, 11), // "panelNumber"
QT_MOC_LITERAL(22, 293, 14), // "loadConfigFrom"
QT_MOC_LITERAL(23, 308, 12), // "saveConfigTo"
QT_MOC_LITERAL(24, 321, 11), // "resetConfig"
QT_MOC_LITERAL(25, 333, 24), // "makeObsoleteGeneralPanel"
QT_MOC_LITERAL(26, 358, 31), // "makeObsoleteCloudRenderingPanel"
QT_MOC_LITERAL(27, 390, 24), // "makeObsoleteLoggingPanel"
QT_MOC_LITERAL(28, 415, 23), // "makeObsoleteSourcePanel"
QT_MOC_LITERAL(29, 439, 7), // "clicked"
QT_MOC_LITERAL(30, 447, 7), // "current"
QT_MOC_LITERAL(31, 455, 8), // "previous"
QT_MOC_LITERAL(32, 464, 12), // "addParameter"
QT_MOC_LITERAL(33, 477, 20), // "updatePredictionPlot"
QT_MOC_LITERAL(34, 498, 11), // "updateKpROI"
QT_MOC_LITERAL(35, 510, 19), // "updateG2oVisibility"
QT_MOC_LITERAL(36, 530, 31), // "updateStereoDisparityVisibility"
QT_MOC_LITERAL(37, 562, 15), // "useOdomFeatures"
QT_MOC_LITERAL(38, 578, 22), // "changeWorkingDirectory"
QT_MOC_LITERAL(39, 601, 20), // "changeDictionaryPath"
QT_MOC_LITERAL(40, 622, 30), // "changeOdomBowFixedLocalMapPath"
QT_MOC_LITERAL(41, 653, 15), // "readSettingsEnd"
QT_MOC_LITERAL(42, 669, 13), // "setupTreeView"
QT_MOC_LITERAL(43, 683, 20), // "updateBasicParameter"
QT_MOC_LITERAL(44, 704, 18), // "openDatabaseViewer"
QT_MOC_LITERAL(45, 723, 24), // "visualizeDistortionModel"
QT_MOC_LITERAL(46, 748, 20), // "selectSourceDatabase"
QT_MOC_LITERAL(47, 769, 21), // "selectCalibrationPath"
QT_MOC_LITERAL(48, 791, 24), // "selectSourceImagesStamps"
QT_MOC_LITERAL(49, 816, 29), // "selectSourceRGBDImagesPathRGB"
QT_MOC_LITERAL(50, 846, 31), // "selectSourceRGBDImagesPathDepth"
QT_MOC_LITERAL(51, 878, 27), // "selectSourceImagesPathScans"
QT_MOC_LITERAL(52, 906, 24), // "selectSourceImagesPathGt"
QT_MOC_LITERAL(53, 931, 32), // "selectSourceStereoImagesPathLeft"
QT_MOC_LITERAL(54, 964, 33), // "selectSourceStereoImagesPathR..."
QT_MOC_LITERAL(55, 998, 22), // "selectSourceImagesPath"
QT_MOC_LITERAL(56, 1021, 21), // "selectSourceVideoPath"
QT_MOC_LITERAL(57, 1043, 27), // "selectSourceStereoVideoPath"
QT_MOC_LITERAL(58, 1071, 28), // "selectSourceStereoVideoPath2"
QT_MOC_LITERAL(59, 1100, 27), // "selectSourceDistortionModel"
QT_MOC_LITERAL(60, 1128, 19), // "selectSourceOniPath"
QT_MOC_LITERAL(61, 1148, 20), // "selectSourceOni2Path"
QT_MOC_LITERAL(62, 1169, 19), // "selectSourceSvoPath"
QT_MOC_LITERAL(63, 1189, 25), // "updateSourceGrpVisibility"
QT_MOC_LITERAL(64, 1215, 12), // "testOdometry"
QT_MOC_LITERAL(65, 1228, 10) // "testCamera"

    },
    "rtabmap::PreferencesDialog\0settingsChanged\0"
    "\0PreferencesDialog::PANEL_FLAGS\0"
    "rtabmap::ParametersMap\0setInputRate\0"
    "value\0setDetectionRate\0setTimeLimit\0"
    "setSLAMMode\0enabled\0selectSourceDriver\0"
    "Src\0src\0calibrate\0calibrateSimple\0"
    "closeDialog\0QAbstractButton*\0button\0"
    "resetApply\0resetSettings\0panelNumber\0"
    "loadConfigFrom\0saveConfigTo\0resetConfig\0"
    "makeObsoleteGeneralPanel\0"
    "makeObsoleteCloudRenderingPanel\0"
    "makeObsoleteLoggingPanel\0"
    "makeObsoleteSourcePanel\0clicked\0current\0"
    "previous\0addParameter\0updatePredictionPlot\0"
    "updateKpROI\0updateG2oVisibility\0"
    "updateStereoDisparityVisibility\0"
    "useOdomFeatures\0changeWorkingDirectory\0"
    "changeDictionaryPath\0"
    "changeOdomBowFixedLocalMapPath\0"
    "readSettingsEnd\0setupTreeView\0"
    "updateBasicParameter\0openDatabaseViewer\0"
    "visualizeDistortionModel\0selectSourceDatabase\0"
    "selectCalibrationPath\0selectSourceImagesStamps\0"
    "selectSourceRGBDImagesPathRGB\0"
    "selectSourceRGBDImagesPathDepth\0"
    "selectSourceImagesPathScans\0"
    "selectSourceImagesPathGt\0"
    "selectSourceStereoImagesPathLeft\0"
    "selectSourceStereoImagesPathRight\0"
    "selectSourceImagesPath\0selectSourceVideoPath\0"
    "selectSourceStereoVideoPath\0"
    "selectSourceStereoVideoPath2\0"
    "selectSourceDistortionModel\0"
    "selectSourceOniPath\0selectSourceOni2Path\0"
    "selectSourceSvoPath\0updateSourceGrpVisibility\0"
    "testOdometry\0testCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__PreferencesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  299,    2, 0x06 /* Public */,
       1,    1,  302,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  305,    2, 0x0a /* Public */,
       7,    1,  308,    2, 0x0a /* Public */,
       8,    1,  311,    2, 0x0a /* Public */,
       9,    1,  314,    2, 0x0a /* Public */,
      11,    1,  317,    2, 0x0a /* Public */,
      14,    0,  320,    2, 0x0a /* Public */,
      15,    0,  321,    2, 0x0a /* Public */,
      16,    1,  322,    2, 0x08 /* Private */,
      19,    1,  325,    2, 0x08 /* Private */,
      20,    1,  328,    2, 0x08 /* Private */,
      22,    0,  331,    2, 0x08 /* Private */,
      23,    0,  332,    2, 0x08 /* Private */,
      24,    0,  333,    2, 0x08 /* Private */,
      25,    0,  334,    2, 0x08 /* Private */,
      26,    0,  335,    2, 0x08 /* Private */,
      27,    0,  336,    2, 0x08 /* Private */,
      28,    0,  337,    2, 0x08 /* Private */,
      29,    2,  338,    2, 0x08 /* Private */,
      32,    1,  343,    2, 0x08 /* Private */,
      32,    1,  346,    2, 0x08 /* Private */,
      32,    1,  349,    2, 0x08 /* Private */,
      32,    1,  352,    2, 0x08 /* Private */,
      33,    0,  355,    2, 0x08 /* Private */,
      34,    0,  356,    2, 0x08 /* Private */,
      35,    0,  357,    2, 0x08 /* Private */,
      36,    0,  358,    2, 0x08 /* Private */,
      37,    0,  359,    2, 0x08 /* Private */,
      38,    0,  360,    2, 0x08 /* Private */,
      39,    0,  361,    2, 0x08 /* Private */,
      40,    0,  362,    2, 0x08 /* Private */,
      41,    0,  363,    2, 0x08 /* Private */,
      42,    0,  364,    2, 0x08 /* Private */,
      43,    0,  365,    2, 0x08 /* Private */,
      44,    0,  366,    2, 0x08 /* Private */,
      45,    0,  367,    2, 0x08 /* Private */,
      46,    0,  368,    2, 0x08 /* Private */,
      47,    0,  369,    2, 0x08 /* Private */,
      48,    0,  370,    2, 0x08 /* Private */,
      49,    0,  371,    2, 0x08 /* Private */,
      50,    0,  372,    2, 0x08 /* Private */,
      51,    0,  373,    2, 0x08 /* Private */,
      52,    0,  374,    2, 0x08 /* Private */,
      53,    0,  375,    2, 0x08 /* Private */,
      54,    0,  376,    2, 0x08 /* Private */,
      55,    0,  377,    2, 0x08 /* Private */,
      56,    0,  378,    2, 0x08 /* Private */,
      57,    0,  379,    2, 0x08 /* Private */,
      58,    0,  380,    2, 0x08 /* Private */,
      59,    0,  381,    2, 0x08 /* Private */,
      60,    0,  382,    2, 0x08 /* Private */,
      61,    0,  383,    2, 0x08 /* Private */,
      62,    0,  384,    2, 0x08 /* Private */,
      63,    0,  385,    2, 0x08 /* Private */,
      64,    0,  386,    2, 0x08 /* Private */,
      65,    0,  387,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   30,   31,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rtabmap::PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< PreferencesDialog::PANEL_FLAGS(*)>(_a[1]))); break;
        case 1: _t->settingsChanged((*reinterpret_cast< rtabmap::ParametersMap(*)>(_a[1]))); break;
        case 2: _t->setInputRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDetectionRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setTimeLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setSLAMMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->selectSourceDriver((*reinterpret_cast< Src(*)>(_a[1]))); break;
        case 7: _t->calibrate(); break;
        case 8: _t->calibrateSimple(); break;
        case 9: _t->closeDialog((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 10: _t->resetApply((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 11: _t->resetSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->loadConfigFrom(); break;
        case 13: { bool _r = _t->saveConfigTo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->resetConfig(); break;
        case 15: _t->makeObsoleteGeneralPanel(); break;
        case 16: _t->makeObsoleteCloudRenderingPanel(); break;
        case 17: _t->makeObsoleteLoggingPanel(); break;
        case 18: _t->makeObsoleteSourcePanel(); break;
        case 19: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 20: _t->addParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->addParameter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->addParameter((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->addParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->updatePredictionPlot(); break;
        case 25: _t->updateKpROI(); break;
        case 26: _t->updateG2oVisibility(); break;
        case 27: _t->updateStereoDisparityVisibility(); break;
        case 28: _t->useOdomFeatures(); break;
        case 29: _t->changeWorkingDirectory(); break;
        case 30: _t->changeDictionaryPath(); break;
        case 31: _t->changeOdomBowFixedLocalMapPath(); break;
        case 32: _t->readSettingsEnd(); break;
        case 33: _t->setupTreeView(); break;
        case 34: _t->updateBasicParameter(); break;
        case 35: _t->openDatabaseViewer(); break;
        case 36: _t->visualizeDistortionModel(); break;
        case 37: _t->selectSourceDatabase(); break;
        case 38: _t->selectCalibrationPath(); break;
        case 39: _t->selectSourceImagesStamps(); break;
        case 40: _t->selectSourceRGBDImagesPathRGB(); break;
        case 41: _t->selectSourceRGBDImagesPathDepth(); break;
        case 42: _t->selectSourceImagesPathScans(); break;
        case 43: _t->selectSourceImagesPathGt(); break;
        case 44: _t->selectSourceStereoImagesPathLeft(); break;
        case 45: _t->selectSourceStereoImagesPathRight(); break;
        case 46: _t->selectSourceImagesPath(); break;
        case 47: _t->selectSourceVideoPath(); break;
        case 48: _t->selectSourceStereoVideoPath(); break;
        case 49: _t->selectSourceStereoVideoPath2(); break;
        case 50: _t->selectSourceDistortionModel(); break;
        case 51: _t->selectSourceOniPath(); break;
        case 52: _t->selectSourceOni2Path(); break;
        case 53: _t->selectSourceSvoPath(); break;
        case 54: _t->updateSourceGrpVisibility(); break;
        case 55: _t->testOdometry(); break;
        case 56: _t->testCamera(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreferencesDialog::*_t)(PreferencesDialog::PANEL_FLAGS );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreferencesDialog::settingsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (PreferencesDialog::*_t)(rtabmap::ParametersMap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreferencesDialog::settingsChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject rtabmap::PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__PreferencesDialog.data,
      qt_meta_data_rtabmap__PreferencesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rtabmap::PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__PreferencesDialog.stringdata0))
        return static_cast<void*>(const_cast< PreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::PreferencesDialog::settingsChanged(PreferencesDialog::PANEL_FLAGS _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::PreferencesDialog::settingsChanged(rtabmap::ParametersMap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
