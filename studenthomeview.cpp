#include "studenthomeview.h"
#include "ui_studenthomeview.h"

StudentHomeView::StudentHomeView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentHomeView)
{
    ui->setupUi(this);
}

StudentHomeView::~StudentHomeView()
{
    delete ui;
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
