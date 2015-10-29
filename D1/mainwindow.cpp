#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupoptionview.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    //mainWindowControl = new MainWindowControl();
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/loginScreenIMG")));

    this->setPalette(palette);
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
    //delete mainWindowControl;
}


void MainWindow::on_signUpBtn_clicked() {
    //Note to self, need to check with the controller if the database was able to connect
    //mainWindowControl->on_buttonSignUp_clicked();
    for(int i = 0; i < 5; i++)
        qDebug() << "C++ Style Debug Message";

    //if (mainWindowControl->isdbOpened()) {
      signupoptionview.setModal(true);
      signupoptionview.exec();
    //}

}

/*
 *  Method to sign in the User
 *  @return void
 */
void MainWindow::on_signInBtn_clicked() {
    // Need to check with the controller first if the model was able to connect to the database
    //mainWindowControl->on_buttonSignIn_clicked();


}
