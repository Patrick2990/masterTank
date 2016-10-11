/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../include/rtabmap/gui/ConsoleWidget.h"
#include "../include/rtabmap/gui/GraphViewer.h"
#include "../include/rtabmap/gui/ImageView.h"
#include "../include/rtabmap/gui/StatsToolBox.h"
#include "../include/rtabmap/utilite/UPlot.h"
#include "MapVisibilityWidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionExit;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionPreferences;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionPause_on_match;
    QAction *actionStop;
    QAction *actionDump_the_memory;
    QAction *actionPause_when_a_loop_hypothesis_is_rejected;
    QAction *actionClear_cache;
    QAction *actionAuto_screen_capture;
    QAction *actionDump_the_prediction_matrix;
    QAction *actionGenerate_map;
    QAction *actionDelete_memory;
    QAction *actionOpen_working_directory;
    QAction *action16_9;
    QAction *action16_10;
    QAction *action4_3;
    QAction *action360p;
    QAction *action480p;
    QAction *action720p;
    QAction *action1080p;
    QAction *action240p;
    QAction *actionUsbCamera;
    QAction *actionPrint_loop_closure_IDs_to_console;
    QAction *actionSave_point_cloud;
    QAction *actionDownload_all_clouds;
    QAction *actionPause_on_local_loop_detection;
    QAction *actionSLAM_mode;
    QAction *actionLocalization_mode;
    QAction *actionReset_Odometry;
    QAction *actionView_high_res_point_cloud;
    QAction *actionTrigger_a_new_map;
    QAction *actionDownload_graph;
    QAction *actionScreenshot;
    QAction *actionOpenNI_PCL;
    QAction *actionFreenect;
    QAction *actionOpenNI_CV;
    QAction *actionOpenNI_CV_ASUS;
    QAction *actionOpenNI2;
    QAction *actionOpenNI_PCL_ASUS;
    QAction *actionData_recorder;
    QAction *actionExport_2D_Grid_map_bmp_png;
    QAction *actionExport_2D_scans_ply_pcd;
    QAction *actionView_scans;
    QAction *actionOpen_database;
    QAction *actionNew_database;
    QAction *actionClose_database;
    QAction *actionEdit_database;
    QAction *actionPost_processing;
    QAction *actionSave_GUI_config;
    QAction *actionFreenect2;
    QAction *actionStereoDC1394;
    QAction *actionOpenNI2_kinect;
    QAction *actionOpenNI2_sense;
    QAction *actionStereoFlyCapture2;
    QAction *actionSend_goal;
    QAction *actionCancel_goal;
    QAction *actionDefault_views;
    QAction *actionMore_options;
    QAction *actionLabel_current_location;
    QAction *actionKITTI_format_txt;
    QAction *actionRGBD_SLAM_format_txt;
    QAction *actionTORO_graph;
    QAction *actionExport_cameras_in_Bundle_format_out;
    QAction *actionRaw_format_txt;
    QAction *actionG2o_g2o;
    QAction *actionCustom;
    QAction *actionSend_waypoints;
    QAction *actionUpdate_cache_from_database;
    QAction *actionExport_images_RGB_jpg_Depth_png;
    QAction *actionAnchor_clouds_to_ground_truth;
    QAction *actionStereoZed;
    QAction *actionStereoUsb;
    QAction *actionExport_octomap;
    QAction *actionRealSense;
    QAction *actionDepth_Calibration;
    QWidget *widget_mainWindow;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuExport_poses;
    QMenu *menuEdit;
    QMenu *menuAdvanced;
    QMenu *menu6;
    QMenu *menuProcess;
    QMenu *menuSelect_source;
    QMenu *menuImage;
    QMenu *menuRGB_D_camera;
    QMenu *menuKinect_for_Xbox_360;
    QMenu *menuXtion_PRO_LIVE;
    QMenu *menuSense_3D_scanner;
    QMenu *menuKinect_v2;
    QMenu *menuRealSense_R200;
    QMenu *menuStereo_camera;
    QMenu *menuBumblebee2_2;
    QMenu *menuZed_camera;
    QMenu *menuWindow;
    QMenu *menuShow_view;
    QMenu *menuAspect_ratio_2;
    QMenu *menuTools;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_posterior;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    UPlot *posteriorPlot;
    QToolBar *toolBar;
    QDockWidget *dockWidget_statsV2;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_stats_timeLimit;
    QLabel *label_source;
    QLabel *label_stats_source;
    QDoubleSpinBox *doubleSpinBox_stats_imgRate;
    QLabel *label_45;
    QLabel *label_elapsedTime;
    QLabel *label_20;
    QLabel *label_stats_imageNumber;
    QLabel *label_12;
    QLabel *label_stats_loopClosuresDetected;
    QLabel *label_38;
    QLabel *label_stats_loopClosuresReactivatedDetected;
    QLabel *label_15;
    QLabel *label_stats_loopClosuresRejected;
    QLabel *doubleSpinBox_stats_imgRate_label;
    QLabel *label_timeLimit;
    QDoubleSpinBox *doubleSpinBox_stats_detectionRate;
    QLabel *doubleSpinBox_stats_imgRate_label_2;
    rtabmap::StatsToolBox *statsToolBox;
    QSpacerItem *verticalSpacer_2;
    QDockWidget *dockWidget_likelihood;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_6;
    UPlot *likelihoodPlot;
    QDockWidget *dockWidget_console;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    rtabmap::ConsoleWidget *widget_console;
    QDockWidget *dockWidget_rawlikelihood;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_4;
    UPlot *rawLikelihoodPlot;
    QDockWidget *dockWidget_cloudViewer;
    QWidget *layout_cloudViewer;
    QVBoxLayout *verticalLayout_3;
    QDockWidget *dockWidget_loopClosureViewer;
    QWidget *layout_loopClosureViewer;
    QVBoxLayout *verticalLayout_7;
    QDockWidget *dockWidget_mapVisibility;
    QWidget *dockWidgetContents_8;
    QVBoxLayout *verticalLayout_9;
    rtabmap::MapVisibilityWidget *widget_mapVisibility;
    QDockWidget *dockWidget_graphViewer;
    QWidget *dockWidgetContents_9;
    QVBoxLayout *verticalLayout_10;
    rtabmap::GraphViewer *graphicsView_graphView;
    QDockWidget *dockWidget_imageView;
    QWidget *layout_imageview;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_refId;
    rtabmap::ImageView *imageView_source;
    QVBoxLayout *verticalLayout;
    QLabel *label_matchId;
    rtabmap::ImageView *imageView_loopClosure;
    QDockWidget *dockWidget_odometry;
    QWidget *dockWidgetContents_10;
    QVBoxLayout *verticalLayout_11;
    rtabmap::ImageView *imageView_odometry;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(1012, 712);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/RTAB-Map.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mainWindow->setWindowIcon(icon);
        mainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionExit = new QAction(mainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/system-log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionHelp = new QAction(mainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp->setEnabled(false);
        actionAbout = new QAction(mainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionPreferences = new QAction(mainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionStart = new QAction(mainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Play1Normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon2);
        actionPause = new QAction(mainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PauseNormalRed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionPause_on_match = new QAction(mainWindow);
        actionPause_on_match->setObjectName(QStringLiteral("actionPause_on_match"));
        actionPause_on_match->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PauseOnLoop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause_on_match->setIcon(icon4);
        actionStop = new QAction(mainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/Stop1NormalYellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon5);
        actionDump_the_memory = new QAction(mainWindow);
        actionDump_the_memory->setObjectName(QStringLiteral("actionDump_the_memory"));
        actionPause_when_a_loop_hypothesis_is_rejected = new QAction(mainWindow);
        actionPause_when_a_loop_hypothesis_is_rejected->setObjectName(QStringLiteral("actionPause_when_a_loop_hypothesis_is_rejected"));
        actionPause_when_a_loop_hypothesis_is_rejected->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/PauseLoopRejected.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause_when_a_loop_hypothesis_is_rejected->setIcon(icon6);
        actionClear_cache = new QAction(mainWindow);
        actionClear_cache->setObjectName(QStringLiteral("actionClear_cache"));
        actionAuto_screen_capture = new QAction(mainWindow);
        actionAuto_screen_capture->setObjectName(QStringLiteral("actionAuto_screen_capture"));
        actionAuto_screen_capture->setCheckable(true);
        actionDump_the_prediction_matrix = new QAction(mainWindow);
        actionDump_the_prediction_matrix->setObjectName(QStringLiteral("actionDump_the_prediction_matrix"));
        actionGenerate_map = new QAction(mainWindow);
        actionGenerate_map->setObjectName(QStringLiteral("actionGenerate_map"));
        actionDelete_memory = new QAction(mainWindow);
        actionDelete_memory->setObjectName(QStringLiteral("actionDelete_memory"));
        actionOpen_working_directory = new QAction(mainWindow);
        actionOpen_working_directory->setObjectName(QStringLiteral("actionOpen_working_directory"));
        action16_9 = new QAction(mainWindow);
        action16_9->setObjectName(QStringLiteral("action16_9"));
        action16_10 = new QAction(mainWindow);
        action16_10->setObjectName(QStringLiteral("action16_10"));
        action4_3 = new QAction(mainWindow);
        action4_3->setObjectName(QStringLiteral("action4_3"));
        action360p = new QAction(mainWindow);
        action360p->setObjectName(QStringLiteral("action360p"));
        action480p = new QAction(mainWindow);
        action480p->setObjectName(QStringLiteral("action480p"));
        action720p = new QAction(mainWindow);
        action720p->setObjectName(QStringLiteral("action720p"));
        action1080p = new QAction(mainWindow);
        action1080p->setObjectName(QStringLiteral("action1080p"));
        action240p = new QAction(mainWindow);
        action240p->setObjectName(QStringLiteral("action240p"));
        actionUsbCamera = new QAction(mainWindow);
        actionUsbCamera->setObjectName(QStringLiteral("actionUsbCamera"));
        actionUsbCamera->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/webcam.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsbCamera->setIcon(icon7);
        actionPrint_loop_closure_IDs_to_console = new QAction(mainWindow);
        actionPrint_loop_closure_IDs_to_console->setObjectName(QStringLiteral("actionPrint_loop_closure_IDs_to_console"));
        actionSave_point_cloud = new QAction(mainWindow);
        actionSave_point_cloud->setObjectName(QStringLiteral("actionSave_point_cloud"));
        actionDownload_all_clouds = new QAction(mainWindow);
        actionDownload_all_clouds->setObjectName(QStringLiteral("actionDownload_all_clouds"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDownload_all_clouds->setIcon(icon8);
        actionPause_on_local_loop_detection = new QAction(mainWindow);
        actionPause_on_local_loop_detection->setObjectName(QStringLiteral("actionPause_on_local_loop_detection"));
        actionPause_on_local_loop_detection->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/PauseOnLocalLoop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause_on_local_loop_detection->setIcon(icon9);
        actionSLAM_mode = new QAction(mainWindow);
        actionSLAM_mode->setObjectName(QStringLiteral("actionSLAM_mode"));
        actionSLAM_mode->setCheckable(true);
        actionLocalization_mode = new QAction(mainWindow);
        actionLocalization_mode->setObjectName(QStringLiteral("actionLocalization_mode"));
        actionLocalization_mode->setCheckable(true);
        actionReset_Odometry = new QAction(mainWindow);
        actionReset_Odometry->setObjectName(QStringLiteral("actionReset_Odometry"));
        actionView_high_res_point_cloud = new QAction(mainWindow);
        actionView_high_res_point_cloud->setObjectName(QStringLiteral("actionView_high_res_point_cloud"));
        actionTrigger_a_new_map = new QAction(mainWindow);
        actionTrigger_a_new_map->setObjectName(QStringLiteral("actionTrigger_a_new_map"));
        actionDownload_graph = new QAction(mainWindow);
        actionDownload_graph->setObjectName(QStringLiteral("actionDownload_graph"));
        actionScreenshot = new QAction(mainWindow);
        actionScreenshot->setObjectName(QStringLiteral("actionScreenshot"));
        actionOpenNI_PCL = new QAction(mainWindow);
        actionOpenNI_PCL->setObjectName(QStringLiteral("actionOpenNI_PCL"));
        actionOpenNI_PCL->setCheckable(true);
        actionFreenect = new QAction(mainWindow);
        actionFreenect->setObjectName(QStringLiteral("actionFreenect"));
        actionFreenect->setCheckable(true);
        actionOpenNI_CV = new QAction(mainWindow);
        actionOpenNI_CV->setObjectName(QStringLiteral("actionOpenNI_CV"));
        actionOpenNI_CV->setCheckable(true);
        actionOpenNI_CV_ASUS = new QAction(mainWindow);
        actionOpenNI_CV_ASUS->setObjectName(QStringLiteral("actionOpenNI_CV_ASUS"));
        actionOpenNI_CV_ASUS->setCheckable(true);
        actionOpenNI2 = new QAction(mainWindow);
        actionOpenNI2->setObjectName(QStringLiteral("actionOpenNI2"));
        actionOpenNI2->setCheckable(true);
        actionOpenNI_PCL_ASUS = new QAction(mainWindow);
        actionOpenNI_PCL_ASUS->setObjectName(QStringLiteral("actionOpenNI_PCL_ASUS"));
        actionOpenNI_PCL_ASUS->setCheckable(true);
        actionData_recorder = new QAction(mainWindow);
        actionData_recorder->setObjectName(QStringLiteral("actionData_recorder"));
        actionExport_2D_Grid_map_bmp_png = new QAction(mainWindow);
        actionExport_2D_Grid_map_bmp_png->setObjectName(QStringLiteral("actionExport_2D_Grid_map_bmp_png"));
        actionExport_2D_scans_ply_pcd = new QAction(mainWindow);
        actionExport_2D_scans_ply_pcd->setObjectName(QStringLiteral("actionExport_2D_scans_ply_pcd"));
        actionView_scans = new QAction(mainWindow);
        actionView_scans->setObjectName(QStringLiteral("actionView_scans"));
        actionOpen_database = new QAction(mainWindow);
        actionOpen_database->setObjectName(QStringLiteral("actionOpen_database"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_database->setIcon(icon10);
        actionNew_database = new QAction(mainWindow);
        actionNew_database->setObjectName(QStringLiteral("actionNew_database"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_database->setIcon(icon11);
        actionClose_database = new QAction(mainWindow);
        actionClose_database->setObjectName(QStringLiteral("actionClose_database"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_database->setIcon(icon12);
        actionEdit_database = new QAction(mainWindow);
        actionEdit_database->setObjectName(QStringLiteral("actionEdit_database"));
        actionPost_processing = new QAction(mainWindow);
        actionPost_processing->setObjectName(QStringLiteral("actionPost_processing"));
        actionSave_GUI_config = new QAction(mainWindow);
        actionSave_GUI_config->setObjectName(QStringLiteral("actionSave_GUI_config"));
        actionFreenect2 = new QAction(mainWindow);
        actionFreenect2->setObjectName(QStringLiteral("actionFreenect2"));
        actionFreenect2->setCheckable(true);
        actionStereoDC1394 = new QAction(mainWindow);
        actionStereoDC1394->setObjectName(QStringLiteral("actionStereoDC1394"));
        actionStereoDC1394->setCheckable(true);
        actionOpenNI2_kinect = new QAction(mainWindow);
        actionOpenNI2_kinect->setObjectName(QStringLiteral("actionOpenNI2_kinect"));
        actionOpenNI2_kinect->setCheckable(true);
        actionOpenNI2_sense = new QAction(mainWindow);
        actionOpenNI2_sense->setObjectName(QStringLiteral("actionOpenNI2_sense"));
        actionOpenNI2_sense->setCheckable(true);
        actionStereoFlyCapture2 = new QAction(mainWindow);
        actionStereoFlyCapture2->setObjectName(QStringLiteral("actionStereoFlyCapture2"));
        actionStereoFlyCapture2->setCheckable(true);
        actionSend_goal = new QAction(mainWindow);
        actionSend_goal->setObjectName(QStringLiteral("actionSend_goal"));
        actionCancel_goal = new QAction(mainWindow);
        actionCancel_goal->setObjectName(QStringLiteral("actionCancel_goal"));
        actionDefault_views = new QAction(mainWindow);
        actionDefault_views->setObjectName(QStringLiteral("actionDefault_views"));
        actionMore_options = new QAction(mainWindow);
        actionMore_options->setObjectName(QStringLiteral("actionMore_options"));
        actionMore_options->setCheckable(true);
        actionLabel_current_location = new QAction(mainWindow);
        actionLabel_current_location->setObjectName(QStringLiteral("actionLabel_current_location"));
        actionKITTI_format_txt = new QAction(mainWindow);
        actionKITTI_format_txt->setObjectName(QStringLiteral("actionKITTI_format_txt"));
        actionRGBD_SLAM_format_txt = new QAction(mainWindow);
        actionRGBD_SLAM_format_txt->setObjectName(QStringLiteral("actionRGBD_SLAM_format_txt"));
        actionTORO_graph = new QAction(mainWindow);
        actionTORO_graph->setObjectName(QStringLiteral("actionTORO_graph"));
        actionExport_cameras_in_Bundle_format_out = new QAction(mainWindow);
        actionExport_cameras_in_Bundle_format_out->setObjectName(QStringLiteral("actionExport_cameras_in_Bundle_format_out"));
        actionRaw_format_txt = new QAction(mainWindow);
        actionRaw_format_txt->setObjectName(QStringLiteral("actionRaw_format_txt"));
        actionG2o_g2o = new QAction(mainWindow);
        actionG2o_g2o->setObjectName(QStringLiteral("actionG2o_g2o"));
        actionCustom = new QAction(mainWindow);
        actionCustom->setObjectName(QStringLiteral("actionCustom"));
        actionSend_waypoints = new QAction(mainWindow);
        actionSend_waypoints->setObjectName(QStringLiteral("actionSend_waypoints"));
        actionUpdate_cache_from_database = new QAction(mainWindow);
        actionUpdate_cache_from_database->setObjectName(QStringLiteral("actionUpdate_cache_from_database"));
        actionExport_images_RGB_jpg_Depth_png = new QAction(mainWindow);
        actionExport_images_RGB_jpg_Depth_png->setObjectName(QStringLiteral("actionExport_images_RGB_jpg_Depth_png"));
        actionAnchor_clouds_to_ground_truth = new QAction(mainWindow);
        actionAnchor_clouds_to_ground_truth->setObjectName(QStringLiteral("actionAnchor_clouds_to_ground_truth"));
        actionAnchor_clouds_to_ground_truth->setCheckable(true);
        actionStereoZed = new QAction(mainWindow);
        actionStereoZed->setObjectName(QStringLiteral("actionStereoZed"));
        actionStereoZed->setCheckable(true);
        actionStereoUsb = new QAction(mainWindow);
        actionStereoUsb->setObjectName(QStringLiteral("actionStereoUsb"));
        actionStereoUsb->setCheckable(true);
        actionExport_octomap = new QAction(mainWindow);
        actionExport_octomap->setObjectName(QStringLiteral("actionExport_octomap"));
        actionRealSense = new QAction(mainWindow);
        actionRealSense->setObjectName(QStringLiteral("actionRealSense"));
        actionRealSense->setCheckable(true);
        actionDepth_Calibration = new QAction(mainWindow);
        actionDepth_Calibration->setObjectName(QStringLiteral("actionDepth_Calibration"));
        widget_mainWindow = new QWidget(mainWindow);
        widget_mainWindow->setObjectName(QStringLiteral("widget_mainWindow"));
        mainWindow->setCentralWidget(widget_mainWindow);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuExport_poses = new QMenu(menuFile);
        menuExport_poses->setObjectName(QStringLiteral("menuExport_poses"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAdvanced = new QMenu(menuEdit);
        menuAdvanced->setObjectName(QStringLiteral("menuAdvanced"));
        menu6 = new QMenu(menubar);
        menu6->setObjectName(QStringLiteral("menu6"));
        menuProcess = new QMenu(menubar);
        menuProcess->setObjectName(QStringLiteral("menuProcess"));
        menuSelect_source = new QMenu(menuProcess);
        menuSelect_source->setObjectName(QStringLiteral("menuSelect_source"));
        menuImage = new QMenu(menuSelect_source);
        menuImage->setObjectName(QStringLiteral("menuImage"));
        menuImage->setIcon(icon7);
        menuRGB_D_camera = new QMenu(menuSelect_source);
        menuRGB_D_camera->setObjectName(QStringLiteral("menuRGB_D_camera"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/kinect_xbox_360.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRGB_D_camera->setIcon(icon13);
        menuKinect_for_Xbox_360 = new QMenu(menuRGB_D_camera);
        menuKinect_for_Xbox_360->setObjectName(QStringLiteral("menuKinect_for_Xbox_360"));
        menuKinect_for_Xbox_360->setIcon(icon13);
        menuXtion_PRO_LIVE = new QMenu(menuRGB_D_camera);
        menuXtion_PRO_LIVE->setObjectName(QStringLiteral("menuXtion_PRO_LIVE"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/xtion_pro_live.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuXtion_PRO_LIVE->setIcon(icon14);
        menuSense_3D_scanner = new QMenu(menuRGB_D_camera);
        menuSense_3D_scanner->setObjectName(QStringLiteral("menuSense_3D_scanner"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/sense.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuSense_3D_scanner->setIcon(icon15);
        menuKinect_v2 = new QMenu(menuRGB_D_camera);
        menuKinect_v2->setObjectName(QStringLiteral("menuKinect_v2"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/kinect_xbox_one.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuKinect_v2->setIcon(icon16);
        menuRealSense_R200 = new QMenu(menuRGB_D_camera);
        menuRealSense_R200->setObjectName(QStringLiteral("menuRealSense_R200"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/r200.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_R200->setIcon(icon17);
        menuStereo_camera = new QMenu(menuSelect_source);
        menuStereo_camera->setObjectName(QStringLiteral("menuStereo_camera"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/bumblebee2.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuStereo_camera->setIcon(icon18);
        menuBumblebee2_2 = new QMenu(menuStereo_camera);
        menuBumblebee2_2->setObjectName(QStringLiteral("menuBumblebee2_2"));
        menuBumblebee2_2->setIcon(icon18);
        menuZed_camera = new QMenu(menuStereo_camera);
        menuZed_camera->setObjectName(QStringLiteral("menuZed_camera"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/zed.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuZed_camera->setIcon(icon19);
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuShow_view = new QMenu(menuWindow);
        menuShow_view->setObjectName(QStringLiteral("menuShow_view"));
        menuAspect_ratio_2 = new QMenu(menuWindow);
        menuAspect_ratio_2->setObjectName(QStringLiteral("menuAspect_ratio_2"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainWindow->setStatusBar(statusbar);
        dockWidget_posterior = new QDockWidget(mainWindow);
        dockWidget_posterior->setObjectName(QStringLiteral("dockWidget_posterior"));
        dockWidget_posterior->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        posteriorPlot = new UPlot(dockWidgetContents);
        posteriorPlot->setObjectName(QStringLiteral("posteriorPlot"));

        horizontalLayout->addWidget(posteriorPlot);

        dockWidget_posterior->setWidget(dockWidgetContents);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_posterior);
        toolBar = new QToolBar(mainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget_statsV2 = new QDockWidget(mainWindow);
        dockWidget_statsV2->setObjectName(QStringLiteral("dockWidget_statsV2"));
        dockWidget_statsV2->setFloating(true);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        verticalLayout_8 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setVerticalSpacing(2);
        doubleSpinBox_stats_timeLimit = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_stats_timeLimit->setObjectName(QStringLiteral("doubleSpinBox_stats_timeLimit"));
        doubleSpinBox_stats_timeLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stats_timeLimit->setDecimals(0);
        doubleSpinBox_stats_timeLimit->setMaximum(99999);
        doubleSpinBox_stats_timeLimit->setSingleStep(50);
        doubleSpinBox_stats_timeLimit->setValue(450);

        gridLayout->addWidget(doubleSpinBox_stats_timeLimit, 3, 1, 1, 1);

        label_source = new QLabel(dockWidgetContents_3);
        label_source->setObjectName(QStringLiteral("label_source"));

        gridLayout->addWidget(label_source, 0, 0, 1, 1);

        label_stats_source = new QLabel(dockWidgetContents_3);
        label_stats_source->setObjectName(QStringLiteral("label_stats_source"));
        label_stats_source->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_source, 0, 1, 1, 1);

        doubleSpinBox_stats_imgRate = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_stats_imgRate->setObjectName(QStringLiteral("doubleSpinBox_stats_imgRate"));
        doubleSpinBox_stats_imgRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stats_imgRate->setDecimals(1);
        doubleSpinBox_stats_imgRate->setMaximum(100);
        doubleSpinBox_stats_imgRate->setSingleStep(0.1);
        doubleSpinBox_stats_imgRate->setValue(2);

        gridLayout->addWidget(doubleSpinBox_stats_imgRate, 1, 1, 1, 1);

        label_45 = new QLabel(dockWidgetContents_3);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setWordWrap(true);

        gridLayout->addWidget(label_45, 4, 0, 1, 1);

        label_elapsedTime = new QLabel(dockWidgetContents_3);
        label_elapsedTime->setObjectName(QStringLiteral("label_elapsedTime"));
        label_elapsedTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_elapsedTime, 4, 1, 1, 1);

        label_20 = new QLabel(dockWidgetContents_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout->addWidget(label_20, 5, 0, 1, 1);

        label_stats_imageNumber = new QLabel(dockWidgetContents_3);
        label_stats_imageNumber->setObjectName(QStringLiteral("label_stats_imageNumber"));
        label_stats_imageNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_imageNumber, 5, 1, 1, 1);

        label_12 = new QLabel(dockWidgetContents_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        label_stats_loopClosuresDetected = new QLabel(dockWidgetContents_3);
        label_stats_loopClosuresDetected->setObjectName(QStringLiteral("label_stats_loopClosuresDetected"));
        label_stats_loopClosuresDetected->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_loopClosuresDetected, 6, 1, 1, 1);

        label_38 = new QLabel(dockWidgetContents_3);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout->addWidget(label_38, 7, 0, 1, 1);

        label_stats_loopClosuresReactivatedDetected = new QLabel(dockWidgetContents_3);
        label_stats_loopClosuresReactivatedDetected->setObjectName(QStringLiteral("label_stats_loopClosuresReactivatedDetected"));
        label_stats_loopClosuresReactivatedDetected->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_loopClosuresReactivatedDetected, 7, 1, 1, 1);

        label_15 = new QLabel(dockWidgetContents_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 8, 0, 1, 1);

        label_stats_loopClosuresRejected = new QLabel(dockWidgetContents_3);
        label_stats_loopClosuresRejected->setObjectName(QStringLiteral("label_stats_loopClosuresRejected"));
        label_stats_loopClosuresRejected->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_loopClosuresRejected, 8, 1, 1, 1);

        doubleSpinBox_stats_imgRate_label = new QLabel(dockWidgetContents_3);
        doubleSpinBox_stats_imgRate_label->setObjectName(QStringLiteral("doubleSpinBox_stats_imgRate_label"));

        gridLayout->addWidget(doubleSpinBox_stats_imgRate_label, 1, 0, 1, 1);

        label_timeLimit = new QLabel(dockWidgetContents_3);
        label_timeLimit->setObjectName(QStringLiteral("label_timeLimit"));
        label_timeLimit->setWordWrap(true);

        gridLayout->addWidget(label_timeLimit, 3, 0, 1, 1);

        doubleSpinBox_stats_detectionRate = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_stats_detectionRate->setObjectName(QStringLiteral("doubleSpinBox_stats_detectionRate"));
        doubleSpinBox_stats_detectionRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stats_detectionRate->setDecimals(1);
        doubleSpinBox_stats_detectionRate->setMaximum(100);
        doubleSpinBox_stats_detectionRate->setSingleStep(0.1);
        doubleSpinBox_stats_detectionRate->setValue(2);

        gridLayout->addWidget(doubleSpinBox_stats_detectionRate, 2, 1, 1, 1);

        doubleSpinBox_stats_imgRate_label_2 = new QLabel(dockWidgetContents_3);
        doubleSpinBox_stats_imgRate_label_2->setObjectName(QStringLiteral("doubleSpinBox_stats_imgRate_label_2"));

        gridLayout->addWidget(doubleSpinBox_stats_imgRate_label_2, 2, 0, 1, 1);

        gridLayout->setColumnStretch(0, 10);

        verticalLayout_8->addLayout(gridLayout);

        statsToolBox = new rtabmap::StatsToolBox(dockWidgetContents_3);
        statsToolBox->setObjectName(QStringLiteral("statsToolBox"));

        verticalLayout_8->addWidget(statsToolBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        dockWidget_statsV2->setWidget(dockWidgetContents_3);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_statsV2);
        dockWidget_likelihood = new QDockWidget(mainWindow);
        dockWidget_likelihood->setObjectName(QStringLiteral("dockWidget_likelihood"));
        dockWidget_likelihood->setFloating(false);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        likelihoodPlot = new UPlot(dockWidgetContents_4);
        likelihoodPlot->setObjectName(QStringLiteral("likelihoodPlot"));

        verticalLayout_6->addWidget(likelihoodPlot);

        dockWidget_likelihood->setWidget(dockWidgetContents_4);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_likelihood);
        dockWidget_console = new QDockWidget(mainWindow);
        dockWidget_console->setObjectName(QStringLiteral("dockWidget_console"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_console = new rtabmap::ConsoleWidget(dockWidgetContents_2);
        widget_console->setObjectName(QStringLiteral("widget_console"));

        verticalLayout_5->addWidget(widget_console);

        dockWidget_console->setWidget(dockWidgetContents_2);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_console);
        dockWidget_rawlikelihood = new QDockWidget(mainWindow);
        dockWidget_rawlikelihood->setObjectName(QStringLiteral("dockWidget_rawlikelihood"));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        rawLikelihoodPlot = new UPlot(dockWidgetContents_6);
        rawLikelihoodPlot->setObjectName(QStringLiteral("rawLikelihoodPlot"));

        verticalLayout_4->addWidget(rawLikelihoodPlot);

        dockWidget_rawlikelihood->setWidget(dockWidgetContents_6);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_rawlikelihood);
        dockWidget_cloudViewer = new QDockWidget(mainWindow);
        dockWidget_cloudViewer->setObjectName(QStringLiteral("dockWidget_cloudViewer"));
        layout_cloudViewer = new QWidget();
        layout_cloudViewer->setObjectName(QStringLiteral("layout_cloudViewer"));
        verticalLayout_3 = new QVBoxLayout(layout_cloudViewer);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        dockWidget_cloudViewer->setWidget(layout_cloudViewer);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_cloudViewer);
        dockWidget_loopClosureViewer = new QDockWidget(mainWindow);
        dockWidget_loopClosureViewer->setObjectName(QStringLiteral("dockWidget_loopClosureViewer"));
        layout_loopClosureViewer = new QWidget();
        layout_loopClosureViewer->setObjectName(QStringLiteral("layout_loopClosureViewer"));
        verticalLayout_7 = new QVBoxLayout(layout_loopClosureViewer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        dockWidget_loopClosureViewer->setWidget(layout_loopClosureViewer);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_loopClosureViewer);
        dockWidget_mapVisibility = new QDockWidget(mainWindow);
        dockWidget_mapVisibility->setObjectName(QStringLiteral("dockWidget_mapVisibility"));
        dockWidget_mapVisibility->setFloating(true);
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
        verticalLayout_9 = new QVBoxLayout(dockWidgetContents_8);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        widget_mapVisibility = new rtabmap::MapVisibilityWidget(dockWidgetContents_8);
        widget_mapVisibility->setObjectName(QStringLiteral("widget_mapVisibility"));

        verticalLayout_9->addWidget(widget_mapVisibility);

        dockWidget_mapVisibility->setWidget(dockWidgetContents_8);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_mapVisibility);
        dockWidget_graphViewer = new QDockWidget(mainWindow);
        dockWidget_graphViewer->setObjectName(QStringLiteral("dockWidget_graphViewer"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        verticalLayout_10 = new QVBoxLayout(dockWidgetContents_9);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        graphicsView_graphView = new rtabmap::GraphViewer(dockWidgetContents_9);
        graphicsView_graphView->setObjectName(QStringLiteral("graphicsView_graphView"));

        verticalLayout_10->addWidget(graphicsView_graphView);

        dockWidget_graphViewer->setWidget(dockWidgetContents_9);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_graphViewer);
        dockWidget_imageView = new QDockWidget(mainWindow);
        dockWidget_imageView->setObjectName(QStringLiteral("dockWidget_imageView"));
        dockWidget_imageView->setAllowedAreas(Qt::AllDockWidgetAreas);
        layout_imageview = new QWidget();
        layout_imageview->setObjectName(QStringLiteral("layout_imageview"));
        horizontalLayout_2 = new QHBoxLayout(layout_imageview);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_refId = new QLabel(layout_imageview);
        label_refId->setObjectName(QStringLiteral("label_refId"));
        label_refId->setMinimumSize(QSize(0, 18));
        label_refId->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_refId);

        imageView_source = new rtabmap::ImageView(layout_imageview);
        imageView_source->setObjectName(QStringLiteral("imageView_source"));

        verticalLayout_2->addWidget(imageView_source);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_matchId = new QLabel(layout_imageview);
        label_matchId->setObjectName(QStringLiteral("label_matchId"));
        label_matchId->setMinimumSize(QSize(0, 18));
        label_matchId->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_matchId);

        imageView_loopClosure = new rtabmap::ImageView(layout_imageview);
        imageView_loopClosure->setObjectName(QStringLiteral("imageView_loopClosure"));

        verticalLayout->addWidget(imageView_loopClosure);

        verticalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        dockWidget_imageView->setWidget(layout_imageview);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_imageView);
        dockWidget_odometry = new QDockWidget(mainWindow);
        dockWidget_odometry->setObjectName(QStringLiteral("dockWidget_odometry"));
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QStringLiteral("dockWidgetContents_10"));
        verticalLayout_11 = new QVBoxLayout(dockWidgetContents_10);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        imageView_odometry = new rtabmap::ImageView(dockWidgetContents_10);
        imageView_odometry->setObjectName(QStringLiteral("imageView_odometry"));

        verticalLayout_11->addWidget(imageView_odometry);

        dockWidget_odometry->setWidget(dockWidgetContents_10);
        mainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_odometry);
        toolBar_2 = new QToolBar(mainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuProcess->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menu6->menuAction());
        menuFile->addAction(actionNew_database);
        menuFile->addAction(actionOpen_database);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_GUI_config);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_point_cloud);
        menuFile->addAction(actionExport_2D_scans_ply_pcd);
        menuFile->addAction(actionExport_2D_Grid_map_bmp_png);
        menuFile->addAction(actionExport_octomap);
        menuFile->addAction(menuExport_poses->menuAction());
        menuFile->addAction(actionExport_images_RGB_jpg_Depth_png);
        menuFile->addAction(actionExport_cameras_in_Bundle_format_out);
        menuFile->addAction(actionDepth_Calibration);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_database);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport_poses->addAction(actionRaw_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_format_txt);
        menuExport_poses->addAction(actionKITTI_format_txt);
        menuExport_poses->addAction(actionTORO_graph);
        menuExport_poses->addAction(actionG2o_g2o);
        menuEdit->addAction(actionDownload_all_clouds);
        menuEdit->addAction(actionDownload_graph);
        menuEdit->addAction(actionUpdate_cache_from_database);
        menuEdit->addAction(actionAnchor_clouds_to_ground_truth);
        menuEdit->addAction(actionClear_cache);
        menuEdit->addSeparator();
        menuEdit->addAction(actionView_high_res_point_cloud);
        menuEdit->addAction(actionView_scans);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete_memory);
        menuEdit->addSeparator();
        menuEdit->addAction(menuAdvanced->menuAction());
        menuAdvanced->addAction(actionOpen_working_directory);
        menuAdvanced->addAction(actionDump_the_memory);
        menuAdvanced->addAction(actionDump_the_prediction_matrix);
        menuAdvanced->addAction(actionGenerate_map);
        menuAdvanced->addAction(actionPrint_loop_closure_IDs_to_console);
        menu6->addAction(actionHelp);
        menu6->addSeparator();
        menu6->addAction(actionAbout);
        menuProcess->addAction(menuSelect_source->menuAction());
        menuProcess->addSeparator();
        menuProcess->addAction(actionStart);
        menuProcess->addAction(actionPause);
        menuProcess->addAction(actionStop);
        menuProcess->addSeparator();
        menuProcess->addAction(actionPause_on_match);
        menuProcess->addAction(actionPause_when_a_loop_hypothesis_is_rejected);
        menuProcess->addAction(actionPause_on_local_loop_detection);
        menuProcess->addSeparator();
        menuProcess->addAction(actionSLAM_mode);
        menuProcess->addAction(actionLocalization_mode);
        menuProcess->addSeparator();
        menuProcess->addAction(actionReset_Odometry);
        menuProcess->addAction(actionTrigger_a_new_map);
        menuProcess->addSeparator();
        menuProcess->addAction(actionLabel_current_location);
        menuProcess->addAction(actionSend_waypoints);
        menuProcess->addAction(actionSend_goal);
        menuProcess->addAction(actionCancel_goal);
        menuSelect_source->addAction(menuRGB_D_camera->menuAction());
        menuSelect_source->addAction(menuStereo_camera->menuAction());
        menuSelect_source->addAction(menuImage->menuAction());
        menuSelect_source->addAction(actionMore_options);
        menuImage->addAction(actionUsbCamera);
        menuRGB_D_camera->addAction(menuKinect_for_Xbox_360->menuAction());
        menuRGB_D_camera->addAction(menuXtion_PRO_LIVE->menuAction());
        menuRGB_D_camera->addAction(menuSense_3D_scanner->menuAction());
        menuRGB_D_camera->addAction(menuKinect_v2->menuAction());
        menuRGB_D_camera->addAction(menuRealSense_R200->menuAction());
        menuKinect_for_Xbox_360->addAction(actionFreenect);
        menuKinect_for_Xbox_360->addAction(actionOpenNI2_kinect);
        menuKinect_for_Xbox_360->addAction(actionOpenNI_PCL);
        menuKinect_for_Xbox_360->addAction(actionOpenNI_CV);
        menuXtion_PRO_LIVE->addAction(actionOpenNI2);
        menuXtion_PRO_LIVE->addAction(actionOpenNI_PCL_ASUS);
        menuXtion_PRO_LIVE->addAction(actionOpenNI_CV_ASUS);
        menuSense_3D_scanner->addAction(actionOpenNI2_sense);
        menuKinect_v2->addAction(actionFreenect2);
        menuRealSense_R200->addAction(actionRealSense);
        menuStereo_camera->addAction(menuBumblebee2_2->menuAction());
        menuStereo_camera->addAction(menuZed_camera->menuAction());
        menuBumblebee2_2->addAction(actionStereoDC1394);
        menuBumblebee2_2->addAction(actionStereoFlyCapture2);
        menuZed_camera->addAction(actionStereoZed);
        menuZed_camera->addAction(actionStereoUsb);
        menuWindow->addAction(menuShow_view->menuAction());
        menuWindow->addAction(actionDefault_views);
        menuWindow->addAction(actionScreenshot);
        menuWindow->addAction(actionAuto_screen_capture);
        menuWindow->addAction(menuAspect_ratio_2->menuAction());
        menuWindow->addSeparator();
        menuWindow->addAction(actionPreferences);
        menuShow_view->addSeparator();
        menuAspect_ratio_2->addAction(action16_9);
        menuAspect_ratio_2->addAction(action16_10);
        menuAspect_ratio_2->addAction(action4_3);
        menuAspect_ratio_2->addSeparator();
        menuAspect_ratio_2->addAction(action1080p);
        menuAspect_ratio_2->addAction(action720p);
        menuAspect_ratio_2->addAction(action480p);
        menuAspect_ratio_2->addAction(action360p);
        menuAspect_ratio_2->addAction(action240p);
        menuAspect_ratio_2->addSeparator();
        menuAspect_ratio_2->addAction(actionCustom);
        menuTools->addAction(actionEdit_database);
        menuTools->addSeparator();
        menuTools->addAction(actionData_recorder);
        menuTools->addSeparator();
        menuTools->addAction(actionPost_processing);
        toolBar->addAction(actionClose_database);
        toolBar->addAction(actionNew_database);
        toolBar->addAction(actionOpen_database);
        toolBar_2->addAction(actionDownload_all_clouds);
        toolBar_2->addAction(actionStart);
        toolBar_2->addAction(actionPause);
        toolBar_2->addAction(actionStop);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "RTAB-Map : Real-Time Appearance-Based Mapping", 0));
        actionExit->setText(QApplication::translate("mainWindow", "Exit", 0));
        actionHelp->setText(QApplication::translate("mainWindow", "Help", 0));
        actionAbout->setText(QApplication::translate("mainWindow", "About...", 0));
        actionPreferences->setText(QApplication::translate("mainWindow", "Preferences...", 0));
        actionStart->setText(QApplication::translate("mainWindow", "Start", 0));
        actionPause->setText(QApplication::translate("mainWindow", "Pause", 0));
#ifndef QT_NO_TOOLTIP
        actionPause->setToolTip(QApplication::translate("mainWindow", "Pause", 0));
#endif // QT_NO_TOOLTIP
        actionPause_on_match->setText(QApplication::translate("mainWindow", "Pause on loop closure detection", 0));
        actionStop->setText(QApplication::translate("mainWindow", "Stop", 0));
        actionDump_the_memory->setText(QApplication::translate("mainWindow", "Dump the memory", 0));
        actionPause_when_a_loop_hypothesis_is_rejected->setText(QApplication::translate("mainWindow", "Pause on loop closure rejection", 0));
        actionClear_cache->setText(QApplication::translate("mainWindow", "Clear the cache", 0));
        actionAuto_screen_capture->setText(QApplication::translate("mainWindow", "Auto screen capture...", 0));
        actionDump_the_prediction_matrix->setText(QApplication::translate("mainWindow", "Dump the prediction matrix", 0));
        actionGenerate_map->setText(QApplication::translate("mainWindow", "Generate graph (*.dot)...", 0));
        actionDelete_memory->setText(QApplication::translate("mainWindow", "Delete memory", 0));
        actionOpen_working_directory->setText(QApplication::translate("mainWindow", "Show working directory in file browser", 0));
        action16_9->setText(QApplication::translate("mainWindow", "16:9", 0));
        action16_10->setText(QApplication::translate("mainWindow", "16:10", 0));
        action4_3->setText(QApplication::translate("mainWindow", "4:3", 0));
        action360p->setText(QApplication::translate("mainWindow", "360p", 0));
        action480p->setText(QApplication::translate("mainWindow", "480p", 0));
        action720p->setText(QApplication::translate("mainWindow", "720p", 0));
        action1080p->setText(QApplication::translate("mainWindow", "1080p", 0));
        action240p->setText(QApplication::translate("mainWindow", "240p", 0));
        actionUsbCamera->setText(QApplication::translate("mainWindow", "Usb camera", 0));
        actionPrint_loop_closure_IDs_to_console->setText(QApplication::translate("mainWindow", "Print loop closure IDs to console", 0));
        actionSave_point_cloud->setText(QApplication::translate("mainWindow", "Export 3D clouds (*.ply *.pcd *.obj)...", 0));
        actionDownload_all_clouds->setText(QApplication::translate("mainWindow", "Download all clouds (update cache)", 0));
        actionPause_on_local_loop_detection->setText(QApplication::translate("mainWindow", "Pause on local loop closure detection", 0));
        actionSLAM_mode->setText(QApplication::translate("mainWindow", "Mapping", 0));
#ifndef QT_NO_TOOLTIP
        actionSLAM_mode->setToolTip(QApplication::translate("mainWindow", "Simultaneous Localization And Mapping (SLAM)", 0));
#endif // QT_NO_TOOLTIP
        actionLocalization_mode->setText(QApplication::translate("mainWindow", "Localization", 0));
        actionReset_Odometry->setText(QApplication::translate("mainWindow", "Reset Odometry", 0));
        actionView_high_res_point_cloud->setText(QApplication::translate("mainWindow", "View high-res point clouds...", 0));
        actionTrigger_a_new_map->setText(QApplication::translate("mainWindow", "Trigger a new map", 0));
        actionDownload_graph->setText(QApplication::translate("mainWindow", "Download graph only", 0));
        actionScreenshot->setText(QApplication::translate("mainWindow", "Take a screenshot", 0));
        actionOpenNI_PCL->setText(QApplication::translate("mainWindow", "OpenNI-PCL", 0));
        actionFreenect->setText(QApplication::translate("mainWindow", "Freenect", 0));
        actionOpenNI_CV->setText(QApplication::translate("mainWindow", "OpenNI-CV", 0));
        actionOpenNI_CV_ASUS->setText(QApplication::translate("mainWindow", "OpenNI-CV-ASUS", 0));
        actionOpenNI2->setText(QApplication::translate("mainWindow", "OpenNI2", 0));
        actionOpenNI_PCL_ASUS->setText(QApplication::translate("mainWindow", "OpenNI-PCL", 0));
        actionData_recorder->setText(QApplication::translate("mainWindow", "Data recorder...", 0));
        actionExport_2D_Grid_map_bmp_png->setText(QApplication::translate("mainWindow", "Export 2D grid map (*.png *.bmp)...", 0));
        actionExport_2D_scans_ply_pcd->setText(QApplication::translate("mainWindow", "Export 2D scans (*.ply *.pcd)...", 0));
        actionView_scans->setText(QApplication::translate("mainWindow", "View scans...", 0));
        actionOpen_database->setText(QApplication::translate("mainWindow", "Open database...", 0));
        actionNew_database->setText(QApplication::translate("mainWindow", "New database...", 0));
        actionClose_database->setText(QApplication::translate("mainWindow", "Close database", 0));
        actionEdit_database->setText(QApplication::translate("mainWindow", "Edit database...", 0));
        actionPost_processing->setText(QApplication::translate("mainWindow", "Post-processing...", 0));
        actionSave_GUI_config->setText(QApplication::translate("mainWindow", "Save config", 0));
        actionFreenect2->setText(QApplication::translate("mainWindow", "Freenect2", 0));
        actionStereoDC1394->setText(QApplication::translate("mainWindow", "StereoDC1394", 0));
        actionOpenNI2_kinect->setText(QApplication::translate("mainWindow", "OpenNI2", 0));
        actionOpenNI2_sense->setText(QApplication::translate("mainWindow", "OpenNI2", 0));
        actionStereoFlyCapture2->setText(QApplication::translate("mainWindow", "FlyCapture2", 0));
        actionSend_goal->setText(QApplication::translate("mainWindow", "Send a goal...", 0));
        actionCancel_goal->setText(QApplication::translate("mainWindow", "Cancel goal", 0));
        actionDefault_views->setText(QApplication::translate("mainWindow", "Default views", 0));
        actionMore_options->setText(QApplication::translate("mainWindow", "More Options...", 0));
        actionLabel_current_location->setText(QApplication::translate("mainWindow", "Label current location...", 0));
        actionKITTI_format_txt->setText(QApplication::translate("mainWindow", "KITTI format (*.txt)", 0));
        actionRGBD_SLAM_format_txt->setText(QApplication::translate("mainWindow", "RGBD-SLAM format (*.txt)", 0));
        actionTORO_graph->setText(QApplication::translate("mainWindow", "TORO (*.graph)", 0));
        actionExport_cameras_in_Bundle_format_out->setText(QApplication::translate("mainWindow", "Export cameras in Bundler format (*.out)...", 0));
        actionRaw_format_txt->setText(QApplication::translate("mainWindow", "Raw format (*.txt)", 0));
        actionG2o_g2o->setText(QApplication::translate("mainWindow", "g2o (*.g2o)", 0));
        actionCustom->setText(QApplication::translate("mainWindow", "Custom...", 0));
        actionSend_waypoints->setText(QApplication::translate("mainWindow", "Send waypoints...", 0));
        actionUpdate_cache_from_database->setText(QApplication::translate("mainWindow", "Update cache from a local database copy...", 0));
        actionExport_images_RGB_jpg_Depth_png->setText(QApplication::translate("mainWindow", "Export images (RGB=*.jpg Depth=*.png)...", 0));
        actionAnchor_clouds_to_ground_truth->setText(QApplication::translate("mainWindow", "Anchor clouds to ground truth", 0));
        actionStereoZed->setText(QApplication::translate("mainWindow", "Zed sdk", 0));
        actionStereoUsb->setText(QApplication::translate("mainWindow", "Stereo Usb Camera", 0));
        actionExport_octomap->setText(QApplication::translate("mainWindow", "Export octomap...", 0));
        actionRealSense->setText(QApplication::translate("mainWindow", "RealSense", 0));
        actionDepth_Calibration->setText(QApplication::translate("mainWindow", "Depth calibration...", 0));
        menuFile->setTitle(QApplication::translate("mainWindow", "File", 0));
        menuExport_poses->setTitle(QApplication::translate("mainWindow", "Export poses...", 0));
        menuEdit->setTitle(QApplication::translate("mainWindow", " Edit", 0));
        menuAdvanced->setTitle(QApplication::translate("mainWindow", "Advanced", 0));
        menu6->setTitle(QApplication::translate("mainWindow", "?", 0));
        menuProcess->setTitle(QApplication::translate("mainWindow", "Detection", 0));
        menuSelect_source->setTitle(QApplication::translate("mainWindow", "Select source", 0));
        menuImage->setTitle(QApplication::translate("mainWindow", "RGB camera", 0));
        menuRGB_D_camera->setTitle(QApplication::translate("mainWindow", "RGB-D camera", 0));
        menuKinect_for_Xbox_360->setTitle(QApplication::translate("mainWindow", "Kinect", 0));
        menuXtion_PRO_LIVE->setTitle(QApplication::translate("mainWindow", "Xtion PRO LIVE", 0));
        menuSense_3D_scanner->setTitle(QApplication::translate("mainWindow", "Sense 3D scanner", 0));
        menuKinect_v2->setTitle(QApplication::translate("mainWindow", "Kinect v2", 0));
        menuRealSense_R200->setTitle(QApplication::translate("mainWindow", "RealSense R200", 0));
        menuStereo_camera->setTitle(QApplication::translate("mainWindow", "Stereo camera", 0));
        menuBumblebee2_2->setTitle(QApplication::translate("mainWindow", "Bumblebee2", 0));
        menuZed_camera->setTitle(QApplication::translate("mainWindow", "Zed camera", 0));
        menuWindow->setTitle(QApplication::translate("mainWindow", "Window", 0));
        menuShow_view->setTitle(QApplication::translate("mainWindow", "Show view", 0));
        menuAspect_ratio_2->setTitle(QApplication::translate("mainWindow", "Aspect ratio", 0));
        menuTools->setTitle(QApplication::translate("mainWindow", "Tools", 0));
        dockWidget_posterior->setWindowTitle(QApplication::translate("mainWindow", "A posteriori PDF", 0));
        toolBar->setWindowTitle(QApplication::translate("mainWindow", "toolBar", 0));
        dockWidget_statsV2->setWindowTitle(QApplication::translate("mainWindow", "Statistics", 0));
        doubleSpinBox_stats_timeLimit->setSuffix(QApplication::translate("mainWindow", " ms", 0));
        label_source->setText(QApplication::translate("mainWindow", "Source", 0));
        label_stats_source->setText(QApplication::translate("mainWindow", "Unknown", 0));
        doubleSpinBox_stats_imgRate->setSuffix(QApplication::translate("mainWindow", " Hz", 0));
        label_45->setText(QApplication::translate("mainWindow", "Elapsed time (hh:mm:ss)", 0));
        label_elapsedTime->setText(QApplication::translate("mainWindow", "Unknown", 0));
        label_20->setText(QApplication::translate("mainWindow", "Current image id [Map id]", 0));
        label_stats_imageNumber->setText(QApplication::translate("mainWindow", "Unknown", 0));
        label_12->setText(QApplication::translate("mainWindow", "Loop closures detected", 0));
        label_stats_loopClosuresDetected->setText(QApplication::translate("mainWindow", "0", 0));
        label_38->setText(QApplication::translate("mainWindow", "Loop closures detected \n"
"(only reactivated ones)", 0));
        label_stats_loopClosuresReactivatedDetected->setText(QApplication::translate("mainWindow", "0", 0));
        label_15->setText(QApplication::translate("mainWindow", "Loop closures rejected", 0));
        label_stats_loopClosuresRejected->setText(QApplication::translate("mainWindow", "0", 0));
        doubleSpinBox_stats_imgRate_label->setText(QApplication::translate("mainWindow", "Image rate", 0));
        label_timeLimit->setText(QApplication::translate("mainWindow", "Time limit processing", 0));
        doubleSpinBox_stats_detectionRate->setSuffix(QApplication::translate("mainWindow", " Hz", 0));
        doubleSpinBox_stats_imgRate_label_2->setText(QApplication::translate("mainWindow", "RTAB-Map update rate", 0));
        dockWidget_likelihood->setWindowTitle(QApplication::translate("mainWindow", "Likelihood", 0));
        dockWidget_console->setWindowTitle(QApplication::translate("mainWindow", "Console", 0));
        dockWidget_rawlikelihood->setWindowTitle(QApplication::translate("mainWindow", "Raw Likelihood", 0));
        dockWidget_cloudViewer->setWindowTitle(QApplication::translate("mainWindow", "3D Map", 0));
        dockWidget_loopClosureViewer->setWindowTitle(QApplication::translate("mainWindow", "3D Loop closure", 0));
        dockWidget_mapVisibility->setWindowTitle(QApplication::translate("mainWindow", "Map visibility", 0));
        dockWidget_graphViewer->setWindowTitle(QApplication::translate("mainWindow", "Graph view", 0));
        dockWidget_imageView->setWindowTitle(QApplication::translate("mainWindow", "Loop closure detection", 0));
        label_refId->setText(QString());
        label_matchId->setText(QString());
        dockWidget_odometry->setWindowTitle(QApplication::translate("mainWindow", "Odometry", 0));
        toolBar_2->setWindowTitle(QApplication::translate("mainWindow", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
