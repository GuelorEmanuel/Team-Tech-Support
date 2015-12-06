#include "UserManagement/createadminaccountcontrol.h"
#include "UserManagement/usermanagementcommunication.h"
#include "Storage/storage.h"
#include "Storage/admin.h"
using namespace storage;

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
        QString displayName, QString userName)
{
    if (!UserManagementCommunication::userNameAvailable(userName))
    {
        _view.displayUserNameUnavailableError();
        return;
    }

    AdminPtr admin(std::make_shared<Admin>());
    admin->setDisplayName(displayName);
    admin->setUserName(userName);
    UserManagementCommunication::createAdmin(admin);
    _view.close();
}
