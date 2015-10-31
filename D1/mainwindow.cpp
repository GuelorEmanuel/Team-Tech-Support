#include "mainwindow.h"
#include "mainWindowControl.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(MainWindowControl& control, QWidget *parent) :
    QMainWindow(parent), _control(control), ui(new Ui::MainWindow) {
    //mainWindowControl = new MainWindowControl();
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/loginScreenIMG")));

    this->setPalette(palette);
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    // Not responsible for cleaning up _control
}

void MainWindow::on_signUpBtn_clicked() {
    _control.signUp();
}

void MainWindow::on_signInBtn_clicked() {
   int stat = _control.signIn(ui->lineEditUserName->text());
   qDebug() << QString("%1").arg(stat);
}
