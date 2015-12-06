#ifndef CREATESTUDENTACCOUNTWINDOW_H
#define CREATESTUDENTACCOUNTWINDOW_H

#include <QDialog>
#include <memory>
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
    void displayUserNameUnavailableError();
    void displayStudentIdUnavailableError();
    void displayProfileCreationError();

private slots:
    void on_submitBtn_clicked();
    void on_cancelBtn_clicked();

private:
    CreateStudentAccountControl &_control;
    std::unique_ptr<Ui::CreateStudentAccountWindow> _ui;    
    void displayError(QString error);
};

#endif // CREATESTUDENTACCOUNTWINDOW_H
