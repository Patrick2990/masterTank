/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../src/rtabmap/guilib/include/rtabmap/gui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rtabmap__MainWindow_t {
    QByteArrayData data[142];
    char stringdata0[2240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__MainWindow_t qt_meta_stringdata_rtabmap__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "rtabmap::MainWindow"
QT_MOC_LITERAL(1, 20, 13), // "statsReceived"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "rtabmap::Statistics"
QT_MOC_LITERAL(4, 55, 18), // "cameraInfoReceived"
QT_MOC_LITERAL(5, 74, 19), // "rtabmap::CameraInfo"
QT_MOC_LITERAL(6, 94, 16), // "odometryReceived"
QT_MOC_LITERAL(7, 111, 22), // "rtabmap::OdometryEvent"
QT_MOC_LITERAL(8, 134, 17), // "thresholdsChanged"
QT_MOC_LITERAL(9, 152, 12), // "stateChanged"
QT_MOC_LITERAL(10, 165, 17), // "MainWindow::State"
QT_MOC_LITERAL(11, 183, 24), // "rtabmapEventInitReceived"
QT_MOC_LITERAL(12, 208, 6), // "status"
QT_MOC_LITERAL(13, 215, 4), // "info"
QT_MOC_LITERAL(14, 220, 25), // "rtabmapEvent3DMapReceived"
QT_MOC_LITERAL(15, 246, 26), // "rtabmap::RtabmapEvent3DMap"
QT_MOC_LITERAL(16, 273, 5), // "event"
QT_MOC_LITERAL(17, 279, 30), // "rtabmapGlobalPathEventReceived"
QT_MOC_LITERAL(18, 310, 31), // "rtabmap::RtabmapGlobalPathEvent"
QT_MOC_LITERAL(19, 342, 25), // "rtabmapLabelErrorReceived"
QT_MOC_LITERAL(20, 368, 2), // "id"
QT_MOC_LITERAL(21, 371, 5), // "label"
QT_MOC_LITERAL(22, 377, 30), // "rtabmapGoalStatusEventReceived"
QT_MOC_LITERAL(23, 408, 14), // "imgRateChanged"
QT_MOC_LITERAL(24, 423, 20), // "detectionRateChanged"
QT_MOC_LITERAL(25, 444, 16), // "timeLimitChanged"
QT_MOC_LITERAL(26, 461, 18), // "mappingModeChanged"
QT_MOC_LITERAL(27, 480, 20), // "noMoreImagesReceived"
QT_MOC_LITERAL(28, 501, 21), // "loopClosureThrChanged"
QT_MOC_LITERAL(29, 523, 13), // "twistReceived"
QT_MOC_LITERAL(30, 537, 1), // "x"
QT_MOC_LITERAL(31, 539, 1), // "y"
QT_MOC_LITERAL(32, 541, 1), // "z"
QT_MOC_LITERAL(33, 543, 4), // "roll"
QT_MOC_LITERAL(34, 548, 5), // "pitch"
QT_MOC_LITERAL(35, 554, 3), // "yaw"
QT_MOC_LITERAL(36, 558, 3), // "row"
QT_MOC_LITERAL(37, 562, 3), // "col"
QT_MOC_LITERAL(38, 566, 12), // "processStats"
QT_MOC_LITERAL(39, 579, 4), // "stat"
QT_MOC_LITERAL(40, 584, 23), // "updateCacheFromDatabase"
QT_MOC_LITERAL(41, 608, 4), // "path"
QT_MOC_LITERAL(42, 613, 12), // "openDatabase"
QT_MOC_LITERAL(43, 626, 11), // "changeState"
QT_MOC_LITERAL(44, 638, 5), // "state"
QT_MOC_LITERAL(45, 644, 4), // "beep"
QT_MOC_LITERAL(46, 649, 14), // "cancelProgress"
QT_MOC_LITERAL(47, 664, 17), // "configGUIModified"
QT_MOC_LITERAL(48, 682, 13), // "saveConfigGUI"
QT_MOC_LITERAL(49, 696, 11), // "newDatabase"
QT_MOC_LITERAL(50, 708, 13), // "closeDatabase"
QT_MOC_LITERAL(51, 722, 12), // "editDatabase"
QT_MOC_LITERAL(52, 735, 14), // "startDetection"
QT_MOC_LITERAL(53, 750, 14), // "pauseDetection"
QT_MOC_LITERAL(54, 765, 13), // "stopDetection"
QT_MOC_LITERAL(55, 779, 18), // "notifyNoMoreImages"
QT_MOC_LITERAL(56, 798, 19), // "printLoopClosureIds"
QT_MOC_LITERAL(57, 818, 16), // "generateGraphDOT"
QT_MOC_LITERAL(58, 835, 14), // "exportPosesRaw"
QT_MOC_LITERAL(59, 850, 19), // "exportPosesRGBDSLAM"
QT_MOC_LITERAL(60, 870, 16), // "exportPosesKITTI"
QT_MOC_LITERAL(61, 887, 15), // "exportPosesTORO"
QT_MOC_LITERAL(62, 903, 14), // "exportPosesG2O"
QT_MOC_LITERAL(63, 918, 12), // "exportImages"
QT_MOC_LITERAL(64, 931, 13), // "exportOctomap"
QT_MOC_LITERAL(65, 945, 14), // "postProcessing"
QT_MOC_LITERAL(66, 960, 16), // "depthCalibration"
QT_MOC_LITERAL(67, 977, 12), // "deleteMemory"
QT_MOC_LITERAL(68, 990, 20), // "openWorkingDirectory"
QT_MOC_LITERAL(69, 1011, 14), // "updateEditMenu"
QT_MOC_LITERAL(70, 1026, 12), // "selectStream"
QT_MOC_LITERAL(71, 1039, 12), // "selectOpenni"
QT_MOC_LITERAL(72, 1052, 14), // "selectFreenect"
QT_MOC_LITERAL(73, 1067, 14), // "selectOpenniCv"
QT_MOC_LITERAL(74, 1082, 18), // "selectOpenniCvAsus"
QT_MOC_LITERAL(75, 1101, 13), // "selectOpenni2"
QT_MOC_LITERAL(76, 1115, 15), // "selectFreenect2"
QT_MOC_LITERAL(77, 1131, 15), // "selectRealSense"
QT_MOC_LITERAL(78, 1147, 18), // "selectStereoDC1394"
QT_MOC_LITERAL(79, 1166, 23), // "selectStereoFlyCapture2"
QT_MOC_LITERAL(80, 1190, 15), // "selectStereoZed"
QT_MOC_LITERAL(81, 1206, 15), // "selectStereoUsb"
QT_MOC_LITERAL(82, 1222, 13), // "dumpTheMemory"
QT_MOC_LITERAL(83, 1236, 17), // "dumpThePrediction"
QT_MOC_LITERAL(84, 1254, 8), // "sendGoal"
QT_MOC_LITERAL(85, 1263, 13), // "sendWaypoints"
QT_MOC_LITERAL(86, 1277, 8), // "postGoal"
QT_MOC_LITERAL(87, 1286, 4), // "goal"
QT_MOC_LITERAL(88, 1291, 10), // "cancelGoal"
QT_MOC_LITERAL(89, 1302, 17), // "downloadAllClouds"
QT_MOC_LITERAL(90, 1320, 17), // "downloadPoseGraph"
QT_MOC_LITERAL(91, 1338, 25), // "anchorCloudsToGroundTruth"
QT_MOC_LITERAL(92, 1364, 13), // "clearTheCache"
QT_MOC_LITERAL(93, 1378, 15), // "openPreferences"
QT_MOC_LITERAL(94, 1394, 21), // "openPreferencesSource"
QT_MOC_LITERAL(95, 1416, 15), // "setDefaultViews"
QT_MOC_LITERAL(96, 1432, 25), // "selectScreenCaptureFormat"
QT_MOC_LITERAL(97, 1458, 7), // "checked"
QT_MOC_LITERAL(98, 1466, 14), // "takeScreenshot"
QT_MOC_LITERAL(99, 1481, 17), // "updateElapsedTime"
QT_MOC_LITERAL(100, 1499, 17), // "processCameraInfo"
QT_MOC_LITERAL(101, 1517, 15), // "processOdometry"
QT_MOC_LITERAL(102, 1533, 4), // "odom"
QT_MOC_LITERAL(103, 1538, 11), // "dataIgnored"
QT_MOC_LITERAL(104, 1550, 17), // "applyPrefSettings"
QT_MOC_LITERAL(105, 1568, 30), // "PreferencesDialog::PANEL_FLAGS"
QT_MOC_LITERAL(106, 1599, 5), // "flags"
QT_MOC_LITERAL(107, 1605, 22), // "rtabmap::ParametersMap"
QT_MOC_LITERAL(108, 1628, 10), // "parameters"
QT_MOC_LITERAL(109, 1639, 23), // "processRtabmapEventInit"
QT_MOC_LITERAL(110, 1663, 24), // "processRtabmapEvent3DMap"
QT_MOC_LITERAL(111, 1688, 29), // "processRtabmapGlobalPathEvent"
QT_MOC_LITERAL(112, 1718, 29), // "processRtabmapLabelErrorEvent"
QT_MOC_LITERAL(113, 1748, 29), // "processRtabmapGoalStatusEvent"
QT_MOC_LITERAL(114, 1778, 20), // "changeImgRateSetting"
QT_MOC_LITERAL(115, 1799, 26), // "changeDetectionRateSetting"
QT_MOC_LITERAL(116, 1826, 22), // "changeTimeLimitSetting"
QT_MOC_LITERAL(117, 1849, 17), // "changeMappingMode"
QT_MOC_LITERAL(118, 1867, 14), // "setAspectRatio"
QT_MOC_LITERAL(119, 1882, 1), // "w"
QT_MOC_LITERAL(120, 1884, 1), // "h"
QT_MOC_LITERAL(121, 1886, 18), // "setAspectRatio16_9"
QT_MOC_LITERAL(122, 1905, 19), // "setAspectRatio16_10"
QT_MOC_LITERAL(123, 1925, 17), // "setAspectRatio4_3"
QT_MOC_LITERAL(124, 1943, 18), // "setAspectRatio240p"
QT_MOC_LITERAL(125, 1962, 18), // "setAspectRatio360p"
QT_MOC_LITERAL(126, 1981, 18), // "setAspectRatio480p"
QT_MOC_LITERAL(127, 2000, 18), // "setAspectRatio720p"
QT_MOC_LITERAL(128, 2019, 19), // "setAspectRatio1080p"
QT_MOC_LITERAL(129, 2039, 20), // "setAspectRatioCustom"
QT_MOC_LITERAL(130, 2060, 13), // "exportGridMap"
QT_MOC_LITERAL(131, 2074, 11), // "exportScans"
QT_MOC_LITERAL(132, 2086, 12), // "exportClouds"
QT_MOC_LITERAL(133, 2099, 19), // "exportBundlerFormat"
QT_MOC_LITERAL(134, 2119, 9), // "viewScans"
QT_MOC_LITERAL(135, 2129, 10), // "viewClouds"
QT_MOC_LITERAL(136, 2140, 13), // "resetOdometry"
QT_MOC_LITERAL(137, 2154, 13), // "triggerNewMap"
QT_MOC_LITERAL(138, 2168, 12), // "dataRecorder"
QT_MOC_LITERAL(139, 2181, 21), // "dataRecorderDestroyed"
QT_MOC_LITERAL(140, 2203, 20), // "updateNodeVisibility"
QT_MOC_LITERAL(141, 2224, 15) // "updateGraphView"

    },
    "rtabmap::MainWindow\0statsReceived\0\0"
    "rtabmap::Statistics\0cameraInfoReceived\0"
    "rtabmap::CameraInfo\0odometryReceived\0"
    "rtabmap::OdometryEvent\0thresholdsChanged\0"
    "stateChanged\0MainWindow::State\0"
    "rtabmapEventInitReceived\0status\0info\0"
    "rtabmapEvent3DMapReceived\0"
    "rtabmap::RtabmapEvent3DMap\0event\0"
    "rtabmapGlobalPathEventReceived\0"
    "rtabmap::RtabmapGlobalPathEvent\0"
    "rtabmapLabelErrorReceived\0id\0label\0"
    "rtabmapGoalStatusEventReceived\0"
    "imgRateChanged\0detectionRateChanged\0"
    "timeLimitChanged\0mappingModeChanged\0"
    "noMoreImagesReceived\0loopClosureThrChanged\0"
    "twistReceived\0x\0y\0z\0roll\0pitch\0yaw\0"
    "row\0col\0processStats\0stat\0"
    "updateCacheFromDatabase\0path\0openDatabase\0"
    "changeState\0state\0beep\0cancelProgress\0"
    "configGUIModified\0saveConfigGUI\0"
    "newDatabase\0closeDatabase\0editDatabase\0"
    "startDetection\0pauseDetection\0"
    "stopDetection\0notifyNoMoreImages\0"
    "printLoopClosureIds\0generateGraphDOT\0"
    "exportPosesRaw\0exportPosesRGBDSLAM\0"
    "exportPosesKITTI\0exportPosesTORO\0"
    "exportPosesG2O\0exportImages\0exportOctomap\0"
    "postProcessing\0depthCalibration\0"
    "deleteMemory\0openWorkingDirectory\0"
    "updateEditMenu\0selectStream\0selectOpenni\0"
    "selectFreenect\0selectOpenniCv\0"
    "selectOpenniCvAsus\0selectOpenni2\0"
    "selectFreenect2\0selectRealSense\0"
    "selectStereoDC1394\0selectStereoFlyCapture2\0"
    "selectStereoZed\0selectStereoUsb\0"
    "dumpTheMemory\0dumpThePrediction\0"
    "sendGoal\0sendWaypoints\0postGoal\0goal\0"
    "cancelGoal\0downloadAllClouds\0"
    "downloadPoseGraph\0anchorCloudsToGroundTruth\0"
    "clearTheCache\0openPreferences\0"
    "openPreferencesSource\0setDefaultViews\0"
    "selectScreenCaptureFormat\0checked\0"
    "takeScreenshot\0updateElapsedTime\0"
    "processCameraInfo\0processOdometry\0"
    "odom\0dataIgnored\0applyPrefSettings\0"
    "PreferencesDialog::PANEL_FLAGS\0flags\0"
    "rtabmap::ParametersMap\0parameters\0"
    "processRtabmapEventInit\0"
    "processRtabmapEvent3DMap\0"
    "processRtabmapGlobalPathEvent\0"
    "processRtabmapLabelErrorEvent\0"
    "processRtabmapGoalStatusEvent\0"
    "changeImgRateSetting\0changeDetectionRateSetting\0"
    "changeTimeLimitSetting\0changeMappingMode\0"
    "setAspectRatio\0w\0h\0setAspectRatio16_9\0"
    "setAspectRatio16_10\0setAspectRatio4_3\0"
    "setAspectRatio240p\0setAspectRatio360p\0"
    "setAspectRatio480p\0setAspectRatio720p\0"
    "setAspectRatio1080p\0setAspectRatioCustom\0"
    "exportGridMap\0exportScans\0exportClouds\0"
    "exportBundlerFormat\0viewScans\0viewClouds\0"
    "resetOdometry\0triggerNewMap\0dataRecorder\0"
    "dataRecorderDestroyed\0updateNodeVisibility\0"
    "updateGraphView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     112,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  574,    2, 0x06 /* Public */,
       4,    1,  577,    2, 0x06 /* Public */,
       6,    2,  580,    2, 0x06 /* Public */,
       8,    2,  585,    2, 0x06 /* Public */,
       9,    1,  590,    2, 0x06 /* Public */,
      11,    2,  593,    2, 0x06 /* Public */,
      14,    1,  598,    2, 0x06 /* Public */,
      17,    1,  601,    2, 0x06 /* Public */,
      19,    2,  604,    2, 0x06 /* Public */,
      22,    1,  609,    2, 0x06 /* Public */,
      23,    1,  612,    2, 0x06 /* Public */,
      24,    1,  615,    2, 0x06 /* Public */,
      25,    1,  618,    2, 0x06 /* Public */,
      26,    1,  621,    2, 0x06 /* Public */,
      27,    0,  624,    2, 0x06 /* Public */,
      28,    1,  625,    2, 0x06 /* Public */,
      29,    8,  628,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      38,    1,  645,    2, 0x0a /* Public */,
      40,    1,  648,    2, 0x0a /* Public */,
      42,    1,  651,    2, 0x0a /* Public */,
      43,    1,  654,    2, 0x08 /* Private */,
      45,    0,  657,    2, 0x08 /* Private */,
      46,    0,  658,    2, 0x08 /* Private */,
      47,    0,  659,    2, 0x08 /* Private */,
      48,    0,  660,    2, 0x08 /* Private */,
      49,    0,  661,    2, 0x08 /* Private */,
      42,    0,  662,    2, 0x08 /* Private */,
      50,    0,  663,    2, 0x08 /* Private */,
      51,    0,  664,    2, 0x08 /* Private */,
      52,    0,  665,    2, 0x08 /* Private */,
      53,    0,  666,    2, 0x08 /* Private */,
      54,    0,  667,    2, 0x08 /* Private */,
      55,    0,  668,    2, 0x08 /* Private */,
      56,    0,  669,    2, 0x08 /* Private */,
      57,    0,  670,    2, 0x08 /* Private */,
      58,    0,  671,    2, 0x08 /* Private */,
      59,    0,  672,    2, 0x08 /* Private */,
      60,    0,  673,    2, 0x08 /* Private */,
      61,    0,  674,    2, 0x08 /* Private */,
      62,    0,  675,    2, 0x08 /* Private */,
      63,    0,  676,    2, 0x08 /* Private */,
      64,    0,  677,    2, 0x08 /* Private */,
      65,    0,  678,    2, 0x08 /* Private */,
      66,    0,  679,    2, 0x08 /* Private */,
      67,    0,  680,    2, 0x08 /* Private */,
      68,    0,  681,    2, 0x08 /* Private */,
      69,    0,  682,    2, 0x08 /* Private */,
      70,    0,  683,    2, 0x08 /* Private */,
      71,    0,  684,    2, 0x08 /* Private */,
      72,    0,  685,    2, 0x08 /* Private */,
      73,    0,  686,    2, 0x08 /* Private */,
      74,    0,  687,    2, 0x08 /* Private */,
      75,    0,  688,    2, 0x08 /* Private */,
      76,    0,  689,    2, 0x08 /* Private */,
      77,    0,  690,    2, 0x08 /* Private */,
      78,    0,  691,    2, 0x08 /* Private */,
      79,    0,  692,    2, 0x08 /* Private */,
      80,    0,  693,    2, 0x08 /* Private */,
      81,    0,  694,    2, 0x08 /* Private */,
      82,    0,  695,    2, 0x08 /* Private */,
      83,    0,  696,    2, 0x08 /* Private */,
      84,    0,  697,    2, 0x08 /* Private */,
      85,    0,  698,    2, 0x08 /* Private */,
      86,    1,  699,    2, 0x08 /* Private */,
      88,    0,  702,    2, 0x08 /* Private */,
      21,    0,  703,    2, 0x08 /* Private */,
      40,    0,  704,    2, 0x08 /* Private */,
      89,    0,  705,    2, 0x08 /* Private */,
      90,    0,  706,    2, 0x08 /* Private */,
      91,    0,  707,    2, 0x08 /* Private */,
      92,    0,  708,    2, 0x08 /* Private */,
      93,    0,  709,    2, 0x08 /* Private */,
      94,    0,  710,    2, 0x08 /* Private */,
      95,    0,  711,    2, 0x08 /* Private */,
      96,    1,  712,    2, 0x08 /* Private */,
      98,    0,  715,    2, 0x08 /* Private */,
      99,    0,  716,    2, 0x08 /* Private */,
     100,    1,  717,    2, 0x08 /* Private */,
     101,    2,  720,    2, 0x08 /* Private */,
     104,    1,  725,    2, 0x08 /* Private */,
     104,    1,  728,    2, 0x08 /* Private */,
     109,    2,  731,    2, 0x08 /* Private */,
     110,    1,  736,    2, 0x08 /* Private */,
     111,    1,  739,    2, 0x08 /* Private */,
     112,    2,  742,    2, 0x08 /* Private */,
     113,    1,  747,    2, 0x08 /* Private */,
     114,    0,  750,    2, 0x08 /* Private */,
     115,    0,  751,    2, 0x08 /* Private */,
     116,    0,  752,    2, 0x08 /* Private */,
     117,    0,  753,    2, 0x08 /* Private */,
     118,    2,  754,    2, 0x08 /* Private */,
     121,    0,  759,    2, 0x08 /* Private */,
     122,    0,  760,    2, 0x08 /* Private */,
     123,    0,  761,    2, 0x08 /* Private */,
     124,    0,  762,    2, 0x08 /* Private */,
     125,    0,  763,    2, 0x08 /* Private */,
     126,    0,  764,    2, 0x08 /* Private */,
     127,    0,  765,    2, 0x08 /* Private */,
     128,    0,  766,    2, 0x08 /* Private */,
     129,    0,  767,    2, 0x08 /* Private */,
     130,    0,  768,    2, 0x08 /* Private */,
     131,    0,  769,    2, 0x08 /* Private */,
     132,    0,  770,    2, 0x08 /* Private */,
     133,    0,  771,    2, 0x08 /* Private */,
     134,    0,  772,    2, 0x08 /* Private */,
     135,    0,  773,    2, 0x08 /* Private */,
     136,    0,  774,    2, 0x08 /* Private */,
     137,    0,  775,    2, 0x08 /* Private */,
     138,    0,  776,    2, 0x08 /* Private */,
     139,    0,  777,    2, 0x08 /* Private */,
     140,    2,  778,    2, 0x08 /* Private */,
     141,    0,  783,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int, QMetaType::Int,   30,   31,   32,   33,   34,   35,   36,   37,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, 0x80000000 | 10,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   87,
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
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,  102,  103,
    QMetaType::Void, 0x80000000 | 105,  106,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  119,  120,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void,

       0        // eod
};

