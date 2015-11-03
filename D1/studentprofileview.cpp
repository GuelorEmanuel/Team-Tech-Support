#include "studentprofileview.h"
#include "ui_studentprofileview.h"
#include "editstuprofilecontrol.h"

StudentProfileView::StudentProfileView(EditStuProfileControl &control,QWidget *parent) :
   QDialog(parent), _control(control), ui(new Ui::StudentProfileView),_pageCount(0)
{
    ui->setupUi(this);
    ui->questionOneLbl->setWordWrap(true);
    ui->questionTwoLbl->setWordWrap(true);
    ui->questionThreeLbl->setWordWrap(true);
    ui->questionFourLbl->setWordWrap(true);



}

StudentProfileView::~StudentProfileView()
{

}

void StudentProfileView::on_nextBtn_clicked()
{
    //Just trying something here: maybe return an array of of 0-3 index with updated values
    ui->questionOneLbl->setText(_control.loadSection().at(0));
    ui->questionTwoLbl->setText(_control.loadSection().at(1));
    ui->questionThreeLbl->setText(_control.loadSection().at(2));
    ui->questionFourLbl->setText(_control.loadSection().at(3));

    qDebug() << ui->questionOneCB->currentText();

}

void StudentProfileView::on_prevBtn_clicked()
{
    //Just trying something here: maybe return an array of of 0-3 index with updated values

}

void StudentProfileView::on_exitBtn_clicked()
{

}
