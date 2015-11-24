#include "createstudentaccountview.h"
#include "ui_createstudentaccountview.h"

CreateStudentAccountView::CreateStudentAccountView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStudentAccountView)
{
    ui->setupUi(this);
}

CreateStudentAccountView::~CreateStudentAccountView()
{
    delete ui;
}
