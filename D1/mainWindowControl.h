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
    MainWindowControl();
    ~MainWindowControl();
    void signUp();
    void signIn(QString userName);

private:
   QSqlDatabase _db;
   MainWindow _view;
};

#endif // MAINWINDOWCONTROL_H
