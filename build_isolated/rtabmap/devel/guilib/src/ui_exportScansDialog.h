/********************************************************************************
** Form generated from reading UI file 'exportScansDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSCANSDIALOG_H
#define UI_EXPORTSCANSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportScansDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_13;
    QGridLayout *gridLayout_8;
    QLabel *label_binaryFile_2;
    QCheckBox *checkBox_binary;
    QCheckBox *checkBox_assemble;
    QLabel *label_109;
    QDoubleSpinBox *doubleSpinBox_voxelSize_assembled;
    QLabel *label_111;
    QSpinBox *spinBox_normalKSearch;
    QLabel *label_binaryFile;
    QGroupBox *groupBox_regenerate;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout;
    QLabel *label_108;
    QSpinBox *spinBox_decimation;
    QGroupBox *groupBox_filtering;
    QGridLayout *gridLayout_9;
    QDoubleSpinBox *doubleSpinBox_filteringRadius;
    QLabel *label_110;
    QSpinBox *spinBox_filteringMinNeighbors;
    QLabel *label_112;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportScansDialog)
    {
        if (ExportScansDialog->objectName().isEmpty())
            ExportScansDialog->setObjectName(QStringLiteral("ExportScansDialog"));
        ExportScansDialog->resize(545, 439);
        verticalLayout_2 = new QVBoxLayout(ExportScansDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(ExportScansDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 363));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_binaryFile_2 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_2->setObjectName(QStringLiteral("label_binaryFile_2"));
        label_binaryFile_2->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_2, 1, 1, 1, 1);

        checkBox_binary = new QCheckBox(scrollAreaWidgetContents);
        checkBox_binary->setObjectName(QStringLiteral("checkBox_binary"));
        checkBox_binary->setChecked(true);

        gridLayout_8->addWidget(checkBox_binary, 0, 0, 1, 1);

        checkBox_assemble = new QCheckBox(scrollAreaWidgetContents);
        checkBox_assemble->setObjectName(QStringLiteral("checkBox_assemble"));

        gridLayout_8->addWidget(checkBox_assemble, 1, 0, 1, 1);

        label_109 = new QLabel(scrollAreaWidgetContents);
        label_109->setObjectName(QStringLiteral("label_109"));
        label_109->setWordWrap(true);

        gridLayout_8->addWidget(label_109, 3, 1, 1, 1);

        doubleSpinBox_voxelSize_assembled = new QDoubleSpinBox(scrollAreaWidgetContents);
        doubleSpinBox_voxelSize_assembled->setObjectName(QStringLiteral("doubleSpinBox_voxelSize_assembled"));
        doubleSpinBox_voxelSize_assembled->setDecimals(3);
        doubleSpinBox_voxelSize_assembled->setMaximum(1);
        doubleSpinBox_voxelSize_assembled->setSingleStep(0.01);
        doubleSpinBox_voxelSize_assembled->setValue(0.005);

        gridLayout_8->addWidget(doubleSpinBox_voxelSize_assembled, 3, 0, 1, 1);

        label_111 = new QLabel(scrollAreaWidgetContents);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setWordWrap(true);

        gridLayout_8->addWidget(label_111, 2, 1, 1, 1);

        spinBox_normalKSearch = new QSpinBox(scrollAreaWidgetContents);
        spinBox_normalKSearch->setObjectName(QStringLiteral("spinBox_normalKSearch"));
        spinBox_normalKSearch->setMinimum(0);
        spinBox_normalKSearch->setValue(20);

        gridLayout_8->addWidget(spinBox_normalKSearch, 2, 0, 1, 1);

        label_binaryFile = new QLabel(scrollAreaWidgetContents);
        label_binaryFile->setObjectName(QStringLiteral("label_binaryFile"));
        label_binaryFile->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile, 0, 1, 1, 1);

        gridLayout_8->setColumnStretch(1, 1);

        verticalLayout_13->addLayout(gridLayout_8);

        groupBox_regenerate = new QGroupBox(scrollAreaWidgetContents);
        groupBox_regenerate->setObjectName(QStringLiteral("groupBox_regenerate"));
        groupBox_regenerate->setCheckable(true);
        verticalLayout_14 = new QVBoxLayout(groupBox_regenerate);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_108 = new QLabel(groupBox_regenerate);
        label_108->setObjectName(QStringLiteral("label_108"));
        label_108->setWordWrap(true);

        gridLayout->addWidget(label_108, 0, 1, 1, 1);

        spinBox_decimation = new QSpinBox(groupBox_regenerate);
        spinBox_decimation->setObjectName(QStringLiteral("spinBox_decimation"));
        spinBox_decimation->setMinimum(1);
        spinBox_decimation->setMaximum(999);
        spinBox_decimation->setValue(1);

        gridLayout->addWidget(spinBox_decimation, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_14->addLayout(gridLayout);


        verticalLayout_13->addWidget(groupBox_regenerate);

        groupBox_filtering = new QGroupBox(scrollAreaWidgetContents);
        groupBox_filtering->setObjectName(QStringLiteral("groupBox_filtering"));
        groupBox_filtering->setCheckable(true);
        gridLayout_9 = new QGridLayout(groupBox_filtering);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        doubleSpinBox_filteringRadius = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_filteringRadius->setObjectName(QStringLiteral("doubleSpinBox_filteringRadius"));
        doubleSpinBox_filteringRadius->setDecimals(3);
        doubleSpinBox_filteringRadius->setMinimum(0.001);
        doubleSpinBox_filteringRadius->setMaximum(1);
        doubleSpinBox_filteringRadius->setSingleStep(0.01);
        doubleSpinBox_filteringRadius->setValue(0.02);

        gridLayout_9->addWidget(doubleSpinBox_filteringRadius, 0, 0, 1, 1);

        label_110 = new QLabel(groupBox_filtering);
        label_110->setObjectName(QStringLiteral("label_110"));
        label_110->setWordWrap(true);

        gridLayout_9->addWidget(label_110, 0, 1, 1, 1);

        spinBox_filteringMinNeighbors = new QSpinBox(groupBox_filtering);
        spinBox_filteringMinNeighbors->setObjectName(QStringLiteral("spinBox_filteringMinNeighbors"));
        spinBox_filteringMinNeighbors->setMinimum(1);
        spinBox_filteringMinNeighbors->setMaximum(100);
        spinBox_filteringMinNeighbors->setValue(2);

        gridLayout_9->addWidget(spinBox_filteringMinNeighbors, 1, 0, 1, 1);

        label_112 = new QLabel(groupBox_filtering);
        label_112->setObjectName(QStringLiteral("label_112"));
        label_112->setWordWrap(true);

        gridLayout_9->addWidget(label_112, 1, 1, 1, 1);

        gridLayout_9->setColumnStretch(1, 1);

        verticalLayout_13->addWidget(groupBox_filtering);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_9);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExportScansDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(ExportScansDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportScansDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportScansDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportScansDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportScansDialog)
    {
        ExportScansDialog->setWindowTitle(QApplication::translate("ExportScansDialog", "Export Scans", 0));
        label_binaryFile_2->setText(QApplication::translate("ExportScansDialog", "Assemble scans to a single output cloud.", 0));
        checkBox_binary->setText(QString());
        checkBox_assemble->setText(QString());
        label_109->setText(QApplication::translate("ExportScansDialog", "Voxel size. Set 0 to disable.", 0));
        doubleSpinBox_voxelSize_assembled->setSuffix(QApplication::translate("ExportScansDialog", " m", 0));
        label_111->setText(QApplication::translate("ExportScansDialog", "Set the number of k nearest neighbors to use for the normal estimation. Set 0 to disable normal estimation.", 0));
        label_binaryFile->setText(QApplication::translate("ExportScansDialog", "Binary file.", 0));
        groupBox_regenerate->setTitle(QApplication::translate("ExportScansDialog", "Regenerate Scans", 0));
        label_108->setText(QApplication::translate("ExportScansDialog", "Downsampling step.", 0));
        groupBox_filtering->setTitle(QApplication::translate("ExportScansDialog", "Cloud Filtering (remove noisy points)", 0));
        doubleSpinBox_filteringRadius->setSuffix(QApplication::translate("ExportScansDialog", " m", 0));
        label_110->setText(QApplication::translate("ExportScansDialog", "Radius search.", 0));
        label_112->setText(QApplication::translate("ExportScansDialog", "Minimum neighbors in the search radius.", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportScansDialog: public Ui_ExportScansDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSCANSDIALOG_H
