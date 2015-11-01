#include "createadminaccountcontrol.h"

CreateAdminAccountControl::CreateAdminAccountControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

CreateAdminAccountControl::~CreateAdminAccountControl() {}

void CreateAdminAccountControl::cancel() {
    _view.close();
}

void CreateAdminAccountControl::createAdminAccount(
        QString displayName, QString userName) {

    _view.close();
}
