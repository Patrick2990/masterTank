/********************************************************************************
** Form generated from reading UI file 'createSimpleCalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESIMPLECALIBRATIONDIALOG_H
#define UI_CREATESIMPLECALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createSimpleCalibrationDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_advanced;
    QCheckBox *checkBox_stereo;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_fx;
    QLabel *label_baseline;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_fy;
    QLabel *label_4;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_baseline;
    QDoubleSpinBox *doubleSpinBox_cy;
    QDoubleSpinBox *doubleSpinBox_cx;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_left;
    QDoubleSpinBox *doubleSpinBox_fx_r;
    QDoubleSpinBox *doubleSpinBox_fx_l;
    QLabel *label_right;
    QDoubleSpinBox *doubleSpinBox_cx_l;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_fy_r;
    QDoubleSpinBox *doubleSpinBox_fy_l;
    QDoubleSpinBox *doubleSpinBox_cx_r;
    QDoubleSpinBox *doubleSpinBox_cy_r;
    QDoubleSpinBox *doubleSpinBox_cy_l;
    QLabel *label_9;
    QLineEdit *lineEdit_D_r;
    QLabel *label_8;
    QLineEdit *lineEdit_D_l;
    QLabel *label_12;
    QLabel *label_11;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBox_width;
    QLabel *label_5;
    QSpinBox *spinBox_height;
    QLabel *label_13;
    QGroupBox *groupBox_stereo_extrinsics;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_RT;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *createSimpleCalibrationDialog)
    {
        if (createSimpleCalibrationDialog->objectName().isEmpty())
            createSimpleCalibrationDialog->setObjectName(QStringLiteral("createSimpleCalibrationDialog"));
        createSimpleCalibrationDialog->resize(563, 597);
        verticalLayout_3 = new QVBoxLayout(createSimpleCalibrationDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_advanced = new QComboBox(createSimpleCalibrationDialog);
        comboBox_advanced->setObjectName(QStringLiteral("comboBox_advanced"));

        horizontalLayout->addWidget(comboBox_advanced);

        checkBox_stereo = new QCheckBox(createSimpleCalibrationDialog);
        checkBox_stereo->setObjectName(QStringLiteral("checkBox_stereo"));

        horizontalLayout->addWidget(checkBox_stereo);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(createSimpleCalibrationDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        doubleSpinBox_fx = new QDoubleSpinBox(groupBox);
        doubleSpinBox_fx->setObjectName(QStringLiteral("doubleSpinBox_fx"));
        doubleSpinBox_fx->setDecimals(6);
        doubleSpinBox_fx->setMaximum(99999);

        gridLayout->addWidget(doubleSpinBox_fx, 0, 0, 1, 1);

        label_baseline = new QLabel(groupBox);
        label_baseline->setObjectName(QStringLiteral("label_baseline"));
        label_baseline->setWordWrap(true);

        gridLayout->addWidget(label_baseline, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        doubleSpinBox_fy = new QDoubleSpinBox(groupBox);
        doubleSpinBox_fy->setObjectName(QStringLiteral("doubleSpinBox_fy"));
        doubleSpinBox_fy->setDecimals(6);
        doubleSpinBox_fy->setMaximum(99999);

        gridLayout->addWidget(doubleSpinBox_fy, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        doubleSpinBox_baseline = new QDoubleSpinBox(groupBox);
        doubleSpinBox_baseline->setObjectName(QStringLiteral("doubleSpinBox_baseline"));
        doubleSpinBox_baseline->setDecimals(6);
        doubleSpinBox_baseline->setMinimum(0);
        doubleSpinBox_baseline->setMaximum(99999);

        gridLayout->addWidget(doubleSpinBox_baseline, 4, 0, 1, 1);

        doubleSpinBox_cy = new QDoubleSpinBox(groupBox);
        doubleSpinBox_cy->setObjectName(QStringLiteral("doubleSpinBox_cy"));
        doubleSpinBox_cy->setDecimals(6);
        doubleSpinBox_cy->setMaximum(99999);

        gridLayout->addWidget(doubleSpinBox_cy, 3, 0, 1, 1);

        doubleSpinBox_cx = new QDoubleSpinBox(groupBox);
        doubleSpinBox_cx->setObjectName(QStringLiteral("doubleSpinBox_cx"));
        doubleSpinBox_cx->setDecimals(6);
        doubleSpinBox_cx->setMaximum(99999);

        gridLayout->addWidget(doubleSpinBox_cx, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_left = new QLabel(groupBox_3);
        label_left->setObjectName(QStringLiteral("label_left"));

        gridLayout_3->addWidget(label_left, 1, 0, 1, 1);

        doubleSpinBox_fx_r = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_fx_r->setObjectName(QStringLiteral("doubleSpinBox_fx_r"));
        doubleSpinBox_fx_r->setDecimals(6);
        doubleSpinBox_fx_r->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_fx_r, 2, 1, 1, 1);

        doubleSpinBox_fx_l = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_fx_l->setObjectName(QStringLiteral("doubleSpinBox_fx_l"));
        doubleSpinBox_fx_l->setDecimals(6);
        doubleSpinBox_fx_l->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_fx_l, 2, 0, 1, 1);

        label_right = new QLabel(groupBox_3);
        label_right->setObjectName(QStringLiteral("label_right"));

        gridLayout_3->addWidget(label_right, 1, 1, 1, 1);

        doubleSpinBox_cx_l = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_cx_l->setObjectName(QStringLiteral("doubleSpinBox_cx_l"));
        doubleSpinBox_cx_l->setDecimals(6);
        doubleSpinBox_cx_l->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_cx_l, 4, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 2, 1, 1);

        doubleSpinBox_fy_r = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_fy_r->setObjectName(QStringLiteral("doubleSpinBox_fy_r"));
        doubleSpinBox_fy_r->setDecimals(6);
        doubleSpinBox_fy_r->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_fy_r, 3, 1, 1, 1);

        doubleSpinBox_fy_l = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_fy_l->setObjectName(QStringLiteral("doubleSpinBox_fy_l"));
        doubleSpinBox_fy_l->setDecimals(6);
        doubleSpinBox_fy_l->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_fy_l, 3, 0, 1, 1);

        doubleSpinBox_cx_r = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_cx_r->setObjectName(QStringLiteral("doubleSpinBox_cx_r"));
        doubleSpinBox_cx_r->setDecimals(6);
        doubleSpinBox_cx_r->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_cx_r, 4, 1, 1, 1);

        doubleSpinBox_cy_r = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_cy_r->setObjectName(QStringLiteral("doubleSpinBox_cy_r"));
        doubleSpinBox_cy_r->setDecimals(6);
        doubleSpinBox_cy_r->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_cy_r, 5, 1, 1, 1);

        doubleSpinBox_cy_l = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_cy_l->setObjectName(QStringLiteral("doubleSpinBox_cy_l"));
        doubleSpinBox_cy_l->setDecimals(6);
        doubleSpinBox_cy_l->setMaximum(99999);

        gridLayout_3->addWidget(doubleSpinBox_cy_l, 5, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 3, 2, 1, 1);

        lineEdit_D_r = new QLineEdit(groupBox_3);
        lineEdit_D_r->setObjectName(QStringLiteral("lineEdit_D_r"));

        gridLayout_3->addWidget(lineEdit_D_r, 6, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 5, 2, 1, 1);

        lineEdit_D_l = new QLineEdit(groupBox_3);
        lineEdit_D_l->setObjectName(QStringLiteral("lineEdit_D_l"));

        gridLayout_3->addWidget(lineEdit_D_l, 6, 0, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setWordWrap(true);

        gridLayout_3->addWidget(label_12, 6, 2, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 4, 2, 1, 1);

        gridLayout_3->setColumnStretch(2, 1);

        verticalLayout_2->addWidget(groupBox_3);

        stackedWidget->addWidget(page);

        verticalLayout_3->addWidget(stackedWidget);

        groupBox_2 = new QGroupBox(createSimpleCalibrationDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        spinBox_width = new QSpinBox(groupBox_2);
        spinBox_width->setObjectName(QStringLiteral("spinBox_width"));
        spinBox_width->setMaximum(99999);

        gridLayout_4->addWidget(spinBox_width, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 0, 1, 1, 1);

        spinBox_height = new QSpinBox(groupBox_2);
        spinBox_height->setObjectName(QStringLiteral("spinBox_height"));
        spinBox_height->setMaximum(99999);

        gridLayout_4->addWidget(spinBox_height, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_3->addWidget(groupBox_2);

        groupBox_stereo_extrinsics = new QGroupBox(createSimpleCalibrationDialog);
        groupBox_stereo_extrinsics->setObjectName(QStringLiteral("groupBox_stereo_extrinsics"));
        gridLayout_2 = new QGridLayout(groupBox_stereo_extrinsics);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit_RT = new QLineEdit(groupBox_stereo_extrinsics);
        lineEdit_RT->setObjectName(QStringLiteral("lineEdit_RT"));

        gridLayout_2->addWidget(lineEdit_RT, 0, 0, 2, 2);

        label_6 = new QLabel(groupBox_stereo_extrinsics);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);


        verticalLayout_3->addWidget(groupBox_stereo_extrinsics);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(createSimpleCalibrationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(createSimpleCalibrationDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(createSimpleCalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *createSimpleCalibrationDialog)
    {
        createSimpleCalibrationDialog->setWindowTitle(QApplication::translate("createSimpleCalibrationDialog", "Create simple calibration", 0));
        comboBox_advanced->clear();
        comboBox_advanced->insertItems(0, QStringList()
         << QApplication::translate("createSimpleCalibrationDialog", "Basic (images are already rectified)", 0)
         << QApplication::translate("createSimpleCalibrationDialog", "Advanced (images should be rectified)", 0)
        );
        checkBox_stereo->setText(QApplication::translate("createSimpleCalibrationDialog", "Stereo", 0));
        groupBox->setTitle(QApplication::translate("createSimpleCalibrationDialog", "Camera Intrinsics", 0));
        label_2->setText(QApplication::translate("createSimpleCalibrationDialog", "fy", 0));
        label_baseline->setText(QApplication::translate("createSimpleCalibrationDialog", "baseline (m)", 0));
        label_3->setText(QApplication::translate("createSimpleCalibrationDialog", "cx", 0));
        label_4->setText(QApplication::translate("createSimpleCalibrationDialog", "cy", 0));
        label->setText(QApplication::translate("createSimpleCalibrationDialog", "fx", 0));
        groupBox_3->setTitle(QApplication::translate("createSimpleCalibrationDialog", "Camera Intrinsics", 0));
        label_left->setText(QApplication::translate("createSimpleCalibrationDialog", "Left", 0));
        label_right->setText(QApplication::translate("createSimpleCalibrationDialog", "Right", 0));
        label_10->setText(QApplication::translate("createSimpleCalibrationDialog", "fx", 0));
        label_9->setText(QApplication::translate("createSimpleCalibrationDialog", "fy", 0));
        label_8->setText(QApplication::translate("createSimpleCalibrationDialog", "cy", 0));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("createSimpleCalibrationDialog", "k1, k2, p1, p2[, k3[, k4, k5, k6 ]]", 0));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("createSimpleCalibrationDialog", "Distorsion coefficients (4, 5 or 8 values)", 0));
        label_11->setText(QApplication::translate("createSimpleCalibrationDialog", "cx", 0));
        groupBox_2->setTitle(QApplication::translate("createSimpleCalibrationDialog", "Image Size", 0));
        label_5->setText(QApplication::translate("createSimpleCalibrationDialog", "Image width", 0));
        label_13->setText(QApplication::translate("createSimpleCalibrationDialog", "Image height", 0));
        groupBox_stereo_extrinsics->setTitle(QApplication::translate("createSimpleCalibrationDialog", "Stereo Camera Extrinsics", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_RT->setToolTip(QApplication::translate("createSimpleCalibrationDialog", "<html><head/><body><p>Format (3 values): x y z<br/>Format (6 values): x y z roll pitch yaw<br/>Format (7 values): x y z qx qy qz qw<br/>Format (9 values, 3x3 rotation): r11 r12 r13 r21 r22 r23 r31 r32 r33<br/>Format (12 values, 3x4 transform): r11 r12 r13 tx r21 r22 r23 ty r31 r32 r33 tz</p><p>KITTI: /base_link to /gray_camera = 0 0 1 -1 0 0 0 -1 0<br/>KITTI: /base_link to /color_camera = 0 0 1 0 -1 0 0 -0.06 0 -1 0 0</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("createSimpleCalibrationDialog", "Transform between the cameras", 0));
    } // retranslateUi

};

namespace Ui {
    class createSimpleCalibrationDialog: public Ui_createSimpleCalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESIMPLECALIBRATIONDIALOG_H
