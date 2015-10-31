#include <QtSql>
#include "mainWindowControl.h"
#include "mainwindow.h"
#include "signupmaincontrol.h"

MainWindowControl::MainWindowControl() : _view(*this) {
    // Connect to database
    _view.show();
}

MainWindowControl::~MainWindowControl()
{
    // Close database
}

//Function: opens Database and returns status to user:
//0 - wasn't able to open
//1- Success
//Huge note!!! db location - change it if it differs on you computer!!! Much Depends!1
int MainWindowControl::openDB()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("/home/admin/cupid/new_branch/Team-Tech-Support/D1/mydb.sqlite");

    if(!_db.open()) {
        qDebug() << "Was not able to open DB.";
        return 0;
    } else {
        qDebug() << "Success!";
        return 1;
    }
}

int MainWindowControl::signIn(QString userName)
{
    // Select username from database
    // If student, create and launch student control
    // If admin, create and launch admin control
    // Otherwise display user not found error

    // Need to check with the controller first if the model was able to connect to the database
    int stat = openDB();
    if(stat == 0) return -1;

    //_view.hide();

    QSqlQuery qry(_db);
    qDebug() << userName;
    qry.prepare("SELECT * FROM user WHERE username = '"+userName+"'");
    QString id = "";
    if(!qry.exec()){
        qDebug() << qry.lastError();
        return -1;
    } else {
        int count = 0;
        while(qry.next()){
            ++count;
            id = qry.value(3).toString();
        }
        if(count == 1) {
            qDebug() << "Login is valid";
            if(id == "0") {
                //create admin view
                qDebug() << "We caught admin!";
            } else {
                //create student view
            }
            return 1;
        } else {
            qDebug() << "Invalid login";
            _view.show();
            return 0;
        }
    }
    return 0;
    //mainWindowControl->on_buttonSignIn_clicked();
    //_view.hide();
}

void MainWindowControl::signUp()
{
    // Create and launch account creation control
    _view.hide();
    SignUpMainControl signupMainControl(_db);
    _view.show();
}
