#ifndef STUDENTFEATURESCOMMUNICATION_H
#define STUDENTFEATURESCOMMUNICATION_H

<<<<<<< HEAD
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
=======
#include "Storage/storage.h"

class StudentFeaturesCommunication
{
public:    
    static void showStudentHome(storage::StudentPtr student);
    static storage::ProfilePtr showCreateProfileWindow();
private:
    StudentFeaturesCommunication();
    void operator=(
            StudentFeaturesCommunication const& rhs) = delete;
    StudentFeaturesCommunication(
            StudentFeaturesCommunication const& rhs) = delete;
>>>>>>> 1a76d4edf08078518c104ae80c86034f9765d53d
};

#endif // STUDENTFEATURESCOMMUNICATION_H
