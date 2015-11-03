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
<<<<<<< HEAD

    _answerCount = 0;

    _answers[0] = ui->questionOneCB;
    _answers[1] = ui->questionTwoCB;
    _answers[2] = ui->questionThreeCB;
    _answers[3] = ui->questionFourCB;

    _minAnswers[0] = ui->questionOneMinCB;
    _minAnswers[1] = ui->questionTwoMinCB;
    _minAnswers[2] = ui->questionThreeMinCB;
    _minAnswers[3] = ui->questionFourMinCB;

    _maxAnswers[0] = ui->questionOneMaxCB;
    _maxAnswers[1] = ui->questionTWoMaxCB;
    _maxAnswers[2] = ui->questionThreeMaxCB;
    _maxAnswers[3] = ui->questionFourMaxCB;


=======
    ui->questionOneLbl->setText(_control.loadSection().at(_sectionOne));
    ui->questionTwoLbl->setText(_control.loadSection().at(_sectionTwo));
    ui->questionThreeLbl->setText(_control.loadSection().at(_sectionThree));
    ui->questionFourLbl->setText(_control.loadSection().at(_sectionFour));
>>>>>>> 2823afed703527a04377250ed0452324f22e06b9
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


    //ui->questionOneMinCB->addItem(QString("%1").arg(_control.getMinAnswer(_answerCount+1)));
    //ui->questionOneMinCB->addItem(QString("%1").arg(_control.getMinAnswer(_answerCount+2)));
    //ui->questionOneMinCB->setCurrentIndex(_control.getMinAnswer(_answerCount+1));
    //_answers[0]->addItem(QString("%1").arg(_control.getMinAnswer(_answerCount+1)));

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
