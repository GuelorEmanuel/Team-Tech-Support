#include "adminhomeview.h"
#include "ui_adminhomeview.h"

AdminHomeView::AdminHomeView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminHomeView)
{
    ui->setupUi(this);
    paletteBlue = new QPalette();
    paletteBlack = new QPalette();
    paletteBlue->setColor(QPalette::ButtonText,Qt::blue);
    paletteBlack->setColor(QPalette::ButtonText,Qt::black);



}

AdminHomeView::~AdminHomeView()
{
    delete ui;
    delete paletteBlue;
    delete paletteBlack;
}



void AdminHomeView::on_homeBtn_clicked()
{

}

void AdminHomeView::on_createProjectBtn_clicked()
{
    createProjectView.createProjectView();
    createProjectView.setModal(true);
    createProjectView.exec();

}

void AdminHomeView::on_signoutBtn_clicked()
{


}

void AdminHomeView::on_lisStudentBtn_clicked() {

    ui->signoutBtn->setPalette(*paletteBlue);
    //ui->lisStudentBtn->setp
    for ( int i = 0; i <10; i++)
         qDebug() << "Change meeeeeeeee";


}

void AdminHomeView::on_lisStudentInProjBtn_clicked()
{

}

void AdminHomeView::on_editProjectBtn_clicked() {
    createProjectView.editProjectView();
    createProjectView.setModal(true);
    createProjectView.exec();

}

void AdminHomeView::on_runAlgoBtn_clicked()
{

}

/*void AdminHomeView::on_listOfProjectLv_doubleClicked(const QModelIndex &index)
{

}

void AdminHomeView::on_listOfStudentsLv_doubleClicked(const QModelIndex &index)
{

}*/
