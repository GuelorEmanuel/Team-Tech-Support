#ifndef CREATESTUDENTACCOUNTVIEW_H
#define CREATESTUDENTACCOUNTVIEW_H

#include <QDialog>

namespace Ui {
class CreateStudentAccountView;
}

class CreateStudentAccountView : public QDialog
{
    Q_OBJECT

public:
    explicit CreateStudentAccountView(QWidget *parent = 0);
    ~CreateStudentAccountView();

private:
    Ui::CreateStudentAccountView *ui;
};

#endif // CREATESTUDENTACCOUNTVIEW_H
