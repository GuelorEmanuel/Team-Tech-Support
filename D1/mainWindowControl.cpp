#include <QtSql>
#include "mainWindowControl.h"
#include "mainwindow.h"
#include "signupmaincontrol.h"
#include "studentmaincontrol.h"
#include "adminmaincontrol.h"
#include "admin.h"
#include "student.h"
#include "database.h"

MainWindowControl::MainWindowControl() : _view(*this) {    
    _view.show();
    Database::getInstance().db(); // initialize database
}

MainWindowControl::~MainWindowControl()
{
    Database::getInstance().db().close();
}

int MainWindowControl::signIn(QString userName)
{
    // Select username from database
    // If student, create and launch student control
    // If admin, create and launch admin control
    // Otherwise display user not found error

    QSqlQuery qry(Database::getInstance().db());
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
        QVariant val;
        while(qry.next()){
            ++count;
            id = qry.value(3).toString();
            val = qry.value(3);

            qDebug() <<"this is ID: "<< id <<": "<<val.isNull();
        }
        if(count == 1) {
            qDebug() << "Login is valid";

            if(id.isNull()) {
                _view.hide();
                Admin admin;
                admin.setId(qry.value(0).toInt());
                admin.setUserName(qry.value(1).toString());
                admin.setDisplayName(qry.value(2).toString());
                AdminMainControl adminMainControl(admin);
                _view.show();
            } else {
                _view.hide();
                Student student;
                student.setId(qry.value(0).toInt());
                student.setUserName(qry.value(1).toString());
                student.setDisplayName(qry.value(2).toString());
                student.setStudentId(qry.value(3).toString());
                StudentMainControl studentMainControl(student);
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
    SignUpMainControl signupMainControl;
    _view.show();
}
