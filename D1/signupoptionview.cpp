#include "signupoptionview.h"
#include "ui_signupoptionview.h"

signupoptionview::signupoptionview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signupoptionview)
{
    ui->setupUi(this);
}

signupoptionview::~signupoptionview()
{
    delete ui;
}
