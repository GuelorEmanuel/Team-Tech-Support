#ifndef MAINWINDOWCONTROL_H
#define MAINWINDOWCONTROL_H\

#include <QtSql>
#include "mainWindowControl.h"
#include "mainwindow.h"
#include "signupview.h"
//#include "adminhomeview.h"

//Control class for Edit options, pointer can/will be changed to project name/id
class MainWindowControl
{
public:
    MainWindowControl();
    ~MainWindowControl();
    void signUp();
    int signIn(QString userName);
    int  openDB();

private:
   QSqlDatabase _db;
   MainWindow _view;
   //AdminHomeView _adminview;
};

#endif // MAINWINDOWCONTROL_H
