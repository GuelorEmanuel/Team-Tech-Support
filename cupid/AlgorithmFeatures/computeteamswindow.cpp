#include "computeteamswindow.h"
#include "ui_computeteamswindow.h"
#include "computeteamscontrol.h"
#include <QComboBox>

ComputeTeamsWindow::ComputeTeamsWindow(ComputeTeamsControl& control, QWidget *parent) :
    QDialog(parent), _control(control),
    ui(new Ui::ComputeTeamsWindow)
{
    ui->setupUi(this);
}

ComputeTeamsWindow::~ComputeTeamsWindow()
{
    //delete ui;
}

void ComputeTeamsWindow::on_cancelButton_clicked()
{

}

void ComputeTeamsWindow::on_submitButton_clicked()
{
    ui->comboBox->itemData(ui->comboBox->currentIndex());
}
