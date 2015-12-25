#ifndef SIGNUPMAINCONTROL_H
#define SIGNUPMAINCONTROL_H

#include <QtSql>
#include "signupoptionview.h"

class SignUpMainControl
{
public:
    SignUpMainControl();
    void cancel();
    void createStudentAccount();
    void createAdminAccount();
private:
    SignupOptionView _view;
};

#endif // SIGNUPMAINCONTROL_H
