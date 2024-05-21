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
        northButton->setGeometry(QRect(290, 120, 100, 32));
        eastButton = new QPushButton(centralwidget);
        eastButton->setObjectName("eastButton");
        eastButton->setGeometry(QRect(400, 170, 100, 32));
        westButton = new QPushButton(centralwidget);
        westButton->setObjectName("westButton");
        westButton->setGeometry(QRect(170, 160, 100, 32));
        southButton = new QPushButton(centralwidget);
        southButton->setObjectName("southButton");
        southButton->setGeometry(QRect(290, 210, 100, 32));
        mapButton = new QPushButton(centralwidget);
        mapButton->setObjectName("mapButton");
        mapButton->setGeometry(QRect(160, 300, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
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
        northButton->setText(QCoreApplication::translate("MainWindow", "North", nullptr));
        eastButton->setText(QCoreApplication::translate("MainWindow", "East", nullptr));
        westButton->setText(QCoreApplication::translate("MainWindow", "West", nullptr));
        southButton->setText(QCoreApplication::translate("MainWindow", "South", nullptr));
        mapButton->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
