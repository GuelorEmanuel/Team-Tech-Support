#include "createadminaccountwindow.h"
#include "ui_createadminaccountwindow.h"
#include "createadminaccountcontrol.h"

CreateAdminAccountWindow::CreateAdminAccountWindow(
        CreateAdminAccountControl &control, QWidget *parent) :
    _control(control),
    QDialog(parent),
    ui(new Ui::CreateAdminAccountWindow)
{
    ui->setupUi(this);
}

CreateAdminAccountWindow::~CreateAdminAccountWindow() {}

/* Function: void CreateAdminAccountView::on_submitBtn_clicked()
 * Purpose : take information from user about new account and
 *           pass it to control class
 */
void CreateAdminAccountWindow::on_submitBtn_clicked() {
    QString firstNLastName = ui->displayNameInput->text();
    QString userName       = ui->userNameInput->text();


    int stat = 1;

    if(firstNLastName.isEmpty()){
        ui->statusLbl->setText("<font color='red'>Please fill in your first and last name</font>");
        stat = 0;
    }
    if(userName.isEmpty()){
        ui->statusLbl->setText("<font color='red'>Please fill in your user name</font>");
         stat = 0;
    }
    if(stat == 1){
        _control.createAdminAccount(ui->displayNameInput->text(),
                                    ui->userNameInput->text());
        ui->submitBtn->setEnabled(true);
    }

}

void CreateAdminAccountWindow::on_cancelBtn_clicked() {
    _control.cancel();
}
