#include "studenthomeview.h"
#include "ui_studenthomeview.h"
#include "studentmaincontrol.h"

StudentHomeView::StudentHomeView(StudentMainControl &control, QWidget *parent) :
    QDialog(parent),_control(control),
    ui(new Ui::StudentHomeView)
{
    ui->setupUi(this);
}

StudentHomeView::~StudentHomeView()
{

}

void StudentHomeView::on_editProfileBtn_clicked()
{

}

void StudentHomeView::on_signOutBtn_clicked()
{
    _control.logout();
}

void StudentHomeView::on_openProjectBtn_clicked() {

}

void StudentHomeView::addUnjoinedProject(int id, QString name) {
    ui->unjoinedProjectsInput->addItem(name, id);
}

void StudentHomeView::addJoinedProject(int id, QString name) {
    ui->joinedProjectsList->addItem(name);
}
