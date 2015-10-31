#ifndef SIGNUPMAINCONTROL_H
#define SIGNUPMAINCONTROL_H

#include <QtSql>
#include "signupoptionview.h"

class SignUpMainControl
{
public:
    SignUpMainControl(QSqlDatabase& db);
    void cancel();
    void createStudentAccount();
    void createAdminAccount();
private:
    QSqlDatabase& _db;
    SignupOptionView _view;
};

#endif // SIGNUPMAINCONTROL_H
