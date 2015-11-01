#include "signupmaincontrol.h"

SignUpMainControl::SignUpMainControl() :
    _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void SignUpMainControl::createStudentAccount() {

}

void SignUpMainControl::createAdminAccount() {

}

void SignUpMainControl::cancel() {
    _view.close();
}
