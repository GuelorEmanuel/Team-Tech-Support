#include "adminfeaturescommunication.h"
#include "Storage/storagemanager.h"
#include "Storage/storage.h"
using namespace storage;

AdminFeaturesCommunication::AdminFeaturesCommunication()
{
}

storage::ProjectPtr AdminFeaturesCommunication::getProject(int id) {
    return StorageManager::instance()->getProject(id);
}

void AdminFeaturesCommunication::createProject(ProjectPtr project) {
    StorageManager::instance()->createProject(project);
}
