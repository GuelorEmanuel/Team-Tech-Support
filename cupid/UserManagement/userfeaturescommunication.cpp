#include "UserManagement/usermanagementcommunication.h"
#include "AdminFeatures/adminfeaturescommunication.h"
#include "StudentFeatures/studentfeaturescommunication.h"
#include "Storage/storagemanager.h"
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

void UserManagementCommunication::showAdminHome(storage::UserPtr user)
{
    AdminFeaturesCommunication::showAdminHome(
                StorageManager::instance()->getAdmin(user->getId()));
}

void UserManagementCommunication::showStudentHome(storage::UserPtr user)
{
    StudentFeaturesCommunication::showStudentHome(
                StorageManager::instance()->getStudent(user->getId()));
}
