#include "StudentFeatures/studentfeaturescommunication.h"
#include "StudentFeatures/studenthomecontrol.h"
#include "StudentFeatures/manageprofilecontrol.h"
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
