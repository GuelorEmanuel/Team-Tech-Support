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

}

void CreateStudentAccountView::on_cancelBtn_clicked()
{

}
