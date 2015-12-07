#include "manageprojectwindow.h"
#include "ui_manageprojectwindow.h"
#include "manageprojectcontrol.h"
#include "Storage/project.h"
#include <QDebug>
using namespace storage;

ManageProjectWindow::ManageProjectWindow(ManageProjectControl &control,
                                     QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageProjectWindow),
    _control(control)
{
    ui->setupUi(this);
}

ManageProjectWindow::~ManageProjectWindow() {
}

void ManageProjectWindow::displayError(QString msg) {
    ui->statusLbl->setText("<font color=\"red\">" + msg + "</font>");
}

void ManageProjectWindow::on_cancelButton_clicked() {
    _control.cancel();
}

/*Function: void CreateProjectView::on_createBtn_clicked()
 * Purpose: take information from user and pass it to control
 *          class
 */
void ManageProjectWindow::on_createBtn_clicked() {
    if(_control.getStatus()) {
        _control.createProject(ui->projectNameLE->text(),
                           ui->projectDescriptionLE->toPlainText(),
                           ui->minTeamSizeLE->text(),
                           ui->maxTeamSizeLE->text());
    } else {
        _control.editProject(ui->projectNameLE->text(),
                           ui->projectDescriptionLE->toPlainText(),
                           ui->minTeamSizeLE->text(),
                           ui->maxTeamSizeLE->text());
    }
}

void ManageProjectWindow::displayProject(ProjectPtr project)
{
    ui->projectNameLE->setText(project->getName());
    ui->projectDescriptionLE->clear();
    ui->projectDescriptionLE->appendPlainText(project->getDescription());
    ui->minTeamSizeLE->setText(QString("%1").arg(project->getMinTeamSize()));
    ui->maxTeamSizeLE->setText(QString("%1").arg(project->getMaxTeamSize()));
}
