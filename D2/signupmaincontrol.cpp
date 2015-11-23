#include "signupmaincontrol.h"
#include "createadminaccountcontrol.h"
#include "createstudentaccountcontrol.h"

SignUpMainControl::SignUpMainControl() :
    _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void SignUpMainControl::createStudentAccount() {
    CreateStudentAccountControl c;
}

void SignUpMainControl::createAdminAccount() {
    CreateAdminAccountControl c;
}

void SignUpMainControl::cancel() {
    _view.close();
}
