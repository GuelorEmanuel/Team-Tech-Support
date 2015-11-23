#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "adminhomeview.h"
#include "signupoptionview.h"
class MainWindowControl;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(MainWindowControl& control, QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_signUpBtn_clicked();
    void on_signInBtn_clicked();
    void on_lineEditUserName_returnPressed();

private:
    MainWindowControl& _control;
    std::auto_ptr<Ui::MainWindow> ui;
};

#endif // MAINWINDOW_H
