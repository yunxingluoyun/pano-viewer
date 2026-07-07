/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *lblSystemInfo;
    QLabel *lblDescription;
    QLabel *lblPanini;
    QLabel *lblCopyright;
    QLabel *VersionLabel;
    QToolButton *toolButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(425, 320);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        AboutDialog->setFont(font);
        AboutDialog->setAutoFillBackground(true);
        AboutDialog->setModal(true);
        lblSystemInfo = new QLabel(AboutDialog);
        lblSystemInfo->setObjectName("lblSystemInfo");
        lblSystemInfo->setGeometry(QRect(30, 150, 371, 151));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif")});
        font1.setPointSize(10);
        font1.setBold(false);
        lblSystemInfo->setFont(font1);
        lblSystemInfo->setFrameShape(QFrame::NoFrame);
        lblSystemInfo->setFrameShadow(QFrame::Sunken);
        lblSystemInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblSystemInfo->setWordWrap(true);
        lblSystemInfo->setMargin(5);
        lblSystemInfo->setIndent(0);
        lblDescription = new QLabel(AboutDialog);
        lblDescription->setObjectName("lblDescription");
        lblDescription->setGeometry(QRect(160, 50, 191, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sans Serif")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setKerning(false);
        lblDescription->setFont(font2);
        lblDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblPanini = new QLabel(AboutDialog);
        lblPanini->setObjectName("lblPanini");
        lblPanini->setGeometry(QRect(160, 20, 51, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        lblPanini->setFont(font3);
        lblPanini->setLayoutDirection(Qt::LeftToRight);
        lblPanini->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblCopyright = new QLabel(AboutDialog);
        lblCopyright->setObjectName("lblCopyright");
        lblCopyright->setGeometry(QRect(160, 90, 211, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sans Serif")});
        font4.setPointSize(10);
        font4.setBold(true);
        lblCopyright->setFont(font4);
        lblCopyright->setTextFormat(Qt::RichText);
        VersionLabel = new QLabel(AboutDialog);
        VersionLabel->setObjectName("VersionLabel");
        VersionLabel->setGeometry(QRect(220, 20, 101, 31));
        VersionLabel->setFont(font3);
        toolButton = new QToolButton(AboutDialog);
        toolButton->setObjectName("toolButton");
        toolButton->setEnabled(false);
        toolButton->setGeometry(QRect(30, 30, 111, 111));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/panini-icon-blue.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/Icons/panini-icon-blue.jpg"), QSize(), QIcon::Mode::Disabled, QIcon::State::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(128, 128));

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Panini", nullptr));
        lblSystemInfo->setText(QCoreApplication::translate("AboutDialog", "Your\n"
"System's\n"
"OpenGL\n"
"Implementation\n"
"Info...\n"
"Qt vers", nullptr));
        lblDescription->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>multiplatform panorama viewer<br/>and perspective adjustment tool</p></body></html>", nullptr));
        lblPanini->setText(QCoreApplication::translate("AboutDialog", "Panini", nullptr));
        lblCopyright->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>\302\251 2008 - 2009 Thomas Sharpless<br/>\302\251 2017 - 2019 Michael Vetter</p></body></html>", nullptr));
        VersionLabel->setText(QCoreApplication::translate("AboutDialog", "0.7.88-89M", nullptr));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
