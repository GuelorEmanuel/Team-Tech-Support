#include "AlgorithmFeatures/computeteamscontrol.h"
#include "AlgorithmFeatures/computeteamswindow.h"
#include "ui_computeteamswindow.h"

ComputeTeamsWindow::ComputeTeamsWindow(ComputeTeamsControl& control, QWidget *parent) :
    QDialog(parent), _control(control),
    ui(new Ui::ComputeTeamsWindow)
{
    ui->setupUi(this);
}

ComputeTeamsWindow::~ComputeTeamsWindow()
{
}

void ComputeTeamsWindow::setProjectTitle(QString str)
{
    ui->projectNameLabel->setText("Computed teams for " + str);
}

void ComputeTeamsWindow::on_backButton_clicked()
{
    _control.back();
}

void ComputeTeamsWindow::on_summaryButton_clicked()
{
    _control.showSummary();
}

void ComputeTeamsWindow::on_detailsButton_clicked()
{
    _control.showDetails();
}
