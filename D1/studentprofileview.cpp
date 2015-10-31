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
