#include "adminhomeview.h"
#include "ui_adminhomeview.h"

AdminHomeView::AdminHomeView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminHomeView)
{
    ui->setupUi(this);
}

AdminHomeView::~AdminHomeView()
{
    delete ui;
}



void AdminHomeView::on_homeBtn_clicked()
{

}

void AdminHomeView::on_createProjectBtn_clicked()
{

}

void AdminHomeView::on_signoutBtn_clicked()
{

}

void AdminHomeView::on_lisStudentBtn_clicked()
{

}

void AdminHomeView::on_lisStudentInProjBtn_clicked()
{

}

void AdminHomeView::on_editProjectBtn_clicked()
{

}

void AdminHomeView::on_runAlgoBtn_clicked()
{

}
