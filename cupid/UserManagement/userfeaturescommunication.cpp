#include "UserManagement/usermanagementcommunication.h"
#include "AdminFeatures/adminfeaturescommunication.h"
#include "StudentFeatures/studentfeaturescommunication.h"
#include "Storage/storagemanager.h"
#include <QDebug>
using namespace storage;

UserManagementCommunication::UserManagementCommunication()
{
}

UserPtr UserManagementCommunication::getUser(QString name)
{
    return StorageManager::instance()->getUser(name);
}

StudentPtr UserManagementCommunication::getStudent(int id)
{
    return StorageManager::instance()->getStudent(id);
}

void UserManagementCommunication::showAdminHome(UserPtr user)
{
    AdminFeaturesCommunication::showAdminHome(
                StorageManager::instance()->getAdmin(user->getId()));
}

void UserManagementCommunication::showStudentHome(UserPtr user)
{
    StudentPtr student;
    std::make_shared<StudentPtr>(student);
    student = StorageManager::instance()->getStudent(user->getId());
    StudentFeaturesCommunication::showStudentHome(
                StorageManager::instance()->getStudent(user->getId()));
}

bool UserManagementCommunication::userNameAvailable(QString name)
{
    return StorageManager::instance()->getUser(name) == NULL;
}

bool UserManagementCommunication::studentIdAvailable(QString id)
{
    // TODO: Implement this
    return true;
}

void UserManagementCommunication::createAdmin(AdminPtr admin)
{
    StorageManager::instance()->createAdmin(admin);
}

ProfilePtr UserManagementCommunication::showCreateProfileWindow()
{
    return StudentFeaturesCommunication::showCreateProfileWindow();
}

void UserManagementCommunication::createStudentAndProfile(StudentPtr student)
{
    StorageManager::instance()->createStudent(student);
    student->getProfile()->setUserId(student->getId());
    StorageManager::instance()->createProfile(student->getProfile());

}
