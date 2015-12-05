#include "UserManagement/usermanagementcommunication.h"
#include "Storage/storagemanager.h"
using namespace storage;

UserManagementCommunication::UserManagementCommunication()
{
}

UserPtr UserManagementCommunication::getUser(QString name)
{
    return StorageManager::instance()->getUser(name);
}

AdminPtr UserManagementCommunication::getAdmin(int id)
{
    return StorageManager::instance()->getAdmin(id);
}

StudentPtr UserManagementCommunication::getStudent(int id)
{
    return StorageManager::instance()->getStudent(id);
}
