#ifndef MANAGEPROFILEWINDOW_H
#define MANAGEPROFILEWINDOW_H

#include "Storage/storage.h"
#include "ui_manageprofilewindow.h"
#include <QDialog>
#include <QComboBox>
#include "AlgorithmFeatures/questionlist.h"

class ManageProfileControl;
namespace Ui {
    class ManageProfileWindow;
}

class ManageProfileWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ManageProfileWindow(ManageProfileControl &control,
                                 QWidget *parent = 0);
    void addValues(int index, int count);
    void setValues(int index, int count);
    void setAction(int action);

private slots:
    void on_nextBtn_clicked();
    void on_prevBtn_clicked();
    void on_exitBtn_clicked();

private:
    ManageProfileControl &_control;
    std::unique_ptr<Ui::ManageProfileWindow> ui;

    int _action;
    int _pageCount;
    int _answerCount;
    QComboBox *_answers[4];
    QComboBox *_minAnswers[4];
    QComboBox *_maxAnswers[4];

    int _sectionOne,_sectionTwo,_sectionThree,_sectionFour;

    QString _grades[8];
    QString _status[5];
    QString _agree[2];

    QString _flex[2];

    QString _workload[2];

    QString _done[2];

    QString _early[5];

    QString _breaks[2];

};

#endif // MANAGEPROFILEWINDOW_H
