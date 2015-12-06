#include "studenthomewindow.h"
#include "ui_studenthomewindow.h"
#include "studenthomecontrol.h"

StudentHomeWindow::StudentHomeWindow(StudentHomeControl &control, QWidget *parent)
    : QDialog(parent),_control(control), ui(new Ui::StudentHomeWindow)
{
    ui->setupUi(this);
}

StudentHomeWindow::~StudentHomeWindow()
{

}

void StudentHomeWindow::setName(QString name)
{
    ui->studentNameLbl->setText(name);
}

void StudentHomeWindow::updateJoinedProjects()
{
    int size = ui->unjoinedProjectsInput->count();

    for(int i = 0; i < size; i++) {
        ui->unjoinedProjectsInput->removeItem(i);
    }
    ui->joinedProjectsList->clear();
    _control.getJoinedProjectList();
    _control.getUnjoinedProjectList();
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
    if (ui->unjoinedProjectsInput->currentIndex() == 0){
        ui->statusLbl->setWordWrap(true);
        ui->statusLbl->setText("<font color='red'>Please select a project first!</font>");
        return;
    }

    // Pass the project ID to edit project
    int id = ui->unjoinedProjectsInput->itemData(ui->unjoinedProjectsInput->currentIndex()).toInt();
    _control.openUnJoinedProject(id);
}

void StudentHomeWindow::addUnjoinedProject(int id, QString name) {
    ui->unjoinedProjectsInput->addItem(name, id);
}

void StudentHomeWindow::addJoinedProject(int id, QString name) {
    ui->joinedProjectsList->addItem(name);
}
