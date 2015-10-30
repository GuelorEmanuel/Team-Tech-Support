#ifndef ADMINHOMEVIEW_H
#define ADMINHOMEVIEW_H

#include <QDialog>
#include "createprojectview.h"
#include <QDebug>
<<<<<<< HEAD
//#include "mainwindow.h"

=======
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

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

<<<<<<< HEAD
    void on_listOfProjectLv_doubleClicked(const QModelIndex &index);

    void on_listOfStudentsLv_doubleClicked(const QModelIndex &index);
=======
    //void on_listOfProjectLv_doubleClicked(const QModelIndex &index);

    //void on_listOfStudentsLv_doubleClicked(const QModelIndex &index);
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

private:
    Ui::AdminHomeView *ui;
    CreateProjectView createProjectView;
    QPalette* paletteBlue;
    QPalette* paletteBlack;
};

#endif // ADMINHOMEVIEW_H
