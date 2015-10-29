#include "signupview.h"
#include "ui_signupview.h"

signupView::signupView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signupView)
{
    ui->setupUi(this);
}

signupView::~signupView()
{
    delete ui;
}

void signupView::on_submitBtn_clicked()
{

}


void signupView::on_cancelBtn_clicked()
{

}
