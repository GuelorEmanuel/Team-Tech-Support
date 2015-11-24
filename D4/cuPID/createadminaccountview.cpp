#include "createadminaccountview.h"
#include "ui_createadminaccountview.h"

CreateAdminAccountView::CreateAdminAccountView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAdminAccountView)
{
    ui->setupUi(this);
}

CreateAdminAccountView::~CreateAdminAccountView()
{
    delete ui;
}
