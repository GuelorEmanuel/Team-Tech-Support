#include "mainwindow.h"
#include "mainWindowControl.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include "student.h"
#include <QDebug>
#include "profile.h"

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

/*Function: void MainWindow::on_signInBtn_clicked()
 * Purpose: get entered username and pass it to control class
 */
void MainWindow::on_signInBtn_clicked() {
   QString errorMessage ="Error: Either your account doen't exist or something went really wrong, Please create an account to login.";
   int stat = _control.signIn(ui->lineEditUserName->text());
   ui->statusLbl->setWordWrap(true);
   if( stat == 0){
      ui->statusLbl->setText("<font color='red'>" +errorMessage+"</font>");
   }
}

void MainWindow::on_lineEditUserName_returnPressed() {
    _control.signIn(ui->lineEditUserName->text());
    // TODO: move all the error handling stuff into the controller so we don't have to duplicate it
}
