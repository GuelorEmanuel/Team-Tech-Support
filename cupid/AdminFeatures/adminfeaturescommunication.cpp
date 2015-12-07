#include "AdminFeatures/adminfeaturescommunication.h"
#include "AdminFeatures/adminhomecontrol.h"
#include "Storage/storagemanager.h"
#include "Storage/storage.h"
#include <QDebug>
using namespace storage;

AdminFeaturesCommunication::AdminFeaturesCommunication()
{
}

storage::ProjectPtr AdminFeaturesCommunication::getProject(int id)
{
    return StorageManager::instance()->getProject(id);
}

void AdminFeaturesCommunication::createProject(ProjectPtr project)
{
    StorageManager::instance()->createProject(project);
}

void AdminFeaturesCommunication::showAdminHome(storage::AdminPtr admin)
{
    AdminHomeControl ahc(admin);
}

ProjectList AdminFeaturesCommunication::getProjectList()
{
    return StorageManager::instance()->listProjects();
}

void AdminFeaturesCommunication::editProject(ProjectPtr project)
{
    qDebug() << QString("project id %1").arg(project->getId());
    StorageManager::instance()->editProject(project);
}
