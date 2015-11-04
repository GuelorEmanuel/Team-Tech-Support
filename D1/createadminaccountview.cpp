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

/* Function: void CreateAdminAccountView::on_submitBtn_clicked()
 * Purpose : take information from user about new account and
 *           pass it to control class
 */
void CreateAdminAccountView::on_submitBtn_clicked() {
    if ( !ui->userNameInput->text().isEmpty() && !ui->displayNameInput->text().isEmpty()){
        _control.createAdminAccount(ui->displayNameInput->text(),
                                    ui->userNameInput->text());
        ui->submitBtn->setEnabled(true);
    }else{
        QString errorMessage = "Please Fill in the two fields";
        ui->statusLbl->setWordWrap(true);
        ui->statusLbl->setText("<font color='red'>" +errorMessage+"</font>");
    }

}

void CreateAdminAccountView::on_cancelBtn_clicked() {
    _control.cancel();
}
