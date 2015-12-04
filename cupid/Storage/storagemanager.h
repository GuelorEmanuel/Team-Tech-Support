#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "student.h"
#include "admin.h"
#include <QString>
class StorageManager
{
public:
    StorageManager();
    ~StorageManager();
    bool createStudent(const Student & student);
    Student &getStudent();
    void createAdmin(const Admin&);
    Admin& getAdmin(int id);
    User& getUser(int id);
    bool userExists(QString name);
    bool editProfile(const Profile& profile);
    Profile & getProfile(int id);
    bool createProject(const Project &project);
    bool editProject(const Project& project);
    std::vector<Project> &listOfProjects();
    std::vector<Project> &listOfJoinedProjects(const Student &student);
    std::vector<Project> &listOfUnJoinedProjects(const Student &student);

private:


};

#endif // STORAGEMANAGER_H
