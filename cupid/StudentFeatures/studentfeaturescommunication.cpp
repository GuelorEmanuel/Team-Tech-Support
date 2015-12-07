#include "StudentFeatures/studentfeaturescommunication.h"
#include "StudentFeatures/studenthomecontrol.h"
#include "StudentFeatures/manageprofilecontrol.h"
#include <QDebug>
using namespace storage;

StudentFeaturesCommunication::StudentFeaturesCommunication()
{
}

void StudentFeaturesCommunication::showStudentHome(
        storage::StudentPtr student)
{
    StudentHomeControl shc(student);
}

ProfilePtr StudentFeaturesCommunication::showCreateProfileWindow()
{
    ManageProfileControl mpc;
    if (mpc.profileComplete())
    {
        return mpc.getCompletedProfile();
    }
    else
    {
        return NULL;
    }
}


int StudentFeaturesCommunication::joinProject(storage::ProjectPtr project, storage::StudentPtr student)
{
   return StorageManager::instance()->joinProject(project, student);
}

storage::ProfilePtr StudentFeaturesCommunication::getProfile(int id)
{
    return StorageManager::instance()->getProfile(id);
}

storage::ProjectPtr StudentFeaturesCommunication::getProject(int id)
{
    return StorageManager::instance()->getProject(id);
}

int StudentFeaturesCommunication::editProfile(storage::ProfilePtr profile)
{
    return StorageManager::instance()->editProfile(profile);
}

int StudentFeaturesCommunication::createProfile(storage::ProfilePtr profile)
{
    return StorageManager::instance()->createProfile(profile);
}

storage::ProjectList StudentFeaturesCommunication::listJoinedProjects(storage::StudentPtr student)
{
    return StorageManager::instance()->listStudentProjects(student);
}

storage::ProjectList StudentFeaturesCommunication::listUnjoinedProjects(storage::StudentPtr student)
{
    return StorageManager::instance()->listProjectsNotOfStudent(student);
}
