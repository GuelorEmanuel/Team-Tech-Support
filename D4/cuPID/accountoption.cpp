#include "accountoption.h"
#include "ui_accountoption.h"

AccountOption::AccountOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountOption)
{
    ui->setupUi(this);
}

AccountOption::~AccountOption()
{
    delete ui;
}
