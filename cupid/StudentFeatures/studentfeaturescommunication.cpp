#include "StudentFeatures/studentfeaturescommunication.h"
#include "StudentFeatures/studenthomecontrol.h"

StudentFeaturesCommunication::StudentFeaturesCommunication()
{
}

void StudentFeaturesCommunication::showStudentHome(
        storage::StudentPtr student)
{
    StudentHomeControl shc(student);
}
