#include "storagemanager.h"
#include "storage.h"
#include "proxyproject.h"
#include "proxystudent.h"
#include "proxyprofile.h"
#include "Database/database.h"

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

void StorageManager::createProject(storage::ProjectPtr project) {
    Database::instance()->createProject(project);
    _projects.insert({{project->getId(), project}});
}

StudentList StorageManager::listProjectStudents(ProjectPtr project) {
    return StudentList();
    //std::shared_ptr<std::vector<Student*>
    //int SqliteDatabase::getStudentsInProject(Project& project, std::vector<Student*> list)
}

StudentList StorageManager::getStudentsInProject(int id) {
<<<<<<< HEAD
    // Some calls to the database?
=======
>>>>>>> b66fef958785e66e76a2978217097c89894e206c
    ProjectPtr proj = getProject(id);
    Database::instance()->getStudentsInProject(proj, proj->getStudents());
    return proj->getStudents();
}

ProjectPtr StorageManager::getProject(int id)
{
    auto project = _projects.find(id);
    if (project != _projects.end()) {
        return project->second;
    } else {
        ProjectPtr newProject(std::make_shared<ProxyProject>(id));
        Database::instance()->getProject(newProject);
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
        Database::instance()->getStudent(newStudent);
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
        Database::instance()->getProfile(newProfile);
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
        Database::instance()->getAdmin(newAdmin);
        _admins.insert({id, newAdmin});
        return newAdmin;
    }
}

UserPtr StorageManager::getUser(QString username)
{
    /*auto user = _users.find(id);
    if (user != _users.end()) {
        return user->second;
    } else {*/
    UserPtr newUser(std::make_shared<User>());
    newUser->setUserName(username);
    newUser = Database::instance()->getUser(newUser);
   // _users.insert({id, newUser});
    return newUser;

}
