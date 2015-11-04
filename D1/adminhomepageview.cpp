#include "adminhomepageview.h"
#include "ui_adminhomepageview.h"

adminhomepageview::adminhomepageview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminhomepageview)
{
    ui->setupUi(this);
}

adminhomepageview::~adminhomepageview()
{
    delete ui;
}

void adminhomepageview::on_studentBtn_clicked()
{

}

void adminhomepageview::on_studentInProjectBtn_clicked()
{

}

void adminhomepageview::on_signOutBtn_clicked()
{

}

void adminhomepageview::on_addNewProjectBtn_clicked()
{

}

void adminhomepageview::on_HomeBtn_clicked()
{

}
