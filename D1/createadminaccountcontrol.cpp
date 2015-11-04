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

/* Function: void CreateAdminAccountControl::createAdminAccount
 * Purpose : using information given, create new admin user
 * input   : QString displayName, QString userName
 */
void CreateAdminAccountControl::createAdminAccount(
        QString displayName, QString userName) {
    _admin.reset(new Admin);
    _admin->setDisplayName(displayName);
    _admin->setUserName(userName);
    _admin->create();
    _view.close();
}
