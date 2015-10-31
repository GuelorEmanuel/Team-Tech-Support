#ifndef STUDENTHOMEVIEW_H
#define STUDENTHOMEVIEW_H

#include <QDialog>

namespace Ui {
class StudentHomeView;
}

class StudentHomeView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentHomeView(QWidget *parent = 0);
    ~StudentHomeView();

private slots:
    void on_editProfileBtn_clicked();

    void on_signOutBtn_clicked();

    void on_projectsBtn_clicked();

    void on_joinedProjectsBtn_clicked();

private:
    Ui::StudentHomeView *ui;
};

#endif // STUDENTHOMEVIEW_H
