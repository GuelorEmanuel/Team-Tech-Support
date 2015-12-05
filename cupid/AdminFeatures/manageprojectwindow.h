#ifndef MANAGEPROJECTWINDOW_H
#define MANAGEPROJECTWINDOW_H

#include <QDialog>
#include <memory>
class ManageProjectControl;

namespace Ui {
    class ManageProjectWindow;
}

class ManageProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ManageProjectWindow(ManageProjectControl &control, QWidget *parent = 0);
    ~ManageProjectWindow();
    void displayError(QString msg);

private slots:
    void on_createBtn_clicked();
    void on_cancelButton_clicked();

private:
    std::unique_ptr<Ui::ManageProjectWindow> ui;
    ManageProjectControl &_control;
};

#endif // MANAGEPROJECTWINDOW_H
