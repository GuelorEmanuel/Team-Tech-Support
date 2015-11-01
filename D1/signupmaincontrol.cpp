#include "signupmaincontrol.h"
#include "createadminaccountcontrol.h"

SignUpMainControl::SignUpMainControl() :
    _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void SignUpMainControl::createStudentAccount() {

}

void SignUpMainControl::createAdminAccount() {
    CreateAdminAccountControl c;
}

void SignUpMainControl::cancel() {
    _view.close();
}
