#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <QDialog>
#include "student.h"

namespace Ui {
class StudentProfileView;
}

class StudentProfileView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProfileView(Student* student, QWidget *parent = 0);
    ~StudentProfileView();

private slots:
    void on_exitBtn_clicked();

    void on_saveBtn_clicked();

private:
    Ui::StudentProfileView *ui;
    std::auto_ptr<Student> _student;
};

#endif // STUDENTPROFILEVIEW_H
