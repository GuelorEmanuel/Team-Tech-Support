#ifndef CREATESTUDENTACCOUNTVIEW_H
#define CREATESTUDENTACCOUNTVIEW_H

#include <QDialog>
class CreateStudentAccountControl;

namespace Ui {
    class CreateStudentAccountView;
}

class CreateStudentAccountView : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateStudentAccountView(CreateStudentAccountControl &control,
                                      QWidget *parent = 0);
    ~CreateStudentAccountView();

private:
    Ui::CreateStudentAccountView *ui;
    CreateStudentAccountControl &_control;
};

#endif // CREATESTUDENTACCOUNTVIEW_H
