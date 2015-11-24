#include "accounttypeoption.h"
#include "ui_accounttypeoption.h"

AccountTypeOption::AccountTypeOption(LoginControl &control,
                                   QWidget *parent) :

    QDialog(parent),
    _control(control),
    ui(new Ui::AccountTypeOption)
{
    ui->setupUi(this);
}

AccountTypeOption::~AccountTypeOption()
{
}

void AccountTypeOption::on_adminBtn_clicked()
{
    //_control.createAdminAccount();
}

void AccountTypeOption::on_studentBtn_clicked()
{
    //_control.createStudentAccount();
}

void AccountTypeOption::on_cancelBtn_clicked()
{
    //_control.cancel();
}
