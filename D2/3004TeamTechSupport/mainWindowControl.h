#ifndef MAINWINDOWCONTROL_H
#define MAINWINDOWCONTROL_H

#include "mainWindowControl.h"
#include "mainwindow.h"

class MainWindowControl
{
public:
    MainWindowControl();
    ~MainWindowControl();
    void signUp();
    int signIn(QString userName);

private:
   MainWindow _view;
};

#endif // MAINWINDOWCONTROL_H
