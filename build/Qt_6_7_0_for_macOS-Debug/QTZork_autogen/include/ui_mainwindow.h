/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *northButton;
    QPushButton *eastButton;
    QPushButton *westButton;
    QPushButton *southButton;
    QPushButton *mapButton;
    QLabel *background;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 781, 28));
        northButton = new QPushButton(centralwidget);
        northButton->setObjectName("northButton");
        northButton->setGeometry(QRect(290, 40, 161, 71));
        northButton->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background-color: rgb(80, 235, 255);\n"
"border-color: rgb(0, 0, 0);"));
        eastButton = new QPushButton(centralwidget);
        eastButton->setObjectName("eastButton");
        eastButton->setGeometry(QRect(500, 80, 171, 71));
        eastButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(80, 235, 255);\n"
"border-color: rgb(0, 0, 0);"));
        westButton = new QPushButton(centralwidget);
        westButton->setObjectName("westButton");
        westButton->setGeometry(QRect(90, 90, 151, 71));
        westButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(80, 235, 255);\n"
"border-color: rgb(0, 0, 0);"));
        southButton = new QPushButton(centralwidget);
        southButton->setObjectName("southButton");
        southButton->setGeometry(QRect(290, 130, 161, 71));
        southButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(80, 235, 255);"));
        mapButton = new QPushButton(centralwidget);
        mapButton->setObjectName("mapButton");
        mapButton->setGeometry(QRect(30, 400, 181, 101));
        mapButton->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"background-color: rgb(80, 235, 255);\n"
"border-color: rgb(0, 0, 0);"));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(10, 40, 771, 481));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        lineEdit->raise();
        northButton->raise();
        eastButton->raise();
        westButton->raise();
        southButton->raise();
        mapButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        northButton->setText(QCoreApplication::translate("MainWindow", "Go North", nullptr));
        eastButton->setText(QCoreApplication::translate("MainWindow", "Go East", nullptr));
        westButton->setText(QCoreApplication::translate("MainWindow", "Go West", nullptr));
        southButton->setText(QCoreApplication::translate("MainWindow", "Go South", nullptr));
        mapButton->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
