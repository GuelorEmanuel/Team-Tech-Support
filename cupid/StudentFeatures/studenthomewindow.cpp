#include "StudentFeatures/studenthomewindow.h"
#include "StudentFeatures/studenthomecontrol.h"
#include "Storage/storage.h"
#include "Storage/project.h"
#include "ui_studenthomewindow.h"
#include <QDebug>
using namespace storage;

StudentHomeWindow::StudentHomeWindow(StudentHomeControl &control, QWidget *parent)
    : QDialog(parent),_control(control), _ui(new Ui::StudentHomeWindow)
{
    _ui->setupUi(this);
}

StudentHomeWindow::~StudentHomeWindow()
{

}

void StudentHomeWindow::setName(QString name)
{
    _ui->studentNameLbl->setText(name);
}

void StudentHomeWindow::updateJoinedProjects(ProjectPtr joinedProject)
{
<<<<<<< HEAD
    ui->unjoinedProjectsInput->removeItem(ui->unjoinedProjectsInput->findText(name));
    ui->joinedProjectsList->clear();
    _control.getJoinedProjectList();

=======
    _ui->unjoinedProjectsInput->removeItem(
                _ui->unjoinedProjectsInput->findText(joinedProject->getName()));
    _ui->joinedProjectsList->addItem(joinedProject->getName());
>>>>>>> 4b7ee32a75b812131dd82fbdf97005291ec471a2
}

void StudentHomeWindow::on_editProfileBtn_clicked()
{
    _control.editProfile();
}

void StudentHomeWindow::on_signOutBtn_clicked()
{
    _control.logout();
}

void StudentHomeWindow::on_openProjectBtn_clicked() {
    // Do nothing if they haven't selected a project
    if (_ui->unjoinedProjectsInput->currentIndex() == 0){
        _ui->statusLbl->setText("<font color='red'>Please select a project first!</font>");
        return;
    }

    // Pass the project ID to edit project
    _control.openUnJoinedProject(_ui->unjoinedProjectsInput->itemData(
                             _ui->unjoinedProjectsInput->currentIndex()).toInt());
}

void StudentHomeWindow::setJoinedProjects(ProjectList projects)
{    
    _ui->joinedProjectsList->clear();
    for (auto it = projects->begin(); it != projects->end(); ++it)
    {
        _ui->joinedProjectsList->addItem((*it)->getName());
    }
}

void StudentHomeWindow::setUnjoinedProjects(ProjectList projects)
{
    _ui->unjoinedProjectsInput->clear();
    for (auto it = projects->begin(); it != projects->end(); ++it)
    {
        _ui->unjoinedProjectsInput->addItem((*it)->getName(), (*it)->getId());
    }
}
