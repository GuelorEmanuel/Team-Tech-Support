#include "storagemanager.h"
#include "storage.h"
#include "proxyproject.h"
#include "proxystudent.h"
#include "proxyprofile.h"

using namespace storage;

StorageManager* StorageManager::_instance = NULL;

StorageManager::StorageManager()
{

}

StorageManager* StorageManager::instance() {
    if (_instance == NULL) {
        _instance = new StorageManager();
    }

    return _instance;
}

StudentList StorageManager::listProjectStudents(ProjectPtr project) {
    return StudentList();
    //std::shared_ptr<std::vector<Student*>
    //int SqliteDatabase::getStudentsInProject(Project& project, std::vector<Student*> list)
}

StudentList StorageManager::getStudentsInProject(int id) {
    // Some calls to the database?

    // For now just return empty list
    return StudentList();
}

ProjectPtr StorageManager::getProject(int id)
{
    auto project = _projects.find(id);
    if (project != _projects.end()) {
        return project->second;
    } else {
        ProjectPtr newProject(std::make_shared<ProxyProject>(id));
        _projects.insert({id, newProject});
        return newProject;
    }
}

StudentPtr StorageManager::getStudent(int id)
{
    auto student = _students.find(id);
    if (student != _students.end()) {
        return student->second;
    } else {
        StudentPtr newStudent(std::make_shared<ProxyStudent>(id));
        _students.insert({id, newStudent});
        return newStudent;
    }
}

ProfilePtr StorageManager::getProfile(int id)
{
    auto profile = _profiles.find(id);
    if (profile != _profiles.end()) {
        return profile->second;
    } else {
        ProfilePtr newProfile(std::make_shared<ProxyProfile>(id));
        _profiles.insert({id, newProfile});
        return newProfile;
    }
}

AdminPtr StorageManager::getAdmin(int id)
{
    auto admin = _admins.find(id);
    if (admin != _admins.end()) {
        return admin->second;
    } else {
        AdminPtr newAdmin(std::make_shared<Admin>(id));
        _admins.insert({id, newAdmin});
        return newAdmin;
    }
}

UserPtr StorageManager::getUser(int id)
{
    auto user = _users.find(id);
    if (user != _users.end()) {
        return user->second;
    } else {
        UserPtr newUser(std::make_shared<User>(id));
        _users.insert({id, newUser});
        return newUser;
    }
}
