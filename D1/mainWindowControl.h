#ifndef MAINWINDOWCONTROL_H
#define MAINWINDOWCONTROL_H\

#include <QtSql>

//Control class for Edit options, pointer can/will be changed to project name/id
class MainWindowControl
{
public:
    MainWindowControl(QSqlDatabase*);
    ~MainWindowControl();

    void on_buttonSignIn_clicked();
    void on_buttonSignUp_clicked();
    int  isdbOpened();

private:
   QSqlDatabase mydb;
};

#endif // MAINWINDOWCONTROL_H
