#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "Storage/student.h"
#include "Storage/admin.h"
#include "Storage/project.h"
#include "Storage/profile.h"
#include <QString>
#include <vector>
#include <unordered_map>
#include <map>
#include <memory>

class StorageManager
{
public:
    typedef std::vector<std::shared_ptr<Student> > StudentList;
    typedef std::vector<std::shared_ptr<Profile> > ProfileList;
    typedef std::vector<std::shared_ptr<Project> > ProjectList;
    void createStudent (Student& student);    
    void createAdmin (Admin& admin);    
    bool userExists (QString name);
    void editProfile (Profile& profile);
    void createProject (Project& project);
    void editProject (Project& project);
    std::vector<Project> listProjects();
    std::vector<Project> listStudentProjects (Student& student) ;
    std::shared_ptr<StudentList> getStudentsInProject(std::shared_ptr<Project>);
    std::vector<Student&>& listProjectStudents(Project& project);
    std::vector<Project> listProjectsNotOfStudent (Student& student);
    void joinProject (Project& project, Student& student);
    // Cache features
    std::shared_ptr<Project> getProject(int id);
    std::shared_ptr<Student> getStudent(int id);
    std::shared_ptr<Profile> getProfile(int id);
    std::shared_ptr<Admin> getAdmin(int id);
    std::shared_ptr<User> getUser(int id);
    // Singleton features
    static StorageManager* instance();
protected:
    StorageManager();
    StorageManager(StorageManager const&); // no implementation
    void operator=(StorageManager const&); // no implementation
private:
    // Cache features
    typedef std::unordered_map<int, std::shared_ptr<Student> > StudentMap;
    typedef std::unordered_map<int, std::shared_ptr<Profile> > ProfileMap;
    typedef std::unordered_map<int, std::shared_ptr<Project> > ProjectMap;
    typedef std::unordered_map<int, std::shared_ptr<Admin> > AdminMap;
    typedef std::unordered_map<int, std::shared_ptr<User> > UserMap;
    StudentMap _students;
    ProfileMap _profiles;
    ProjectMap _projects;
    AdminMap _admins;
    UserMap _users;
    // Singleton features
    static StorageManager* _instance;
};

#endif // STORAGEMANAGER_H
