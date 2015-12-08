#include "AlgorithmFeatures/computeteamscontrol.h"
#include "AlgorithmFeatures/computeteamswindow.h"
#include "ui_computeteamswindow.h"
using namespace storage;
using namespace algorithm;

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

void ComputeTeamsWindow::addSummaryTeam(TeamPtr team, int num)
{
    ui->resultsTextEdit->append(QString("**Team %1**").arg(num));
    ui->resultsTextEdit->append(QString("Students:"));
    const std::vector<StudentPtr>& students = team->getStudents();
    for(int i = 0; i < students.size(); i++) {
        ui->resultsTextEdit->append(QString("%1: %2 - %3").arg(students[i]->getDisplayName()).arg(students[i]->getStudentId()));
    }
}

void ComputeTeamsWindow::addDetailedTeam(TeamPtr team, int num)
{
    addSummaryTeam(team, num);
    //add detailed description
}

void ComputeTeamsWindow::clearWindow()
{
    ui->resultsTextEdit->clear();
}
