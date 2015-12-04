#include "storagemanager.h"

StorageManager* StorageManager::_instance = NULL;

StorageManager::StorageManager()
{

}

static StorageManager* StorageManager::instance() {
    if (_instance == NULL) {
        _instance = new StorageManager();
    }

    return _instance;
}

std::vector<Student&>& StorageManager::listProjectStudents(Project& project) {
    //std::shared_ptr<std::vector<Student*>
    //int SqliteDatabase::getStudentsInProject(Project& project, std::vector<Student*> list)
}

std::shared_ptr<StudentList> getStudentsInProject(std::shared_ptr<Project>) {

}

std::shared_ptr<Project> StorageManager::getProject(int id)
{
    auto project = _projects.find(id);
    if (project != _projects.end()) {
        return project;
    } else {
        std::shared_ptr<Project> newProject(
                    std::make_shared<ProxyProject>(id));
        _projects.insert({id, newProject});
        return newProject;
    }
}

std::shared_ptr<Student> StorageManager::getStudent(int id)
{
    auto student = _students.find(id);
    if (student != _students.end()) {
        return student;
    } else {
        std::shared_ptr<Student> newStudent(
                    std::make_shared<ProxyStudent>(id));
        _students.insert({id, newStudent});
        return newStudent;
    }
}

std::shared_ptr<Profile> StorageManager::getProfile(int id)
{
    auto profile = _profiles.find(id);
    if (profile != _profiles.end()) {
        return profile;
    } else {
        std::shared_ptr<Profile> newProfile(
                    std::make_shared<ProxyProfile>(id));
        _profiles.insert({id, newProfile});
        return newProfile;
    }
}

std::shared_ptr<Profile> StorageManager::getAdmin(int id)
{
    auto admin = _admins.find(id);
    if (admin != _admins.end()) {
        return admin;
    } else {
        std::shared_ptr<Admin> newAdmin(
                    std::make_shared<Admin>(id));
        _admins.insert({id, newAdmin});
        return newAdmin;
    }
}

std::shared_ptr<User> StorageManager::getUser(int id)
{
    auto user = _users.find(id);
    if (user != _users.end()) {
        return user;
    } else {
        std::shared_ptr<User> newUser(
                    std::make_shared<User>(id));
        _users.insert({id, newUser});
        return newUser;
    }
}
