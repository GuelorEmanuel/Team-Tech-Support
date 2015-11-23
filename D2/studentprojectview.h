#ifndef STUDENTPROJECTVIEW_H
#define STUDENTPROJECTVIEW_H

#include <QDialog>
#include <memory>
#include "project.h"

class StudentProjectControl;

namespace Ui {
class StudentProjectView;
}

class StudentProjectView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProjectView(StudentProjectControl &control, QWidget *parent = 0);
    ~StudentProjectView();

    void refreshProjectSettings(const Project& project);

private slots:
    void on_leaveProjectBtn_clicked();

    void on_joinProjectBtn_clicked();

private:
    std::auto_ptr<Ui::StudentProjectView> ui;
    StudentProjectControl &_control;
};

#endif // STUDENTPROJECTVIEW_H
