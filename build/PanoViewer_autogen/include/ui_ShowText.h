/********************************************************************************
** Form generated from reading UI file 'ShowText.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTEXT_H
#define UI_SHOWTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShowText
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *ShowText)
    {
        if (ShowText->objectName().isEmpty())
            ShowText->setObjectName("ShowText");
        ShowText->resize(371, 249);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setPointSize(10);
        ShowText->setFont(font);
        plainTextEdit = new QPlainTextEdit(ShowText);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 10, 351, 231));
        plainTextEdit->setFont(font);
        plainTextEdit->setUndoRedoEnabled(false);
        plainTextEdit->setReadOnly(true);

        retranslateUi(ShowText);

        QMetaObject::connectSlotsByName(ShowText);
    } // setupUi

    void retranslateUi(QDialog *ShowText)
    {
        ShowText->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowText: public Ui_ShowText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTEXT_H
