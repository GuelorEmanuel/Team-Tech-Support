#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <QDialog>
#include <memory>
#include <QComboBox>

class EditStuProfileControl;
namespace Ui {
class StudentProfileView;
}

class StudentProfileView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProfileView(EditStuProfileControl &control,QWidget *parent = 0);
    ~StudentProfileView();

    void addValues(int index, int count);
    void setValues(int index, int count);
    void setAction(int action);
private slots:
    void on_nextBtn_clicked();

    void on_prevBtn_clicked();

    void on_exitBtn_clicked();

private:
    EditStuProfileControl &_control;
    std::auto_ptr<Ui::StudentProfileView> ui;

    int _action;
    int _pageCount;
    int _answerCount;
    QComboBox *_answers[4];
    QComboBox *_minAnswers[4];
    QComboBox *_maxAnswers[4];

    int _sectionOne,_sectionTwo,_sectionThree,_sectionFour;

    QString _grades[8] = {"C", "C+", "B-", "B",
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

};

#endif // STUDENTPROFILEVIEW_H
