#include "UserManagement/createstudentaccountwindow.h"
#include "UserManagement/createstudentaccountcontrol.h"
#include "UserManagement/usermanagementcommunication.h"
#include "Storage/storage.h"
#include "Storage/proxystudent.h"
using namespace storage;

CreateStudentAccountControl::CreateStudentAccountControl()
    : _view(new CreateStudentAccountWindow(*this))
{
    _view->setModal(true);
    _view->exec();
}

void CreateStudentAccountControl::cancel()
{
    _view->close();
}

void CreateStudentAccountControl::createAccount(
        QString displayName, QString userName, QString studentId)
{
    if (!UserManagementCommunication::userNameAvailable(userName))
    {
        _view->displayUserNameUnavailableError();
        return;
    }

    if (!UserManagementCommunication::studentIdAvailable(studentId))
    {
        _view->displayStudentIdUnavailableError();
        return;
    }

    ProfilePtr profile(UserManagementCommunication::showCreateProfileWindow());

    if (!profile)
    {
        _view->displayProfileCreationError();
        return;
    }

    StudentPtr student(std::make_shared<ProxyStudent>());
    student->setDisplayName(displayName);
    student->setStudentId(studentId);
    student->setUserName(userName);
    student->setProfile(profile);

    UserManagementCommunication::createStudentAndProfile(student);

    _view->close();
}

CreateStudentAccountControl::~CreateStudentAccountControl() {}
