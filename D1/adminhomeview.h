#ifndef ADMINHOMEVIEW_H
#define ADMINHOMEVIEW_H

#include <QDialog>
#include "createprojectview.h"

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

    void on_listOfProjectLv_doubleClicked(const QModelIndex &index);

    void on_listOfStudentsLv_doubleClicked(const QModelIndex &index);

private:
    Ui::AdminHomeView *ui;
    CreateProjectView createProjectView;
    QPalette* paletteBlue;
    QPalette* paletteBlack;
};

#endif // ADMINHOMEVIEW_H
