/********************************************************************************
** Form generated from reading UI file 'depthCalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPTHCALIBRATIONDIALOG_H
#define UI_DEPTHCALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepthCalibrationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_111;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_minDepth;
    QLabel *label_voxel;
    QDoubleSpinBox *doubleSpinBox_voxelSize;
    QDoubleSpinBox *doubleSpinBox_coneRadius;
    QCheckBox *checkBox_laserScan;
    QLabel *label_132;
    QDoubleSpinBox *doubleSpinBox_maxDepth;
    QLabel *label_133;
    QLabel *label_voxel_2;
    QLabel *label_voxel_3;
    QDoubleSpinBox *doubleSpinBox_coneStdDevThresh;
    QCheckBox *checkBox_resetModel;
    QLabel *label_110;
    QLabel *label_109;
    QLabel *label_108;
    QSpinBox *spinBox_decimation;
    QHBoxLayout *horizontalLayout;
    QLabel *label_112;
    QLabel *label_trainingSamples;
    QLabel *label_114;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DepthCalibrationDialog)
    {
        if (DepthCalibrationDialog->objectName().isEmpty())
            DepthCalibrationDialog->setObjectName(QStringLiteral("DepthCalibrationDialog"));
        DepthCalibrationDialog->resize(524, 449);
        verticalLayout = new QVBoxLayout(DepthCalibrationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_111 = new QLabel(DepthCalibrationDialog);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setTextFormat(Qt::RichText);
        label_111->setWordWrap(true);

        verticalLayout->addWidget(label_111);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        doubleSpinBox_minDepth = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_minDepth->setObjectName(QStringLiteral("doubleSpinBox_minDepth"));
        doubleSpinBox_minDepth->setDecimals(1);
        doubleSpinBox_minDepth->setMaximum(100);
        doubleSpinBox_minDepth->setSingleStep(0.1);
        doubleSpinBox_minDepth->setValue(0);

        gridLayout->addWidget(doubleSpinBox_minDepth, 5, 0, 1, 1);

        label_voxel = new QLabel(DepthCalibrationDialog);
        label_voxel->setObjectName(QStringLiteral("label_voxel"));
        label_voxel->setWordWrap(true);

        gridLayout->addWidget(label_voxel, 6, 1, 1, 1);

        doubleSpinBox_voxelSize = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_voxelSize->setObjectName(QStringLiteral("doubleSpinBox_voxelSize"));
        doubleSpinBox_voxelSize->setDecimals(3);
        doubleSpinBox_voxelSize->setMaximum(1);
        doubleSpinBox_voxelSize->setSingleStep(0.01);
        doubleSpinBox_voxelSize->setValue(0.01);

        gridLayout->addWidget(doubleSpinBox_voxelSize, 6, 0, 1, 1);

        doubleSpinBox_coneRadius = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_coneRadius->setObjectName(QStringLiteral("doubleSpinBox_coneRadius"));
        doubleSpinBox_coneRadius->setDecimals(2);
        doubleSpinBox_coneRadius->setMinimum(0.01);
        doubleSpinBox_coneRadius->setMaximum(1);
        doubleSpinBox_coneRadius->setSingleStep(0.01);
        doubleSpinBox_coneRadius->setValue(0.02);

        gridLayout->addWidget(doubleSpinBox_coneRadius, 7, 0, 1, 1);

        checkBox_laserScan = new QCheckBox(DepthCalibrationDialog);
        checkBox_laserScan->setObjectName(QStringLiteral("checkBox_laserScan"));

        gridLayout->addWidget(checkBox_laserScan, 0, 0, 1, 1);

        label_132 = new QLabel(DepthCalibrationDialog);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setWordWrap(true);

        gridLayout->addWidget(label_132, 4, 1, 1, 1);

        doubleSpinBox_maxDepth = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_maxDepth->setObjectName(QStringLiteral("doubleSpinBox_maxDepth"));
        doubleSpinBox_maxDepth->setDecimals(1);
        doubleSpinBox_maxDepth->setMaximum(100);
        doubleSpinBox_maxDepth->setSingleStep(0.1);
        doubleSpinBox_maxDepth->setValue(4);

        gridLayout->addWidget(doubleSpinBox_maxDepth, 4, 0, 1, 1);

        label_133 = new QLabel(DepthCalibrationDialog);
        label_133->setObjectName(QStringLiteral("label_133"));
        label_133->setWordWrap(true);

        gridLayout->addWidget(label_133, 5, 1, 1, 1);

        label_voxel_2 = new QLabel(DepthCalibrationDialog);
        label_voxel_2->setObjectName(QStringLiteral("label_voxel_2"));
        label_voxel_2->setWordWrap(true);

        gridLayout->addWidget(label_voxel_2, 7, 1, 1, 1);

        label_voxel_3 = new QLabel(DepthCalibrationDialog);
        label_voxel_3->setObjectName(QStringLiteral("label_voxel_3"));
        label_voxel_3->setWordWrap(true);

        gridLayout->addWidget(label_voxel_3, 8, 1, 1, 1);

        doubleSpinBox_coneStdDevThresh = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_coneStdDevThresh->setObjectName(QStringLiteral("doubleSpinBox_coneStdDevThresh"));
        doubleSpinBox_coneStdDevThresh->setDecimals(2);
        doubleSpinBox_coneStdDevThresh->setMinimum(0.01);
        doubleSpinBox_coneStdDevThresh->setMaximum(1);
        doubleSpinBox_coneStdDevThresh->setSingleStep(0.01);
        doubleSpinBox_coneStdDevThresh->setValue(0.03);

        gridLayout->addWidget(doubleSpinBox_coneStdDevThresh, 8, 0, 1, 1);

        checkBox_resetModel = new QCheckBox(DepthCalibrationDialog);
        checkBox_resetModel->setObjectName(QStringLiteral("checkBox_resetModel"));

        gridLayout->addWidget(checkBox_resetModel, 1, 0, 1, 1);

        label_110 = new QLabel(DepthCalibrationDialog);
        label_110->setObjectName(QStringLiteral("label_110"));
        label_110->setWordWrap(true);

        gridLayout->addWidget(label_110, 0, 1, 1, 1);

        label_109 = new QLabel(DepthCalibrationDialog);
        label_109->setObjectName(QStringLiteral("label_109"));
        label_109->setWordWrap(true);

        gridLayout->addWidget(label_109, 1, 1, 1, 1);

        label_108 = new QLabel(DepthCalibrationDialog);
        label_108->setObjectName(QStringLiteral("label_108"));
        label_108->setWordWrap(true);

        gridLayout->addWidget(label_108, 3, 1, 1, 1);

        spinBox_decimation = new QSpinBox(DepthCalibrationDialog);
        spinBox_decimation->setObjectName(QStringLiteral("spinBox_decimation"));
        spinBox_decimation->setMinimum(1);
        spinBox_decimation->setMaximum(32);
        spinBox_decimation->setValue(1);

        gridLayout->addWidget(spinBox_decimation, 3, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_112 = new QLabel(DepthCalibrationDialog);
        label_112->setObjectName(QStringLiteral("label_112"));
        label_112->setWordWrap(true);

        horizontalLayout->addWidget(label_112);

        label_trainingSamples = new QLabel(DepthCalibrationDialog);
        label_trainingSamples->setObjectName(QStringLiteral("label_trainingSamples"));
        label_trainingSamples->setWordWrap(true);

        horizontalLayout->addWidget(label_trainingSamples);

        label_114 = new QLabel(DepthCalibrationDialog);
        label_114->setObjectName(QStringLiteral("label_114"));
        label_114->setWordWrap(true);

        horizontalLayout->addWidget(label_114);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DepthCalibrationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DepthCalibrationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), DepthCalibrationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DepthCalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *DepthCalibrationDialog)
    {
        DepthCalibrationDialog->setWindowTitle(QApplication::translate("DepthCalibrationDialog", "Depth Calibration", 0));
        label_111->setText(QApplication::translate("DepthCalibrationDialog", "<html><head/><body><p>CLAMS approach is used for depth calibration. Please visit <a href=\"http://www.alexteichman.com/octo/clams/\"><span style=\" text-decoration: underline; color:#0000ff;\">CLAMS website</span></a> for tips about how to get a good map for depth calibration. If you want to process multiple mapping sessions, uncheck &quot;Reset previous model&quot;. If logger's level is debug, 3D map and generated depth images will be shown during the calibration.</p></body></html>", 0));
        doubleSpinBox_minDepth->setSuffix(QApplication::translate("DepthCalibrationDialog", " m", 0));
        label_voxel->setText(QApplication::translate("DepthCalibrationDialog", "Voxel size. Set 0 to disable.", 0));
        doubleSpinBox_voxelSize->setSuffix(QApplication::translate("DepthCalibrationDialog", " m", 0));
        doubleSpinBox_coneRadius->setSuffix(QApplication::translate("DepthCalibrationDialog", " m", 0));
        checkBox_laserScan->setText(QString());
        label_132->setText(QApplication::translate("DepthCalibrationDialog", "Maximum depth (0 means no limit).", 0));
        doubleSpinBox_maxDepth->setSuffix(QApplication::translate("DepthCalibrationDialog", " m", 0));
        label_133->setText(QApplication::translate("DepthCalibrationDialog", "Minimum depth.", 0));
        label_voxel_2->setText(QApplication::translate("DepthCalibrationDialog", "Cone radius.", 0));
        label_voxel_3->setText(QApplication::translate("DepthCalibrationDialog", "Cone standard deviation threshold.", 0));
        doubleSpinBox_coneStdDevThresh->setSuffix(QApplication::translate("DepthCalibrationDialog", " m", 0));
        checkBox_resetModel->setText(QString());
        label_110->setText(QApplication::translate("DepthCalibrationDialog", "Use 3D laser scans for 3D map.", 0));
        label_109->setText(QApplication::translate("DepthCalibrationDialog", "Reset previous model.", 0));
        label_108->setText(QApplication::translate("DepthCalibrationDialog", "Decimation (1-2-4-8-...).", 0));
        label_112->setText(QApplication::translate("DepthCalibrationDialog", "Current model:", 0));
        label_trainingSamples->setText(QApplication::translate("DepthCalibrationDialog", "0", 0));
        label_114->setText(QApplication::translate("DepthCalibrationDialog", "training samples", 0));
    } // retranslateUi

};

namespace Ui {
    class DepthCalibrationDialog: public Ui_DepthCalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPTHCALIBRATIONDIALOG_H
