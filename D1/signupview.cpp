#include "signupview.h"
#include "ui_signupview.h"

Signupview::Signupview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signupview)
{
    ui->setupUi(this);
}

Signupview::~Signupview()
{
    delete ui;
}

void Signupview::on_cancelBtn_clicked()
{
    this->close();
}
