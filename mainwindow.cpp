#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/oisinfrizzell/Desktop/zorkimage.jpg");
    ui->background->setPixmap(pix);
    ui->background->setScaledContents(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    bool finished = zorkUL.update(ui->lineEdit->text().toStdString());
    //updates the game with entered text

    if (finished)
        QCoreApplication::quit();

    ui->lineEdit->clear(); // clears the line when entered
}


void MainWindow::on_northButton_clicked()
{
    std::string result = zorkUL.go("north");
    std::cout << result << std::endl; //prints result to console
    //implemented by passing the value ie "north" in the go method

}


void MainWindow::on_westButton_clicked()
{

    std::string result = zorkUL.go("west");
    std::cout << result << std::endl;

}


void MainWindow::on_eastButton_clicked()
{

    std::string result = zorkUL.go("east");
    std::cout << result << std::endl;

}


void MainWindow::on_southButton_clicked()
{

    std::string result = zorkUL.go("south");
    std::cout << result << std::endl;

}


void MainWindow::on_mapButton_clicked()
{
    bool finished = zorkUL.update("map");



}

