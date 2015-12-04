#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "Storage/student.h"
#include "Storage/admin.h"
#include "Storage/project.h"
#include "Storage/profile.h"
#include <QString>
#include <vector>

class StorageManager
{
public:
    StorageManager();
     void createStudent (Student& student);
     void getStudent (Student& student);
     void createAdmin (Admin& admin);
     Admin getAdmin (int id);
     User getUser (int id);
     bool userExists (QString name);
     void editProfile (Profile& profile);
     Profile getProfile (int id) ;
     void createProject (Project& project) ;
     void editProject (Project& project) ;
     std::vector<Project> listProjects() ;
     std::vector<Project> listStudentProjects (Student& student) ;
     std::vector<Student> listProjectStudents (Project& project) ;
     std::vector<Project> listProjectsNotOfStudent (Student& student) ;
     void joinProject (Project& project, Student& student) ;
};

#endif // STORAGEMANAGER_H
