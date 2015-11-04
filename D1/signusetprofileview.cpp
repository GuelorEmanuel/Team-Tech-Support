#include "signusetprofileview.h"
#include "ui_signusetprofileview.h"

signusetprofileview::signusetprofileview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signusetprofileview)
{
    ui->setupUi(this);
}

signusetprofileview::~signusetprofileview()
{
    delete ui;
}
