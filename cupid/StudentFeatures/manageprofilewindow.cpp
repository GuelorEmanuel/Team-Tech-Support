#include "StudentFeatures/manageprofilewindow.h"
#include "StudentFeatures/manageprofilecontrol.h"
#include "AlgorithmFeatures/questionlist.h"
#include "AlgorithmFeatures/question.h"
#include "ui_manageprofilewindow.h"
#include <QDebug>

/*
ManageProfileWindow::_grades[8] = {"C", "C+", "B-", "B",
                     "B+", "A-", "A", "A+"};
QString _status[5] = {"Never", "Rarely", "Sometimes",
                     "Often", "Always"};
QString _agree[2] = {"Strongly Disagree", "Strongly Agree"};

QString _flex[2]  = {"Very Inflexible", "Very Flexible"};

QString _workload[2] = {"Very High", "Very Heavy"};

QString _done[2]  = {"Just Get it Done", "Everything Must be Perfect"};

QString _early[5] = {"Very Last Minute", "Last Minute",
                    "No Tendency", "Early", "Very Early"};

QString _breaks[2] = {"Not at All", "Strongly prefer to work"};
*/

/*Student Profile View class displays both profile edition
 * AND profile creation to student.
 */
ManageProfileWindow::ManageProfileWindow(ManageProfileControl &control,
                                         QWidget *parent)
    : QDialog(parent), _control(control), ui(new Ui::ManageProfileWindow),
   _sectionOne(0),_sectionTwo(1),_sectionThree(2),_sectionFour(3)
{

    ui->setupUi(this);
    ui->questionOneLbl->setWordWrap(true);
    ui->questionTwoLbl->setWordWrap(true);
    ui->questionThreeLbl->setWordWrap(true);
    ui->questionFourLbl->setWordWrap(true);

    //ui->questionOneLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);
    //ui->questionTwoLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);
    //ui->questionThreeLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);
    //ui->questionFourLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);

    _answerCount = 0;//1;
    _action = 0;
    _pageCount = 0;

    //Set Arrays of QComboBoxes for answers
    _answers[0] = ui->questionOneCB;
    _answers[1] = ui->questionTwoCB;
    _answers[2] = ui->questionThreeCB;
    _answers[3] = ui->questionFourCB;

    _minAnswers[0] = ui->questionOneMinCB;
    _minAnswers[1] = ui->questionTwoMinCB;
    _minAnswers[2] = ui->questionThreeMinCB;
    _minAnswers[3] = ui->questionFourMinCB;

    _maxAnswers[0] = ui->questionOneMaxCB;
    _maxAnswers[1] = ui->questionTwoMaxCB;
    _maxAnswers[2] = ui->questionThreeMaxCB;
    _maxAnswers[3] = ui->questionFourMaxCB;


    ui->questionOneLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);
    ui->questionTwoLbl->setText(QuestionList::instance()->getQuestion(_sectionTwo)->prompt);//_control.loadSection().at(_sectionTwo));
    ui->questionThreeLbl->setText(QuestionList::instance()->getQuestion(_sectionThree)->prompt);//_control.loadSection().at(_sectionThree));
    ui->questionFourLbl->setText(QuestionList::instance()->getQuestion(_sectionFour)->prompt);//_control.loadSection().at(_sectionFour));

}

void ManageProfileWindow::on_nextBtn_clicked()
{
    int a = -1;
    int amin = -1;
    int amax = -1;

    if(_pageCount < 6) {
      ui->prevBtn->setEnabled(true);

        for(int i = 0; i < 4; i++) {
            int sum = _sectionOne+i;
            qDebug() << sum;
            if(sum == 0 || sum == 3 || sum == 4 || sum == 5) {
                a = _answers[i]->currentIndex();
                amin = _minAnswers[i]->currentIndex();
                amax = _maxAnswers[i]->currentIndex();
                if(amin > amax) {
                    invalidAnswerError();
                    return;
                }
            } else {
                a = _answers[i]->currentIndex() + 1;
                amin = _minAnswers[i]->currentIndex() + 1;
                amax = _maxAnswers[i]->currentIndex() + 1;
                if(amin > amax) {
                    invalidAnswerError();
                    return;
                }
            }
            _control.addAsnwers(a, amin, amax);

            _answers[i]->clear();
            _minAnswers[i]->clear();
            _maxAnswers[i]->clear();
            addValues(i, _answerCount);
            setValues(i, _answerCount);
            ++_answerCount;
        }
        _sectionOne+=4;
        _sectionTwo+=4;
        _sectionThree+=4;
        _sectionFour+=4;
        ui->questionOneLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);
        ui->questionTwoLbl->setText(QuestionList::instance()->getQuestion(_sectionTwo)->prompt);//_control.loadSection().at(_sectionTwo));
        ui->questionThreeLbl->setText(QuestionList::instance()->getQuestion(_sectionThree)->prompt);//_control.loadSection().at(_sectionThree));
        ui->questionFourLbl->setText(QuestionList::instance()->getQuestion(_sectionFour)->prompt);//_control.loadSection().at(_sectionFour));
        ++_pageCount;
    } else {
        for(int i = 0; i < 4; i++) {
            int sum = _sectionOne+i;
            if(sum == 0 || sum == 3 || sum == 4 || sum == 5) {
                a = _answers[i]->currentIndex();
                amin = _minAnswers[i]->currentIndex();
                amax = _maxAnswers[i]->currentIndex();
                if(amin > amax) {
                    invalidAnswerError();
                    return;
                }
            } else {
                a = _answers[i]->currentIndex() + 1;
                amin = _minAnswers[i]->currentIndex() + 1;
                amax = _maxAnswers[i]->currentIndex() + 1;
                if(amin > amax) {
                    invalidAnswerError();
                    return;
                }
            }

            _control.addAsnwers(a, amin, amax);
        }
       // qDebug() <<
        _control.updateProfile();
    }

    //ui->questionOneLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);
    //ui->questionTwoLbl->setText(QuestionList::instance()->getQuestion(_sectionTwo)->prompt);//_control.loadSection().at(_sectionTwo));
    //ui->questionThreeLbl->setText(QuestionList::instance()->getQuestion(_sectionThree)->prompt);//_control.loadSection().at(_sectionThree));
    //ui->questionFourLbl->setText(QuestionList::instance()->getQuestion(_sectionFour)->prompt);//_control.loadSection().at(_sectionFour));

}

