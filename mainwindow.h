#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ZorkUL.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE // organises code into sepertate named sections
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_returnPressed();

    void on_northButton_clicked();

    void on_westButton_clicked();

    void on_eastButton_clicked();

    void on_southButton_clicked();

    void on_mapButton_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL zorkUL;
};
#endif // MAINWINDOW_H
