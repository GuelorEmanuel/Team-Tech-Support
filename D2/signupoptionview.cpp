#include "signupoptionview.h"
#include "ui_signupoptionview.h"
#include "signupmaincontrol.h"

SignupOptionView::SignupOptionView(SignUpMainControl &control,
                                   QWidget *parent) :

    QDialog(parent),
    _control(control),
    ui(new Ui::SignupOptionView)
{
    ui->setupUi(this);
}

SignupOptionView::~SignupOptionView()
{
}

void SignupOptionView::on_adminBtn_clicked()
{
    _control.createAdminAccount();
}

void SignupOptionView::on_studentBtn_clicked()
{
    _control.createStudentAccount();
}

void SignupOptionView::on_cancelBtn_clicked()
{
    _control.cancel();
}
