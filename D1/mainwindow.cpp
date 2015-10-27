#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/loginScreenIMG")));

    this->setPalette(palette);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonSignIn_clicked()
{

}

void MainWindow::on_buttonSignUp_clicked()
{

}
