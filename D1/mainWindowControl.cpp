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

// Select username from database
// If student, create and launch student control
// If admin, create and launch admin control
// Otherwise display user not found error
int MainWindowControl::signIn(QString userName)
{
    int id;
    QString un = "";
    QString displayName = "";
    QString stuID = "";

    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("SELECT * FROM user WHERE username = :username");
    qry.bindValue(":username", userName);

    if(!qry.exec()){
        qDebug() << qry.lastError();
        return -1;
    } else {
        // user fields are id, username, displayname, studentid
        int count = 0;
        QVariant val;
        while(qry.next()){
            ++count;
            id = qry.value(0).toInt();
            val = qry.value(3);
            un = qry.value(1).toString();
            displayName = qry.value(2).toString();
            stuID = qry.value(3).toString();
            qDebug() <<"this is ID: "<< stuID <<": "<<val.isNull();
        }
        if(count == 1) {
            qDebug() << "Login is valid";

            if(stuID.isNull()) {
                _view.hide();
                Admin admin;
                admin.setId(id);
                admin.setUserName(un);
                admin.setDisplayName(displayName);
                AdminMainControl adminMainControl(admin);
                _view.show();
            } else {
                _view.hide();
                Student student;
                student.setId(id);
                student.setUserName(un);
                student.setDisplayName(displayName);
                student.setStudentId(stuID);
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
}

void MainWindowControl::signUp()
{
    // Create and launch account creation control
    _view.hide();
    SignUpMainControl signupMainControl;
    _view.show();
}
