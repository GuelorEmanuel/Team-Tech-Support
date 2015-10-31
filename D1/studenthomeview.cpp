#include "studenthomeview.h"
#include "ui_studenthomeview.h"
#include "studentmaincontrol.h"

StudentHomeView::StudentHomeView(StudentMainControl &control, QWidget *parent) :
    QDialog(parent),_control(control),
    ui(new Ui::StudentHomeView)
{
    ui->setupUi(this);
}

StudentHomeView::~StudentHomeView()
{

}

void StudentHomeView::on_editProfileBtn_clicked()
{

}

void StudentHomeView::on_signOutBtn_clicked()
{

}

void StudentHomeView::on_projectsBtn_clicked()
{

}

void StudentHomeView::on_joinedProjectsBtn_clicked()
{

}
