#include "UserManagement/logincontrol.h"
#include "UserManagement/loginwindow.h"
#include "UserManagement/usermanagementcommunication.h"
#include "StudentFeatures/studenthomecontrol.h"
#include "AdminFeatures/adminhomecontrol.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/storage.h"
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
            AdminPtr admin = UserManagementCommunication::getAdmin(
                        user->getId());
            AdminHomeControl ahc(admin);
        }
        else
        {
            StudentPtr student = UserManagementCommunication::getStudent(
                        user->getId());
            StudentHomeControl shc(student);
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
