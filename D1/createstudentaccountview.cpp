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

void CreateStudentAccountView::on_submitBtn_clicked()
{
    QString fname = ui->firstNameLE->text();
    QString lname = ui->lastnameLE->text();
    QString id    = ui->idLE->text();
    bool flag = true;

    if (!fname.isEmpty() && !lname.isEmpty()&& !id.isEmpty()){
         _control.createAccount(fname, lname, id);
    }
    else {
        ui->statusLbl->setText("<font color='red'>Error: Please fill in all the info above </font>");
    }

}

void CreateStudentAccountView::on_cancelBtn_clicked()
{
    _control.cancel();
}
