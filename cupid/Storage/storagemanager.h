#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "Storage/storage.h"
#include "Storage/student.h"
#include "Storage/admin.h"
#include "Storage/project.h"
#include "Storage/profile.h"
#include "Database/database.h"
#include <QString>
#include <vector>
#include <unordered_map>
#include <map>
#include <memory>

class StorageManager
{
public:
    int createStudent(storage::StudentPtr student);
    int createAdmin(storage::AdminPtr admin);
    int createProfile(storage::ProfilePtr profile);
    bool userExists(QString name);
    int editProfile(storage::ProfilePtr profile);
    int createProject(storage::ProjectPtr project);
    int editProject(storage::ProjectPtr project);
    bool findProject(int id);
    bool findProfile(int id);
    bool findStudent(int id);
    bool findAdmin(int id);
    bool findProject(QString name);
    bool findStudent(QString name);
    bool findAdmin(QString name);
    storage::ProjectList listProjects();
    storage::ProjectList listStudentProjects(storage::StudentPtr student);
    storage::StudentList getStudentsInProject(int id);
    storage::StudentList listProjectStudents(storage::ProjectPtr project);
    storage::ProjectList listProjectsNotOfStudent(storage::StudentPtr student);
    int joinProject(storage::ProjectPtr project, storage::StudentPtr student);
    // Cache features
    storage::ProjectPtr getProject(int id);
    storage::StudentPtr getStudent(int id);
    storage::ProfilePtr getProfile(int id);
    storage::AdminPtr getAdmin(int id);
    storage::UserPtr getUser(QString username);
    // Singleton features
    static StorageManager* instance();
protected:
    StorageManager();
    StorageManager(StorageManager const&); // no implementation
    void operator=(StorageManager const&); // no implementation
private:
    // Cache features    
    storage::StudentMap _students;
    storage::ProfileMap _profiles;
    storage::ProjectMap _projects;
    storage::AdminMap _admins;
    storage::UserMap _users;
    // Singleton features
    static StorageManager* _instance;
};

#endif // STORAGEMANAGER_H
