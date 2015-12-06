#ifndef STUDENTFEATURESCOMMUNICATION_H
#define STUDENTFEATURESCOMMUNICATION_H

#include "Storage/storagemanager.h"
#include "Storage/profile.h"
#include "Storage/storage.h"
#include "Storage/project.h"
#include "Storage/student.h"

class StudentFeaturesCommunication
{
public:
    static int joinProject(storage::ProjectPtr project, storage::StudentPtr student);
    static storage::ProfilePtr getProfile(int id);
    static storage::ProjectPtr getProject(int id);
    static int editProfile(storage::ProfilePtr profile);
    static int createProfile(storage::ProfilePtr profile);
    static storage::ProjectList listJoinedProjects(storage::StudentPtr student);
    static storage::ProjectList listUnjoinedProjects(storage::StudentPtr student);
private:
    StudentFeaturesCommunication();
    void operator=(StudentFeaturesCommunication const& rhs) = delete;
    StudentFeaturesCommunication(StudentFeaturesCommunication const& rhs) = delete;
};

#endif // STUDENTFEATURESCOMMUNICATION_H
