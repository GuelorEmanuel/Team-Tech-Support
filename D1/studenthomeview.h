#ifndef STUDENTHOMEVIEW_H
#define STUDENTHOMEVIEW_H

#include <QDialog>
#include <memory>

class StudentMainControl;

namespace Ui {
class StudentHomeView;
}

class StudentHomeView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentHomeView(StudentMainControl &control, QWidget *parent = 0);
    ~StudentHomeView();
    void addUnjoinedProject(int id, QString name);
    void addJoinedProject(int id, QString name);
    void setName(QString name);
    void updateJoinedProjects();

private slots:
    void on_editProfileBtn_clicked();
    void on_signOutBtn_clicked();
    void on_openProjectBtn_clicked();

private:
    std::auto_ptr<Ui::StudentHomeView> ui;
    StudentMainControl& _control;
};

#endif // STUDENTHOMEVIEW_H
