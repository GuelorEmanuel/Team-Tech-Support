#include "UserManagement/logincontrol.h"
#include "UserManagement/loginwindow.h"
#include "UserManagement/usermanagementcommunication.h"
#include "UserManagement/accounttypeoption.h"
#include "UserManagement/createadminaccountcontrol.h"
#include "UserManagement/createstudentaccountcontrol.h"
#include "Storage/storage.h"
#include "Storage/user.h"
using namespace storage;

LoginControl::LoginControl()
    : _view(new LoginWindow(*this))
{
    _view->show();
}

LoginControl::~LoginControl()
{   
}

void LoginControl::signIn(QString userName)
{
    UserPtr user = UserManagementCommunication::getUser(userName);
    if (user == NULL)
    {
        _view->displayUserNotFoundError();
    }
    else
    {
        if (user->isAdmin())
        {
            UserManagementCommunication::showAdminHome(user);
        }
        else
        {
            UserManagementCommunication::showStudentHome(user);
        }
    }
}

void LoginControl::signUp()
{
    AccountTypeOption act(*this);
    act.setModal(true);
    act.exec();
}

void LoginControl::createAdminAccount()
{
    CreateAdminAccountControl caac;
}

void LoginControl::createStudentAccount()
{
    CreateStudentAccountControl csac;
}
