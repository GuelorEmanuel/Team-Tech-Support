#include "studenthomeview.h"
#include "ui_studenthomeview.h"
#include "studentmaincontrol.h"

StudentHomeView::StudentHomeView(StudentMainControl &control, QWidget *parent) :
    QDialog(parent),_control(control),
    ui(new Ui::StudentHomeView)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/student")));

    this->setPalette(palette);
    ui->setupUi(this);
}

StudentHomeView::~StudentHomeView()
{

}

void StudentHomeView::setName(QString name)
{
    ui->studentNameLbl->setText(name);
}

void StudentHomeView::updateJoinedProjects()
{

}

void StudentHomeView::on_editProfileBtn_clicked()
{
    _control.editProfile();


}

void StudentHomeView::on_signOutBtn_clicked()
{
    _control.logout();
}

void StudentHomeView::on_openProjectBtn_clicked() {
    // Do nothing if they haven't selected a project
    if (ui->unjoinedProjectsInput->currentIndex() == 0){
        ui->statusLbl->setWordWrap(true);
        ui->statusLbl->setText("<font color='red'>Please select a project first!</font>");
        return;
    }

    // Pass the project ID to edit project
    _control.openUnJoinedProject(ui->unjoinedProjectsInput->itemData(
                             ui->unjoinedProjectsInput->currentIndex()).toInt());


}

void StudentHomeView::addUnjoinedProject(int id, QString name) {
    ui->unjoinedProjectsInput->addItem(name, id);
}

void StudentHomeView::addJoinedProject(int id, QString name) {
    ui->joinedProjectsList->addItem(name);
}
