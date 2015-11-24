#include "computeteamsview.h"
#include "ui_computeteamsview.h"

ComputeTeamsView::ComputeTeamsView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputeTeamsView)
{
    ui->setupUi(this);
}

ComputeTeamsView::~ComputeTeamsView()
{
    delete ui;
}
