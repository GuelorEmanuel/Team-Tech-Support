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
    ~StorageManager();
     int createStudent (Student& student);
     void getStudent (Student& student);
     int createAdmin (Admin& admin);
     Admin getAdmin (int id);
     User getUser (int id);
     bool userExists (QString name);
     int editProfile (Profile& profile);
     Profile getProfile (int id) ;
     int createProject (Project& project) ;
     int editProject (Project& project) ;
     std::vector<Project> &listProjects() ;
     //std::vector<Project> &listStudentProjects (Student& student) ;
     std::vector<Project> &listJoinedProjects (Student& project) ;
     std::vector<Project> &listUnjoinedProjects (Student& student) ;
     int joinProject (Project& project, Student& student) ;
};

#endif // STORAGEMANAGER_H
