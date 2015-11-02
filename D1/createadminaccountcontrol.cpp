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

//Creates new admin account
void CreateAdminAccountControl::createAdminAccount(
        QString displayName, QString userName) {
    _admin.reset(new Admin);
    _admin->setDisplayName(displayName);
    _admin->setUserName(userName);
    _admin->create();
    _view.close();
}
