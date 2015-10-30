#ifndef MAINWINDOWCONTROL_H
#define MAINWINDOWCONTROL_H\

#include <QtSql>
#include "mainWindowControl.h"
#include "mainwindow.h"
#include "signupview.h"

//Control class for Edit options, pointer can/will be changed to project name/id
class MainWindowControl
{
public:
    MainWindowControl(QSqlDatabase*);
    MainWindowControl();
    ~MainWindowControl();

    int  accountExist();
    int  isdbOpened();
    void on_buttonSignIn_clicked();
    void on_buttonSignUp_clicked();


private:
   QSqlDatabase mydb;

};

#endif // MAINWINDOWCONTROL_H
