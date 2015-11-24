#include "createstudentaccountwindow.h"
#include "ui_createstudentaccountwindow.h"
#include "createstudentaccountcontrol.h"

CreateStudentAccountWindow::CreateStudentAccountWindow(
        CreateStudentAccountControl &control, QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::CreateStudentAccountWindow)
{
    ui->setupUi(this);
}

CreateStudentAccountWindow::~CreateStudentAccountWindow()
{
}

/*Function: void CreateStudentAccountView::on_submitBtn_clicked()
 * Purpose: take input from user and pass it to control class
 */
void CreateStudentAccountWindow::on_submitBtn_clicked()
{
    QString fname = ui->firstNameLE->text();
    QString lname = ui->lastnameLE->text();
    QString id    = ui->idLE->text();

    int stat = 1;

    if(fname.isEmpty()){
        ui->statusLbl->setText("<font color='red'>Please fill in your first name</font>");
        stat = 0;
    }
    if(lname.isEmpty()){
        ui->statusLbl->setText("<font color='red'>Please fill in your last name</font>");
         stat = 0;
    }
    if(id.isEmpty()){
        ui->statusLbl->setText("<font color='red'>Please fill in your ID</font>");
         stat = 0;
    }
    if (stat == 1){
        _control.createAccount(fname, lname, id);
    }
}

void CreateStudentAccountWindow::on_cancelBtn_clicked()
{
    _control.cancel();
}
