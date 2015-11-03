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

private slots:
    void on_nextBtn_clicked();

    void on_prevBtn_clicked();

    void on_exitBtn_clicked();

private:
    EditStuProfileControl &_control;
    std::auto_ptr<Ui::StudentProfileView> ui;
<<<<<<< HEAD
    int _pageCount;
    int _answerCount;
    QComboBox *_answers[4];
    QComboBox *_minAnswers[4];
    QComboBox *_maxAnswers[4];
=======
    int _sectionOne,_sectionTwo,_sectionThree,_sectionFour;
>>>>>>> 2823afed703527a04377250ed0452324f22e06b9
};

#endif // STUDENTPROFILEVIEW_H
