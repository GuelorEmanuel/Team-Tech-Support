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

void signupoptionview::on_adminOptionBtn_clicked()
{

}

void signupoptionview::on_studentOptionBtn_clicked()
{

}

void signupoptionview::on_cancelBtn_clicked()
{

}
