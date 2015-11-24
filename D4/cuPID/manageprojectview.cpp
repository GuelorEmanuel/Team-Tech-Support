#include "manageprojectview.h"
#include "ui_manageprojectview.h"

ManageProjectView::ManageProjectView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageProjectView)
{
    ui->setupUi(this);
}

ManageProjectView::~ManageProjectView()
{
    delete ui;
}
