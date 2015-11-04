#include "studentprofileview.h"
#include "ui_studentprofileview.h"
#include "editstuprofilecontrol.h"
#include <QDebug>

/*Student Profile View class displays both profile edition
 * AND profile creation to student.
 */
StudentProfileView::StudentProfileView(EditStuProfileControl &control,QWidget *parent) :
   QDialog(parent), _control(control), ui(new Ui::StudentProfileView),
   _sectionOne(0),_sectionTwo(1),_sectionThree(2),_sectionFour(3), _action(1)
{
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(":Images/profile")));

    this->setPalette(palette);
    ui->setupUi(this);
    ui->questionOneLbl->setWordWrap(true);
    ui->questionTwoLbl->setWordWrap(true);
    ui->questionThreeLbl->setWordWrap(true);
    ui->questionFourLbl->setWordWrap(true);

    ui->questionOneLbl->setText(_control.loadSection().at(_sectionOne));
    ui->questionTwoLbl->setText(_control.loadSection().at(_sectionTwo));
    ui->questionThreeLbl->setText(_control.loadSection().at(_sectionThree));
    ui->questionFourLbl->setText(_control.loadSection().at(_sectionFour));

    _answerCount = 5;


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
    _maxAnswers[1] = ui->questionTWoMaxCB;
    _maxAnswers[2] = ui->questionThreeMaxCB;
    _maxAnswers[3] = ui->questionFourMaxCB;


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
    int a = -1;
    int amin = -1;
    int amax = -1;
    qDebug() <<"How many is count now: : "<<count;
    if(count< 100) {
      ui->prevBtn->setEnabled(true);
      _sectionOne+=4;
      _sectionTwo+=4;
      _sectionThree+=4;
      _sectionFour+=4;
      ui->questionOneLbl->setText(_control.loadSection().at(_sectionOne));
      ui->questionTwoLbl->setText(_control.loadSection().at(_sectionTwo));
      ui->questionThreeLbl->setText(_control.loadSection().at(_sectionThree));
      ui->questionFourLbl->setText(_control.loadSection().at(_sectionFour));


        for(int i = 0; i < 4; i++) {
            a = _answers[i]->currentIndex() + 1;
            amin = _answers[i]->currentIndex() + 1;
            amax = _answers[i]->currentIndex() + 1;

            _control.addAsnwers(a, amin, amax);

            _answers[i]->clear();
            _minAnswers[i]->clear();
            _maxAnswers[i]->clear();

            addValues(i, _answerCount);
            if(_action == 1) setValues(i, _answerCount);
            ++_answerCount;
        }
    } else {
        for(int i = 0; i < 4; i++) {
            a = _answers[i]->currentIndex() + 1;
            amin = _answers[i]->currentIndex() + 1;
            amax = _answers[i]->currentIndex() + 1;

            _control.addAsnwers(a, amin, amax);
        }
        _control.updateProfile();
    }

}

//add Values
void StudentProfileView::addValues(int index, int count)
{
    qDebug() << "Here";
    if(count < 1 || count > 29) return;

    if(count == 1 || count == 5 || count == 6) {
        qDebug() << "Here";
        for(int i = 0; i < 7; i++) {
            _answers[index]->addItem(QString("%1(%2)").arg(i+1).arg(_grades[i]));
            _minAnswers[index]->addItem(QString("%1(%2)").arg(i+1).arg(_grades[i]));
            _maxAnswers[index]->addItem(QString("%1(%2)").arg(i+1).arg(_grades[i]));
        }
    } else if(count == 4) {
        for(int i = 1; i < 13; i++) {
            _answers[index]->addItem(QString("%1").arg(i));
            _minAnswers[index]->addItem(QString("%1").arg(i));
            _maxAnswers[index]->addItem(QString("%1").arg(i));
        }
    } else if(count == 2) {
        for(int i = 1; i < 6; i++) {
            _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[i-1]));
            _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[i-1]));
            _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[i-1]));
        }
    } else if(count == 7) {
        for(int i = 1; i < 6; i++) {
            if(i == 1) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[0]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[0]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[0]));
            } else if(i == 5) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[1]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[1]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_early[1]));
            } else {
                _answers[index]->addItem(QString("%1").arg(i));
                _minAnswers[index]->addItem(QString("%1").arg(i));
                _maxAnswers[index]->addItem(QString("%1").arg(i));
            }
        }
    } else if(count == 3) {
        for(int i = 1; i < 6; i++) {
            if(i == 1) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_done[0]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_done[0]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_done[0]));
            } else if(i == 5) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_done[1]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_done[1]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_done[1]));
            } else {
                _answers[index]->addItem(QString("%1").arg(i));
                _minAnswers[index]->addItem(QString("%1").arg(i));
                _maxAnswers[index]->addItem(QString("%1").arg(i));
            }
        }
    } else if(count == 28) {
        for(int i = 1; i < 6; i++) {
            if(i == 1) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_workload[0]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_workload[0]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_workload[0]));
            } else if(i == 5) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_workload[1]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_workload[1]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_workload[1]));
            } else {
                _answers[index]->addItem(QString("%1").arg(i));
                _minAnswers[index]->addItem(QString("%1").arg(i));
                _maxAnswers[index]->addItem(QString("%1").arg(i));
            }
        }
    } else if(count == 10) {
        for(int i = 1; i < 6; i++) {
            if(i == 1) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_flex[0]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_flex[0]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_flex[0]));
            } else if(i == 5) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_flex[1]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_flex[1]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_flex[1]));
            } else {
                _answers[index]->addItem(QString("%1").arg(i));
                _minAnswers[index]->addItem(QString("%1").arg(i));
                _maxAnswers[index]->addItem(QString("%1").arg(i));
            }
        }
    } else if(count > 20 && count < 27) {
        for(int i = 1; i < 6; i++) {
            if(i == 1) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_agree[0]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_agree[0]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_agree[0]));
            } else if(i == 5) {
                _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_agree[1]));
                _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_agree[1]));
                _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_agree[1]));
            } else {
                _answers[index]->addItem(QString("%1").arg(i));
                _minAnswers[index]->addItem(QString("%1").arg(i));
                _maxAnswers[index]->addItem(QString("%1").arg(i));
            }
        }
    } else {
        for(int i = 1; i < 6; i++) {
            _answers[index]->addItem(QString("%1(%2)").arg(i).arg(_status[i-1]));
            _minAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_status[i-1]));
            _maxAnswers[index]->addItem(QString("%1(%2)").arg(i).arg(_status[i-1]));
        }
    }

}

//Set current values for Profile
void StudentProfileView::setValues(int index, int count)
{
    if(count < 1 || count > 29) return;

    _answers[index]->setCurrentIndex(_control.getAnswer(count)-1);
    _minAnswers[index]->setCurrentIndex(_control.getMinAnswer(count)-1);
    _maxAnswers[index]->setCurrentIndex(_control.getMaxAnswer(count)-1);

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

        _answerCount -= 8;
        for(int i = 0; i < 4; i++) {

            _answers[i]->clear();
            _minAnswers[i]->clear();
            _maxAnswers[i]->clear();

            addValues(i, _answerCount);
            if(_action == 1) setValues(i, _answerCount);
            ++_answerCount;
        }
    } else {
        ui->prevBtn->setDisabled(true);
    }
}

void StudentProfileView::on_exitBtn_clicked()
{
    _control.exitProfile();
}

void StudentProfileView::setAction(int action)
{
    _action = action;
}
