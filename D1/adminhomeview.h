#ifndef ADMINHOMEVIEW_H
#define ADMINHOMEVIEW_H

#include <QDialog>

namespace Ui {
class AdminHomeView;
}

class AdminHomeView : public QDialog
{
    Q_OBJECT

public:
    explicit AdminHomeView(QWidget *parent = 0);
    ~AdminHomeView();

private slots:


    void on_homeBtn_clicked();

    void on_createProjectBtn_clicked();

    void on_signoutBtn_clicked();

    void on_lisStudentBtn_clicked();

    void on_lisStudentInProjBtn_clicked();

    void on_editProjectBtn_clicked();

    void on_runAlgoBtn_clicked();

private:
    Ui::AdminHomeView *ui;
};

#endif // ADMINHOMEVIEW_H
