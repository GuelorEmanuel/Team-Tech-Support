#include <QtSql>
#include "mainWindowControl.h"
#include "mainwindow.h"

MainWindowControl::MainWindowControl(QSqlDatabase* mydbPtr) {
  mydb = *mydbPtr;

}

MainWindowControl::~MainWindowControl()
{

}

int MainWindowControl:: isdbOpened() {
    if(!mydb.open()) {
        return false;
    }
    else {
        return true;
    }
}

void MainWindowControl::on_buttonSignIn_clicked()
{

}

void MainWindowControl::on_buttonSignUp_clicked()
{
}
