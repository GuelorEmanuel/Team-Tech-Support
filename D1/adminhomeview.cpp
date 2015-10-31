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
<<<<<<< HEAD
=======

/*void AdminHomeView::on_listOfProjectLv_doubleClicked(const QModelIndex &index)
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
{

}

void AdminHomeView::on_listOfStudentsLv_doubleClicked(const QModelIndex &index)
{


}*/
>>>>>>> 50f83bcf7cab18d7e9afd81227cfcf5b1e524778
