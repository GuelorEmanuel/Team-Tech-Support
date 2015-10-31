#include "studentprojectview.h"
#include "ui_studentprojectview.h"

StudentProjectView::StudentProjectView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentProjectView)
{
    ui->setupUi(this);
}

StudentProjectView::~StudentProjectView()
{
    delete ui;
}

void StudentProjectView::on_leaveProjectBtn_clicked()
{

}

void StudentProjectView::on_joinProjectBtn_clicked()
{

}
