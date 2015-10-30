#include "createprojectview.h"
#include "ui_createprojectview.h"

CreateProjectView::CreateProjectView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProjectView)
{
    ui->setupUi(this);
    ui->createBtn->setVisible(false);
    ui->updateBtn->setVisible(false);
}

CreateProjectView::~CreateProjectView()
{
    delete ui;
}

void CreateProjectView::on_updateBtn_clicked()
{

}

void CreateProjectView::on_createBtn_clicked()
{

}

void CreateProjectView::editProjectView(){
    ui->createBtn->setVisible(false);
    ui->updateBtn->setVisible(true);

}

void CreateProjectView::createProjectView(){
    ui->updateBtn->setVisible(false);
    ui->createBtn->setVisible(true);
}
