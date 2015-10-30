#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "accountcreationcontrol.h"
#include "adminhomeview.h"
#include "signupoptionview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_signUpBtn_clicked();

    void on_signInBtn_clicked();

private:
    Ui::MainWindow *ui;
    AccountCreationControl *accountCreationControl;
    AdminHomeView adminView;
    SignupOptionView signupoptionview;
};

#endif // MAINWINDOW_H
