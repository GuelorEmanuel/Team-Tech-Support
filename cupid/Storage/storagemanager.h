#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

<<<<<<< HEAD
#include "student.h"
#include "admin.h"
#include <QString>
=======
#include "Storage/student.h"
#include "Storage/admin.h"
#include "Storage/project.h"
#include "Storage/profile.h"
#include <QString>
#include <vector>

>>>>>>> 21ce1c8168b8f17cbc00dd6ebeadd66b45618762
class StorageManager
{
public:
    StorageManager();
<<<<<<< HEAD
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


=======
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
>>>>>>> 21ce1c8168b8f17cbc00dd6ebeadd66b45618762
};

#endif // STORAGEMANAGER_H
