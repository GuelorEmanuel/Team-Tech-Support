#include "adminhomeview.h"
#include "ui_adminhomeview.h"
#include "adminmaincontrol.h"

AdminHomeView::AdminHomeView(AdminMainControl &control, QWidget *parent) :
    QDialog(parent), _control(control),
    ui(new Ui::AdminHomeView)
{
    ui->setupUi(this);
    paletteBlue.reset(new QPalette());
    paletteBlack.reset(new QPalette());
    paletteBlue->setColor(QPalette::ButtonText,Qt::blue);
    paletteBlack->setColor(QPalette::ButtonText,Qt::black);
}

AdminHomeView::~AdminHomeView()
{
}

void AdminHomeView::on_createProjectBtn_clicked()
{
    _control.createProject();
}

void AdminHomeView::on_signoutBtn_clicked()
{
    _control.signOut();
}

void AdminHomeView::on_editProjectBtn_clicked() {
    _control.editProject(-1); // TODO: actually pass in the selected id
}

void AdminHomeView::on_runAlgoBtn_clicked()
{
    _control.computeTeams(-1); // TODO: actually pass in the selected id
}
