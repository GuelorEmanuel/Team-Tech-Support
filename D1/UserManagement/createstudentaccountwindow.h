#ifndef CREATESTUDENTACCOUNTWINDOW_H
#define CREATESTUDENTACCOUNTWINDOW_H

#include <QDialog>

class CreateStudentAccountControl;
namespace Ui {
    class CreateStudentAccountWindow;
}

class CreateStudentAccountWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateStudentAccountWindow(CreateStudentAccountControl &control,
                                      QWidget *parent = 0);
    ~CreateStudentAccountWindow();

private slots:
    void on_submitBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::CreateStudentAccountWindow *ui;
    CreateStudentAccountControl &_control;
};

#endif // CREATESTUDENTACCOUNTWINDOW_H
