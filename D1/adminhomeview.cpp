#include "adminhomeview.h"
#include "ui_adminhomeview.h"
#include "adminmaincontrol.h"

AdminHomeView::AdminHomeView(AdminMainControl &control, QWidget *parent) :
    QDialog(parent), _control(control),
    ui(new Ui::AdminHomeView)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/admin")));

    this->setPalette(palette);
    ui->setupUi(this);
    paletteBlue.reset(new QPalette());
    paletteBlack.reset(new QPalette());
    paletteBlue->setColor(QPalette::ButtonText,Qt::blue);
    paletteBlack->setColor(QPalette::ButtonText,Qt::black);
}

AdminHomeView::~AdminHomeView()
{
}

void AdminHomeView::addProject(int id, QString name) {
    ui->selectProjectInput->addItem(name, id);
}

void AdminHomeView::on_createProjectBtn_clicked()
{
    _control.createProject();
}

void AdminHomeView::on_signoutBtn_clicked()
{
    _control.signOut();
}

/* Function: void AdminHomeView::on_editProjectBtn_clicked()
 * Purpose : if project is selected, call control class to open it,
 *           if not - ignore signal.
 */
void AdminHomeView::on_editProjectBtn_clicked() {
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
void AdminHomeView::on_runAlgoBtn_clicked()
{
    // Do nothing if they haven't selected a project
    if (ui->selectProjectInput->currentIndex() == 0) return;

    // Pass the project ID to compute best teams
    _control.computeTeams(ui->selectProjectInput->itemData(
                              ui->selectProjectInput->currentIndex()).toInt());
}