void rtabmap::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statsReceived((*reinterpret_cast< const rtabmap::Statistics(*)>(_a[1]))); break;
        case 1: _t->cameraInfoReceived((*reinterpret_cast< const rtabmap::CameraInfo(*)>(_a[1]))); break;
        case 2: _t->odometryReceived((*reinterpret_cast< const rtabmap::OdometryEvent(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->thresholdsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< MainWindow::State(*)>(_a[1]))); break;
        case 5: _t->rtabmapEventInitReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->rtabmapEvent3DMapReceived((*reinterpret_cast< const rtabmap::RtabmapEvent3DMap(*)>(_a[1]))); break;
        case 7: _t->rtabmapGlobalPathEventReceived((*reinterpret_cast< const rtabmap::RtabmapGlobalPathEvent(*)>(_a[1]))); break;
        case 8: _t->rtabmapLabelErrorReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->rtabmapGoalStatusEventReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->imgRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->detectionRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->timeLimitChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->mappingModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->noMoreImagesReceived(); break;
        case 15: _t->loopClosureThrChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->twistReceived((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 17: _t->processStats((*reinterpret_cast< const rtabmap::Statistics(*)>(_a[1]))); break;
        case 18: _t->updateCacheFromDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->changeState((*reinterpret_cast< MainWindow::State(*)>(_a[1]))); break;
        case 21: _t->beep(); break;
        case 22: _t->cancelProgress(); break;
        case 23: _t->configGUIModified(); break;
        case 24: _t->saveConfigGUI(); break;
        case 25: _t->newDatabase(); break;
        case 26: _t->openDatabase(); break;
        case 27: { bool _r = _t->closeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->editDatabase(); break;
        case 29: _t->startDetection(); break;
        case 30: _t->pauseDetection(); break;
        case 31: _t->stopDetection(); break;
        case 32: _t->notifyNoMoreImages(); break;
        case 33: _t->printLoopClosureIds(); break;
        case 34: _t->generateGraphDOT(); break;
        case 35: _t->exportPosesRaw(); break;
        case 36: _t->exportPosesRGBDSLAM(); break;
        case 37: _t->exportPosesKITTI(); break;
        case 38: _t->exportPosesTORO(); break;
        case 39: _t->exportPosesG2O(); break;
        case 40: _t->exportImages(); break;
        case 41: _t->exportOctomap(); break;
        case 42: _t->postProcessing(); break;
        case 43: _t->depthCalibration(); break;
        case 44: _t->deleteMemory(); break;
        case 45: _t->openWorkingDirectory(); break;
        case 46: _t->updateEditMenu(); break;
        case 47: _t->selectStream(); break;
        case 48: _t->selectOpenni(); break;
        case 49: _t->selectFreenect(); break;
        case 50: _t->selectOpenniCv(); break;
        case 51: _t->selectOpenniCvAsus(); break;
        case 52: _t->selectOpenni2(); break;
        case 53: _t->selectFreenect2(); break;
        case 54: _t->selectRealSense(); break;
        case 55: _t->selectStereoDC1394(); break;
        case 56: _t->selectStereoFlyCapture2(); break;
        case 57: _t->selectStereoZed(); break;
        case 58: _t->selectStereoUsb(); break;
        case 59: _t->dumpTheMemory(); break;
        case 60: _t->dumpThePrediction(); break;
        case 61: _t->sendGoal(); break;
        case 62: _t->sendWaypoints(); break;
        case 63: _t->postGoal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 64: _t->cancelGoal(); break;
        case 65: _t->label(); break;
        case 66: _t->updateCacheFromDatabase(); break;
        case 67: _t->downloadAllClouds(); break;
        case 68: _t->downloadPoseGraph(); break;
        case 69: _t->anchorCloudsToGroundTruth(); break;
        case 70: _t->clearTheCache(); break;
        case 71: _t->openPreferences(); break;
        case 72: _t->openPreferencesSource(); break;
        case 73: _t->setDefaultViews(); break;
        case 74: _t->selectScreenCaptureFormat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->takeScreenshot(); break;
        case 76: _t->updateElapsedTime(); break;
        case 77: _t->processCameraInfo((*reinterpret_cast< const rtabmap::CameraInfo(*)>(_a[1]))); break;
        case 78: _t->processOdometry((*reinterpret_cast< const rtabmap::OdometryEvent(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 79: _t->applyPrefSettings((*reinterpret_cast< PreferencesDialog::PANEL_FLAGS(*)>(_a[1]))); break;
        case 80: _t->applyPrefSettings((*reinterpret_cast< const rtabmap::ParametersMap(*)>(_a[1]))); break;
        case 81: _t->processRtabmapEventInit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 82: _t->processRtabmapEvent3DMap((*reinterpret_cast< const rtabmap::RtabmapEvent3DMap(*)>(_a[1]))); break;
        case 83: _t->processRtabmapGlobalPathEvent((*reinterpret_cast< const rtabmap::RtabmapGlobalPathEvent(*)>(_a[1]))); break;
        case 84: _t->processRtabmapLabelErrorEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 85: _t->processRtabmapGoalStatusEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->changeImgRateSetting(); break;
        case 87: _t->changeDetectionRateSetting(); break;
        case 88: _t->changeTimeLimitSetting(); break;
        case 89: _t->changeMappingMode(); break;
        case 90: _t->setAspectRatio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 91: _t->setAspectRatio16_9(); break;
        case 92: _t->setAspectRatio16_10(); break;
        case 93: _t->setAspectRatio4_3(); break;
        case 94: _t->setAspectRatio240p(); break;
        case 95: _t->setAspectRatio360p(); break;
        case 96: _t->setAspectRatio480p(); break;
        case 97: _t->setAspectRatio720p(); break;
        case 98: _t->setAspectRatio1080p(); break;
        case 99: _t->setAspectRatioCustom(); break;
        case 100: _t->exportGridMap(); break;
        case 101: _t->exportScans(); break;
        case 102: _t->exportClouds(); break;
        case 103: _t->exportBundlerFormat(); break;
        case 104: _t->viewScans(); break;
        case 105: _t->viewClouds(); break;
        case 106: _t->resetOdometry(); break;
        case 107: _t->triggerNewMap(); break;
        case 108: _t->dataRecorder(); break;
        case 109: _t->dataRecorderDestroyed(); break;
        case 110: _t->updateNodeVisibility((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 111: _t->updateGraphView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const rtabmap::Statistics & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::statsReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(const rtabmap::CameraInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::cameraInfoReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(const rtabmap::OdometryEvent & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::odometryReceived)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::thresholdsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (MainWindow::*_t)(MainWindow::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::stateChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rtabmapEventInitReceived)) {
                *result = 5;
            }
        }
        {
            typedef void (MainWindow::*_t)(const rtabmap::RtabmapEvent3DMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rtabmapEvent3DMapReceived)) {
                *result = 6;
            }
        }
        {
            typedef void (MainWindow::*_t)(const rtabmap::RtabmapGlobalPathEvent & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rtabmapGlobalPathEventReceived)) {
                *result = 7;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rtabmapLabelErrorReceived)) {
                *result = 8;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::rtabmapGoalStatusEventReceived)) {
                *result = 9;
            }
        }
        {
            typedef void (MainWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::imgRateChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (MainWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::detectionRateChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (MainWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::timeLimitChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::mappingModeChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::noMoreImagesReceived)) {
                *result = 14;
            }
        }
        {
            typedef void (MainWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::loopClosureThrChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (MainWindow::*_t)(float , float , float , float , float , float , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::twistReceived)) {
                *result = 16;
            }
        }
    }
}

const QMetaObject rtabmap::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_rtabmap__MainWindow.data,
      qt_meta_data_rtabmap__MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rtabmap::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int rtabmap::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 112)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 112;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 112)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 112;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::MainWindow::statsReceived(const rtabmap::Statistics & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::MainWindow::cameraInfoReceived(const rtabmap::CameraInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rtabmap::MainWindow::odometryReceived(const rtabmap::OdometryEvent & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rtabmap::MainWindow::thresholdsChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void rtabmap::MainWindow::stateChanged(MainWindow::State _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void rtabmap::MainWindow::rtabmapEventInitReceived(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void rtabmap::MainWindow::rtabmapEvent3DMapReceived(const rtabmap::RtabmapEvent3DMap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void rtabmap::MainWindow::rtabmapGlobalPathEventReceived(const rtabmap::RtabmapGlobalPathEvent & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void rtabmap::MainWindow::rtabmapLabelErrorReceived(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void rtabmap::MainWindow::rtabmapGoalStatusEventReceived(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void rtabmap::MainWindow::imgRateChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void rtabmap::MainWindow::detectionRateChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void rtabmap::MainWindow::timeLimitChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void rtabmap::MainWindow::mappingModeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void rtabmap::MainWindow::noMoreImagesReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void rtabmap::MainWindow::loopClosureThrChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void rtabmap::MainWindow::twistReceived(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6, int _t7, int _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
