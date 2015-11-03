#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <QDialog>
#include <memory>

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
    int _sectionOne,_sectionTwo,_sectionThree,_sectionFour;
};

#endif // STUDENTPROFILEVIEW_H