//add Values
void ManageProfileWindow::addValues(int index, int count)
{
    if(count < 0 || count > 28) return;

    if(count == 0 || count == 3 || count == 4 || count == 5) {

        for(int i = 0; i < 13; i++) {
            _answers[index]->addItem(QString("%1").arg(i));
            _minAnswers[index]->addItem(QString("%1").arg(i));
            _maxAnswers[index]->addItem(QString("%1").arg(i));
        }
    } else {
        for(int i = 1; i < 6; i++) {
            _answers[index]->addItem(QString("%1").arg(i));
            _minAnswers[index]->addItem(QString("%1").arg(i));
            _maxAnswers[index]->addItem(QString("%1").arg(i));
        }
    }

}

//Set current values for Profile
void ManageProfileWindow::setValues(int index, int count)
{
    if(count < 0 || count > 28) return;
    int sum = _sectionOne+index;
    if(_action == 0) {
        _answers[index]->setCurrentIndex(0);
        _minAnswers[index]->setCurrentIndex(0);
        _maxAnswers[index]->setCurrentIndex(0);
        return;
    }
    if(sum == 0 || sum == 3 || sum == 4 || sum == 5) {
        _answers[index]->setCurrentIndex(_control.getAnswer(count));
        _minAnswers[index]->setCurrentIndex(_control.getMinAnswer(count));
        _maxAnswers[index]->setCurrentIndex(_control.getMaxAnswer(count));
    } else {
        _answers[index]->setCurrentIndex(_control.getAnswer(count)-1);
        _minAnswers[index]->setCurrentIndex(_control.getMinAnswer(count)-1);
        _maxAnswers[index]->setCurrentIndex(_control.getMaxAnswer(count)-1);
    }

}

void ManageProfileWindow::on_prevBtn_clicked()
{

    if (_pageCount > 0 ){//&& _sectionOne >= 4) {  //not perfect but it works
        _sectionOne-=4;
        _sectionTwo-=4;
        _sectionThree-=4;
        _sectionFour-=4;
        ui->questionOneLbl->setText(QuestionList::instance()->getQuestion(_sectionOne)->prompt);//_control.loadSection().at(_sectionOne));
        ui->questionTwoLbl->setText(QuestionList::instance()->getQuestion(_sectionTwo)->prompt);//_control.loadSection().at(_sectionTwo));
        ui->questionThreeLbl->setText(QuestionList::instance()->getQuestion(_sectionThree)->prompt);//_control.loadSection().at(_sectionThree));
        ui->questionFourLbl->setText(QuestionList::instance()->getQuestion(_sectionFour)->prompt);//_control.loadSection().at(_sectionFour));

        _answerCount -= 8;
        for(int i = 0; i < 4; i++) {

            _answers[i]->clear();
            _minAnswers[i]->clear();
            _maxAnswers[i]->clear();

            addValues(i, _answerCount);
            if(_action == 1) setValues(i, _answerCount);
            ++_answerCount;
        }
        --_pageCount;
    } else {
        ui->prevBtn->setDisabled(true);
    }
}

void ManageProfileWindow::on_exitBtn_clicked()
{
    _control.exitProfile();
}

void ManageProfileWindow::setAction(int action)
{
    _action = action;
}

void ManageProfileWindow::setStatus()
{
    _action = _control.getAction();
    for(int i = 0; i < 4; i++) {
        addValues(i, _answerCount);
        setValues(i, _answerCount);
        ++_answerCount;
    }
}

void ManageProfileWindow::invalidAnswerError()
{
    ui->errorLbl->setText("<font color='red'>Invalid Answers. Hint: min must be less than max.</font>");
}
