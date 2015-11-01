#include <QtSql>
#include "mainWindowControl.h"
#include "mainwindow.h"
#include "signupmaincontrol.h"
#include "studentmaincontrol.h"
#include "adminmaincontrol.h"
#include "admin.h"
#include "student.h"

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
int MainWindowControl::openDB()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./mydb.sqlite");

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
    qry.prepare("SELECT * FROM user WHERE username = :username");
    qry.bindValue(":username", userName);
    QString id = "";
    if(!qry.exec()){
        qDebug() << qry.lastError();
        return -1;
    } else {
        // user fields are id, username, displayname, studentid
        int count = 0;
        while(qry.next()){
            ++count;
            id = qry.value(3).toString();
        }
        if(count == 1) {
            qDebug() << "Login is valid";
            if(id == "0") {
                _view.hide();
                Admin admin;
                admin.setId(qry.value(0).toInt());
                admin.setUserName(qry.value(1).toString());
                admin.setDisplayName(qry.value(2).toString());
                AdminMainControl adminMainControl(_db, admin);
                _view.show();
            } else {
                _view.hide();
                Student student;
                student.setId(qry.value(0).toInt());
                student.setUserName(qry.value(1).toString());
                student.setDisplayName(qry.value(2).toString());
                student.setStudentId(qry.value(3).toString());
                StudentMainControl studentMainControl(_db, student);
                _view.show();
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
