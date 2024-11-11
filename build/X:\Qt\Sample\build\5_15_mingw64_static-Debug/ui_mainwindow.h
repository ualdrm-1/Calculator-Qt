/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Image;
    QLabel *Answer;
    QPushButton *Bracket;
    QPushButton *PlusMinus;
    QPushButton *Percentage;
    QPushButton *Division;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *Multi;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *Plus;
    QPushButton *pushButton_2;
    QPushButton *Minus;
    QPushButton *pushButton_1;
    QPushButton *Clear;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Doc;
    QPushButton *Equil;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 640);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(2,72,115)\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Image = new QLabel(centralwidget);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(0, 0, 360, 24));
        Image->setStyleSheet(QString::fromUtf8("background-color:blue"));
        Image->setPixmap(QPixmap(QString::fromUtf8("build/image/status bar bg.png")));
        Answer = new QLabel(centralwidget);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->setGeometry(QRect(0, 20, 360, 156));
        Answer->setStyleSheet(QString::fromUtf8("background-color:rgb(4,191,173);\n"
"border-bottom-left-radius:35px;\n"
"border-bottom-right-radius:35px;\n"
"font-size:50px;\n"
"color:white;\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-weight:300;\n"
"text-align:center;\n"
"padding: 80% 0 20px 0;"));
        Answer->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        Bracket = new QPushButton(centralwidget);
        Bracket->setObjectName(QString::fromUtf8("Bracket"));
        Bracket->setGeometry(QRect(30, 220, 60, 60));
        Bracket->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:30px;\n"
"font-weight:200;\n"
"color:white;"));
        Bracket->setIconSize(QSize(30, 30));
        PlusMinus = new QPushButton(centralwidget);
        PlusMinus->setObjectName(QString::fromUtf8("PlusMinus"));
        PlusMinus->setGeometry(QRect(110, 220, 60, 60));
        PlusMinus->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:30px;\n"
"font-weight:200;\n"
"color:white;"));
        PlusMinus->setIconSize(QSize(30, 30));
        Percentage = new QPushButton(centralwidget);
        Percentage->setObjectName(QString::fromUtf8("Percentage"));
        Percentage->setGeometry(QRect(190, 220, 60, 60));
        Percentage->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:30px;\n"
"font-weight:200;\n"
"color:white;"));
        Percentage->setIconSize(QSize(30, 30));
        Division = new QPushButton(centralwidget);
        Division->setObjectName(QString::fromUtf8("Division"));
        Division->setGeometry(QRect(270, 220, 60, 60));
        Division->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:30px;\n"
"font-weight:200;\n"
"color:white;"));
        Division->setIconSize(QSize(30, 30));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 300, 60, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(110, 300, 60, 60));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(190, 300, 60, 60));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        Multi = new QPushButton(centralwidget);
        Multi->setObjectName(QString::fromUtf8("Multi"));
        Multi->setGeometry(QRect(270, 300, 60, 60));
        Multi->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:35px;\n"
"font-weight:200;\n"
"color:white;"));
        Multi->setIconSize(QSize(30, 30));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 380, 60, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 380, 60, 60));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 460, 60, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 380, 60, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        Plus = new QPushButton(centralwidget);
        Plus->setObjectName(QString::fromUtf8("Plus"));
        Plus->setGeometry(QRect(270, 460, 60, 60));
        Plus->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:35px;\n"
"font-weight:200;\n"
"color:white;"));
        Plus->setIconSize(QSize(30, 30));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 460, 60, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        Minus = new QPushButton(centralwidget);
        Minus->setObjectName(QString::fromUtf8("Minus"));
        Minus->setGeometry(QRect(270, 380, 60, 60));
        Minus->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:35px;\n"
"font-weight:200;\n"
"color:white;"));
        Minus->setIconSize(QSize(30, 30));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 460, 60, 60));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(30, 540, 60, 60));
        Clear->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(242, 94, 94);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:600;\n"
"color:white;"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(110, 540, 60, 60));
        pushButton_0->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        pushButton_Doc = new QPushButton(centralwidget);
        pushButton_Doc->setObjectName(QString::fromUtf8("pushButton_Doc"));
        pushButton_Doc->setGeometry(QRect(190, 540, 60, 60));
        pushButton_Doc->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(176, 209, 216);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:24px;\n"
"font-weight:200;\n"
"color:rgb(2,72,115);\n"
""));
        Equil = new QPushButton(centralwidget);
        Equil->setObjectName(QString::fromUtf8("Equil"));
        Equil->setGeometry(QRect(270, 540, 60, 60));
        Equil->setStyleSheet(QString::fromUtf8("border-radius:30%;\n"
"background-color:rgb(8,137,166);\n"
"font-family: 'Open Sans', sens-serif;\n"
"font-size:35px;\n"
"font-weight:200;\n"
"color:white;"));
        Equil->setIconSize(QSize(30, 30));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Image->setText(QString());
        Answer->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Bracket->setText(QCoreApplication::translate("MainWindow", "()", nullptr));
        PlusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Percentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Multi->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Doc->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Equil->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
