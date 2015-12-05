#include "UserManagement/logincontrol.h"
#include "UserManagement/loginwindow.h"
#include "UserManagement/usermanagementcommunication.h"
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
    // Create and launch account creation control
    _view->hide();
    //SignUpMainControl signupMainControl;
    _view->show();
}
