#include "joinprojectwindow.h"
#include "ui_joinprojectwindow.h"
#include "joinprojectcontrol.h"
#include "Storage/project.h"
using namespace storage;

JoinProjectWindow::JoinProjectWindow(JoinProjectControl &control,
                                     QWidget *parent)
    : QDialog(parent), _control(control), ui(new Ui::JoinProjectWindow)
{
    ui->setupUi(this);
}

JoinProjectWindow::~JoinProjectWindow()
{

}

void JoinProjectWindow::on_leaveProjectBtn_clicked()
{
    _control.leaveProject();
}

void JoinProjectWindow::on_joinProjectBtn_clicked()
{
    if (_control.joinProject() == 0) {
        ui->statusLbl->setWordWrap(true);
        ui->statusLbl->setText("<font color='red'>Error: Please try joining project again</font>");
    }
}

void JoinProjectWindow::refreshProjectSettings(ProjectPtr project) {
    ui->projectNameLbl->setText(project->getName());
    ui->projectDescriptTb->setText(project->getDescription());
}
