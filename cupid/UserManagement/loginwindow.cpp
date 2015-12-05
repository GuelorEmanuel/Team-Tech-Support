#include "loginwindow.h"
#include "logincontrol.h"
#include "ui_loginwindow.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/profile.h"
#include "Storage/project.h"
#include "Storage/qualification.h"
#include <vector>
#include "Database/sqlitedatabase.h"

LoginWindow::LoginWindow(LoginControl& control, QWidget *parent) :
    QMainWindow(parent), _control(control), _ui(new Ui::LoginWindow)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/loginScreenIMG")));
    this->setPalette(palette);

    _ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
}

void LoginWindow::on_signUpBtn_clicked()
{
    _control.signUp();
}

void LoginWindow::on_signInBtn_clicked()
{
   _control.signIn(_ui->lineEditUserName->text());
}

void LoginWindow::on_lineEditUserName_returnPressed()
{
    _control.signIn(_ui->lineEditUserName->text());
}

void LoginWindow::displayUserNotFoundError()
{
    _ui->statusLbl->setText("<font color='red'>User not found</font>");
}
