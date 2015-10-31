#include "studentprofileview.h"
#include "ui_studentprofileview.h"

StudentProfileView::StudentProfileView(Student* student, QWidget *parent) :
    _student(student), QDialog(parent),
    ui(new Ui::StudentProfileView)
{
    ui->setupUi(this);
}

StudentProfileView::~StudentProfileView()
{
    delete ui;
}

void StudentProfileView::on_exitBtn_clicked()
{

}

void StudentProfileView::on_saveBtn_clicked()
{

}
