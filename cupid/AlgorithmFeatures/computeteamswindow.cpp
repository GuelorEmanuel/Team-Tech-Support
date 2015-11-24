#include "computeteamswindow.h"
#include "ui_computeteamswindow.h"

ComputeTeamsWindow::ComputeTeamsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputeTeamsWindow)
{
    ui->setupUi(this);
}

ComputeTeamsWindow::~ComputeTeamsWindow()
{
    delete ui;
}
