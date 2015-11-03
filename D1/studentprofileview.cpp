#include "studentprofileview.h"
#include "ui_studentprofileview.h"
#include "editstuprofilecontrol.h"
#include <QDebug>

StudentProfileView::StudentProfileView(EditStuProfileControl &control,QWidget *parent) :
   QDialog(parent), _control(control), ui(new Ui::StudentProfileView),
   _sectionOne(0),_sectionTwo(1),_sectionThree(2),_sectionFour(3)
{
    ui->setupUi(this);
    ui->questionOneLbl->setWordWrap(true);
    ui->questionTwoLbl->setWordWrap(true);
    ui->questionThreeLbl->setWordWrap(true);
    ui->questionFourLbl->setWordWrap(true);
    ui->questionOneLbl->setText(_control.loadSection().at(_sectionOne));
    ui->questionTwoLbl->setText(_control.loadSection().at(_sectionTwo));
    ui->questionThreeLbl->setText(_control.loadSection().at(_sectionThree));
    ui->questionFourLbl->setText(_control.loadSection().at(_sectionFour));
}

StudentProfileView::~StudentProfileView()
{

}

void StudentProfileView::on_nextBtn_clicked()
{
    int count = _sectionOne+_sectionTwo+_sectionThree+_sectionFour;
    qDebug() <<"How many is count now: : "<<count;
    if(count< 100) {
      _sectionOne+=4;
      _sectionTwo+=4;
      _sectionThree+=4;
      _sectionFour+=4;
      ui->questionOneLbl->setText(_control.loadSection().at(_sectionOne));
      ui->questionTwoLbl->setText(_control.loadSection().at(_sectionTwo));
      ui->questionThreeLbl->setText(_control.loadSection().at(_sectionThree));
      ui->questionFourLbl->setText(_control.loadSection().at(_sectionFour));
    }


}

void StudentProfileView::on_prevBtn_clicked()
{
    int count = _sectionOne+_sectionTwo+_sectionThree+_sectionFour;
    if (count > 0 && _sectionOne >= 4) {  //not perfect but it works
        _sectionOne-=4;
        _sectionTwo-=4;
        _sectionThree-=4;
        _sectionFour-=4;
        ui->questionOneLbl->setText(_control.loadSection().at(_sectionOne));
        ui->questionTwoLbl->setText(_control.loadSection().at(_sectionTwo));
        ui->questionThreeLbl->setText(_control.loadSection().at(_sectionThree));
        ui->questionFourLbl->setText(_control.loadSection().at(_sectionFour));
    }
}

void StudentProfileView::on_exitBtn_clicked()
{

}
