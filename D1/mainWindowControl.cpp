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

void MainWindowControl::signIn(QString userName)
{
    // Select username from database
    // If student, create and launch student control
    // If admin, create and launch admin control
    // Otherwise display user not found error

    // Need to check with the controller first if the model was able to connect to the database
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
