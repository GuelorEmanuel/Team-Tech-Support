#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "Storage/student.h"
#include "Storage/admin.h"
#include "Storage/project.h"
#include "Storage/profile.h"
#include <QString>
#include <vector>
#include <unordered_map>

class StorageManager
{
public:
    typedef std::vector<std::shared_ptr<Student> > StudentList;
    typedef std::vector<std::shared_ptr<Profile> > ProfileList;
    typedef std::vector<std::shared_ptr<Project> > ProjectList;

    void createStudent (Student& student);
    std::shared_ptr<Student> getStudent(int id);
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
    std::shared_ptr<StudentList> getStudentsInProject(std::shared_ptr<Project>);
    std::vector<Student&>& listProjectStudents(Project& project);
    std::vector<Project> listProjectsNotOfStudent (Student& student) ;
    void joinProject (Project& project, Student& student) ;
    static StorageManager* instance();
protected:
    StorageManager();
    StorageManager(StorageManager const&); // no implementation
    void operator=(StorageManager const&); // no implementation
private:
    static StorageManager* _instance;
    std::unordered_map<int, std::shared_ptr<Student> > _students;
    std::unordered_map<int, std::shared_ptr<Profile> > _profiles;
    std::unordered_map<int, std::shared_ptr<Project> > _projects;
};

#endif // STORAGEMANAGER_H
