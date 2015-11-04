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
    QString firstNLastName = ui->displayNameInput->text();
    QString userName       = ui->userNameInput->text();


    int stat = 1;

    if(firstNLastName.isEmpty()){
        qDebug() << "First name and Last name is empty";
        ui->statusLbl->setText("<font color='red'>Please fill in your first and last name</font>");
        stat = 0;
    }
    if(userName.isEmpty()){
        qDebug() << "user name is empty";
        ui->statusLbl->setText("<font color='red'>Please fill in your user name</font>");
         stat = 0;
    }
    if(stat == 1){
        _control.createAdminAccount(ui->displayNameInput->text(),
                                    ui->userNameInput->text());
        ui->submitBtn->setEnabled(true);
    }

}

void CreateAdminAccountView::on_cancelBtn_clicked() {
    _control.cancel();
}
