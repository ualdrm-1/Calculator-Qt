/********************************************************************************
** Form generated from reading UI file 'secretWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECRETWINDOW_H
#define UI_SECRETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecretWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *SecretWindow)
    {
        if (SecretWindow->objectName().isEmpty())
            SecretWindow->setObjectName(QString::fromUtf8("SecretWindow"));
        SecretWindow->resize(400, 300);
        label = new QLabel(SecretWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 120, 161, 41));

        retranslateUi(SecretWindow);

        QMetaObject::connectSlotsByName(SecretWindow);
    } // setupUi

    void retranslateUi(QDialog *SecretWindow)
    {
        SecretWindow->setWindowTitle(QCoreApplication::translate("SecretWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecretWindow", "Welcome to Secret Window!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecretWindow: public Ui_SecretWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECRETWINDOW_H
