#include "createstudentaccountwindow.h"
#include "ui_createstudentaccountwindow.h"
#include "createstudentaccountcontrol.h"

CreateStudentAccountWindow::CreateStudentAccountWindow(
        CreateStudentAccountControl &control, QWidget *parent) :
    QDialog(parent),
    _control(control),    
    _ui(new Ui::CreateStudentAccountWindow)
{
    _ui->setupUi(this);
}

CreateStudentAccountWindow::~CreateStudentAccountWindow()
{
}

void CreateStudentAccountWindow::on_submitBtn_clicked()
{        
    _control.createAccount(
                _ui->displayNameLineEdit->text(),
                _ui->userNameLineEdit->text(),
                _ui->studentIdLineEdit->text());
}

void CreateStudentAccountWindow::on_cancelBtn_clicked()
{
    _control.cancel();
}

void CreateStudentAccountWindow::displayUserNameUnavailableError()
{
    displayError("username unavailable");
}

void CreateStudentAccountWindow::displayStudentIdUnavailableError()
{
    displayError("student ID unavailable");
}

void CreateStudentAccountWindow::displayProfileCreationError()
{
    displayError("profile not created");
}

void CreateStudentAccountWindow::displayError(QString error) {
    _ui->statusLbl->setText("<font color='red'>Error: " + error + "</font>");
}
