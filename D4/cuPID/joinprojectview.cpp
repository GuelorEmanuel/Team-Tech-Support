#include "joinprojectview.h"
#include "ui_joinprojectview.h"

JoinProjectView::JoinProjectView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JoinProjectView)
{
    ui->setupUi(this);
}

JoinProjectView::~JoinProjectView()
{
    delete ui;
}
