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

    //ui->questionOneMinCB->addItem(QString("%1").arg(_control.getMinAnswer(_answerCount+1)));
    //ui->questionOneMinCB->addItem(QString("%1").arg(_control.getMinAnswer(_answerCount+2)));
    //ui->questionOneMinCB->setCurrentIndex(_control.getMinAnswer(_answerCount+1));
    //_answers[0]->addItem(QString("%1").arg(_control.getMinAnswer(_answerCount+1)));

}

void StudentProfileView::on_prevBtn_clicked()
{
    //Just trying something here: maybe return an array of of 0-3 index with updated values

}

void StudentProfileView::on_exitBtn_clicked()
{

}
