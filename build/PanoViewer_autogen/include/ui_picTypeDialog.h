/********************************************************************************
** Form generated from reading UI file 'picTypeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTYPEDIALOG_H
#define UI_PICTYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_picTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *typesBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLabel *widPixels;
    QLabel *hgtPixels;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *hfovBox;
    QDoubleSpinBox *vfovBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *nonSqOK;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *picTypeDialog)
    {
        if (picTypeDialog->objectName().isEmpty())
            picTypeDialog->setObjectName("picTypeDialog");
        picTypeDialog->resize(327, 187);
        verticalLayout = new QVBoxLayout(picTypeDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(picTypeDialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 18));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        lineEdit = new QLineEdit(picTypeDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(picTypeDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        typesBox = new QComboBox(picTypeDialog);
        typesBox->setObjectName("typesBox");

        horizontalLayout_5->addWidget(typesBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_8 = new QLabel(picTypeDialog);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        widPixels = new QLabel(picTypeDialog);
        widPixels->setObjectName("widPixels");
        widPixels->setFrameShape(QFrame::Box);
        widPixels->setFrameShadow(QFrame::Sunken);
        widPixels->setLineWidth(2);

        horizontalLayout_2->addWidget(widPixels);

        hgtPixels = new QLabel(picTypeDialog);
        hgtPixels->setObjectName("hgtPixels");
        hgtPixels->setFrameShape(QFrame::Box);
        hgtPixels->setFrameShadow(QFrame::Sunken);
        hgtPixels->setLineWidth(2);

        horizontalLayout_2->addWidget(hgtPixels);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(picTypeDialog);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        hfovBox = new QDoubleSpinBox(picTypeDialog);
        hfovBox->setObjectName("hfovBox");
        hfovBox->setAccelerated(true);
        hfovBox->setMinimum(5.000000000000000);
        hfovBox->setMaximum(180.000000000000000);
        hfovBox->setValue(180.000000000000000);

        horizontalLayout->addWidget(hfovBox);

        vfovBox = new QDoubleSpinBox(picTypeDialog);
        vfovBox->setObjectName("vfovBox");
        vfovBox->setAccelerated(true);
        vfovBox->setMinimum(5.000000000000000);
        vfovBox->setMaximum(180.000000000000000);
        vfovBox->setValue(180.000000000000000);

        horizontalLayout->addWidget(vfovBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        nonSqOK = new QCheckBox(picTypeDialog);
        nonSqOK->setObjectName("nonSqOK");

        horizontalLayout_3->addWidget(nonSqOK);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(picTypeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(picTypeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, picTypeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, picTypeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(picTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *picTypeDialog)
    {
        picTypeDialog->setWindowTitle(QCoreApplication::translate("picTypeDialog", "panini - Picture Type and FOV", nullptr));
        label->setText(QCoreApplication::translate("picTypeDialog", "FilePath", nullptr));
        label_2->setText(QCoreApplication::translate("picTypeDialog", "Picture type", nullptr));
        label_8->setText(QCoreApplication::translate("picTypeDialog", "Width, Height, pixels  ", nullptr));
        widPixels->setText(QCoreApplication::translate("picTypeDialog", "TextLabel", nullptr));
        hgtPixels->setText(QCoreApplication::translate("picTypeDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("picTypeDialog", "Width, Height, degrees", nullptr));
        nonSqOK->setText(QCoreApplication::translate("picTypeDialog", "unlock FOVs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class picTypeDialog: public Ui_picTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTYPEDIALOG_H
