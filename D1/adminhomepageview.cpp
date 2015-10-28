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
