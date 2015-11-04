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

    if(fname.isEmpty())
        qDebug() << "First name is empty";
    if(lname.isEmpty())
        qDebug() << "Last name is empty";
    if(id.isEmpty())
        qDebug() << "ID is empty";
    else
        _control.createAccount(fname, lname, id);
}

void CreateStudentAccountView::on_cancelBtn_clicked()
{
    _control.cancel();
}
