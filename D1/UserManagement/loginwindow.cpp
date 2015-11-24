#include "loginwindow.h"
#include "logincontrol.h"
#include "ui_loginwindow.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/profile.h"

LoginWindow::LoginWindow(LoginControl& control, QWidget *parent) :
    QMainWindow(parent), _control(control), ui(new Ui::LoginWindow) {
    //mainWindowControl = new MainWindowControl();
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/loginScreenIMG")));

    this->setPalette(palette);
    ui->setupUi(this);

}

LoginWindow::~LoginWindow() {
    // Not responsible for cleaning up _control
}

void LoginWindow::on_signUpBtn_clicked() {
    _control.signUp();
}

/*Function: void MainWindow::on_signInBtn_clicked()
 * Purpose: get entered username and pass it to control class
 */
void LoginWindow::on_signInBtn_clicked() {
   QString errorMessage ="Error: Either your account doen't exist or something went really wrong, Please create an account to login.";
   int stat = _control.signIn(ui->lineEditUserName->text());
   ui->statusLbl->setWordWrap(true);
   if( stat == 0){
      ui->statusLbl->setText("<font color='red'>" +errorMessage+"</font>");
   }
}

void LoginWindow::on_lineEditUserName_returnPressed() {
    _control.signIn(ui->lineEditUserName->text());
    // TODO: move all the error handling stuff into the controller so we don't have to duplicate it
}
