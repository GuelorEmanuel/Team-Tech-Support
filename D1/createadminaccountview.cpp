#include "createadminaccountview.h"
#include "ui_createadminaccountview.h"
#include "createadminaccountcontrol.h"

CreateAdminAccountView::CreateAdminAccountView(
        CreateAdminAccountControl &control, QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::CreateAdminAccountView)
{
    ui->setupUi(this);
}

CreateAdminAccountView::~CreateAdminAccountView() {}

void CreateAdminAccountView::on_submitBtn_clicked() {
    _control.createAdminAccount(ui->displayNameInput->text(),
                                ui->userNameInput->text());
}

void CreateAdminAccountView::on_cancelBtn_clicked() {
    _control.cancel();
}
