/********************************************************************************
** Form generated from reading UI file 'TurnDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TURNDIALOG_H
#define UI_TURNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TurnDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *TurnList;
    QLabel *label_4;
    QDoubleSpinBox *YawBox;
    QLabel *label_2;
    QDoubleSpinBox *PitchBox;
    QLabel *label;
    QDoubleSpinBox *RollBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TurnDialog)
    {
        if (TurnDialog->objectName().isEmpty())
            TurnDialog->setObjectName("TurnDialog");
        TurnDialog->setWindowModality(Qt::ApplicationModal);
        TurnDialog->resize(195, 172);
        gridLayout = new QGridLayout(TurnDialog);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(TurnDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        TurnList = new QComboBox(TurnDialog);
        TurnList->setObjectName("TurnList");

        gridLayout->addWidget(TurnList, 0, 1, 1, 2);

        label_4 = new QLabel(TurnDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        YawBox = new QDoubleSpinBox(TurnDialog);
        YawBox->setObjectName("YawBox");
        YawBox->setMinimum(-180.000000000000000);
        YawBox->setMaximum(180.000000000000000);

        gridLayout->addWidget(YawBox, 1, 2, 1, 1);

        label_2 = new QLabel(TurnDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        PitchBox = new QDoubleSpinBox(TurnDialog);
        PitchBox->setObjectName("PitchBox");
        PitchBox->setAccelerated(true);
        PitchBox->setMinimum(-90.000000000000000);
        PitchBox->setMaximum(90.000000000000000);
        PitchBox->setSingleStep(0.200000000000000);

        gridLayout->addWidget(PitchBox, 2, 2, 1, 1);

        label = new QLabel(TurnDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 2);

        RollBox = new QDoubleSpinBox(TurnDialog);
        RollBox->setObjectName("RollBox");
        RollBox->setAccelerated(true);
        RollBox->setMinimum(-45.000000000000000);
        RollBox->setMaximum(45.000000000000000);
        RollBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(RollBox, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(TurnDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 3);


        retranslateUi(TurnDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TurnDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TurnDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TurnDialog);
    } // setupUi

    void retranslateUi(QDialog *TurnDialog)
    {
        TurnDialog->setWindowTitle(QCoreApplication::translate("TurnDialog", " Panini  Turn Image", nullptr));
        label_3->setText(QCoreApplication::translate("TurnDialog", "Orientation", nullptr));
        label_4->setText(QCoreApplication::translate("TurnDialog", "Yaw degrees", nullptr));
        label_2->setText(QCoreApplication::translate("TurnDialog", "Pitch degrees", nullptr));
        label->setText(QCoreApplication::translate("TurnDialog", "Roll degrees", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TurnDialog: public Ui_TurnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURNDIALOG_H
