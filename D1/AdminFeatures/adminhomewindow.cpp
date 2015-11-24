#include "adminhomewindow.h"
#include "ui_adminhomewindow.h"
#include "adminhomecontrol.h"

AdminHomeWindow::AdminHomeWindow(AdminHomeControl &control, QWidget *parent) :
    QDialog(parent), _control(control),
    ui(new Ui::AdminHomeWindow)
{
    ui->setupUi(this);
}

AdminHomeWindow::~AdminHomeWindow()
{
}

void AdminHomeWindow::addProject(int id, QString name) {
    ui->selectProjectInput->addItem(name, id);
}

void AdminHomeWindow::on_createProjectBtn_clicked()
{
    _control.createProject();
}

void AdminHomeWindow::on_signoutBtn_clicked()
{
    _control.signOut();
}

/* Function: void AdminHomeView::on_editProjectBtn_clicked()
 * Purpose : if project is selected, call control class to open it,
 *           if not - ignore signal.
 */
void AdminHomeWindow::on_editProjectBtn_clicked() {
    // Do nothing if they haven't selected a project
    if (ui->selectProjectInput->currentIndex() == 0){
        ui->statusLbl->setWordWrap(true);
        ui->statusLbl->setText("<font color='red'>Please select a project first!</font>");

        return;
    }

    // Pass the project ID to edit project
    _control.editProject(ui->selectProjectInput->itemData(
                             ui->selectProjectInput->currentIndex()).toInt());
}

//Have to be ignored for now - slot for algorithm
void AdminHomeWindow::on_runAlgoBtn_clicked()
{
    // Do nothing if they haven't selected a project
    if (ui->selectProjectInput->currentIndex() == 0) return;

    // Pass the project ID to compute best teams
    _control.computeTeams(ui->selectProjectInput->itemData(
                              ui->selectProjectInput->currentIndex()).toInt());
}
void AdminHomeWindow::setName(QString name)
{
    ui->profNameLbl->setText(name);
}
