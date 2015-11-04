#include "createstudentaccountview.h"
#include "ui_createstudentaccountview.h"
#include "createstudentaccountcontrol.h"

CreateStudentAccountView::CreateStudentAccountView(
        CreateStudentAccountControl &control, QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::CreateStudentAccountView)
{
    ui->setupUi(this);
}

CreateStudentAccountView::~CreateStudentAccountView()
{
}

/*Function: void CreateStudentAccountView::on_submitBtn_clicked()
 * Purpose: take input from user and pass it to control class
 */
void CreateStudentAccountView::on_submitBtn_clicked()
{
    QString fname = ui->firstNameLE->text();
    QString lname = ui->lastnameLE->text();
    QString id    = ui->idLE->text();

    int stat = 1;

    if(fname.isEmpty()){
        qDebug() << "First name is empty";
        ui->statusLbl->setText("<font color='red'>Please fill in your first name</font>");
        stat = 0;
    }
    if(lname.isEmpty()){
        qDebug() << "Last name is empty";
        ui->statusLbl->setText("<font color='red'>Please fill in your last name</font>");
         stat = 0;
    }
    if(id.isEmpty()){
        qDebug() << "ID is empty";
        ui->statusLbl->setText("<font color='red'>Please fill in your ID</font>");
         stat = 0;
    }
    if (stat == 1){
        _control.createAccount(fname, lname, id);
    }
}

void CreateStudentAccountView::on_cancelBtn_clicked()
{
    _control.cancel();
}
