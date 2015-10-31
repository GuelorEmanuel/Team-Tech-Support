#include "signupmaincontrol.h"

SignUpMainControl::SignUpMainControl(QSqlDatabase &db) :
    _db(db), _view(*this)
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
