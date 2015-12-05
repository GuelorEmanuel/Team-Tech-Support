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

bool StorageManager::findProject(int id)
{
    auto project = _projects.find(id);
    if (project != _projects.end()) {
        return true;
    } else {
        ProjectPtr proj(std::make_shared<ProxyProject>(id));
        int stat = Database::instance()->getProject(proj);
        if(stat == 1) {
            return false;
        } else {
            return true;
        }
    }
}


bool StorageManager::findProfile(int id)
{
    auto profile = _profiles.find(id);
    if (profile != _profiles.end()) {
        return true;
    } else {
        ProfilePtr prof(std::make_shared<ProxyProfile>(id));
        int stat = Database::instance()->getProfile(prof);
        if(stat == 1) {
            return false;
        } else {
            return true;
        }
    }
}

bool StorageManager::findStudent(int id)
{
    auto student = _students.find(id);
    if (student != _students.end()) {
        return true;
    } else {
        StudentPtr stud(std::make_shared<ProxyStudent>(id));
        int stat = Database::instance()->getStudent(stud);
        if(stat == 1) {
            return false;
        } else {
            return true;
        }
    }
}

bool StorageManager::findAdmin(int id)
{
    auto admin = _admins.find(id);
    if (admin != _admins.end()) {
        return true;
    } else {
        AdminPtr admin(std::make_shared<Admin>(id));
        int stat = Database::instance()->getAdmin(admin);
        if(stat == 1) {
            return false;
        } else {
            return true;
        }
    }
}

bool StorageManager::findStudent(QString name)
{

    StudentPtr stud(std::make_shared<ProxyStudent>());
    stud->setUserName(name);
    int stat = Database::instance()->getStudent(stud);
    if(stat == 1) {
        return false;
    } else {
        return true;
    }
}

bool StorageManager::findAdmin(QString name)
{
    AdminPtr admin(std::make_shared<Admin>());
    admin->setUserName(name);
    int stat = Database::instance()->getAdmin(admin);
    if(stat == 1) {
        return false;
    } else {
        return true;
    }
}

bool StorageManager::findProject(QString name)
{
    ProjectPtr proj(std::make_shared<ProxyProject>());
    proj->setName(name);
    int stat = Database::instance()->getProject(proj);
    if(stat == 1) {
        return false;
    } else {
        return true;
    }
}


void StorageManager::createStudent(storage::StudentPtr student)
{
    if(!findStudent(student->getUserName())) {
            Database::instance()->createStudent(student);
            _students.insert({{student->getId(), student}});
    }
}

void StorageManager::createAdmin(storage::AdminPtr admin)
{
    if(!findAdmin(admin->getUserName())) {
            Database::instance()->createAdmin(admin);
            _admins.insert({{admin->getId(), admin}});
    }
}

void StorageManager::createProfile(storage::ProfilePtr profile)
{
    if(!findStudent(profile->getStuId())) {
            Database::instance()->createProfile(profile);
            _profiles.insert({{profile->getId(), profile}});
    }
}

void StorageManager::createProject(storage::ProjectPtr project) {
    if(!findProject(project->getName())) {
            Database::instance()->createProject(project);
            _projects.insert({{project->getId(), project}});
    }
}

void StorageManager::editProfile(storage::ProfilePtr profile)
{
    if(findProfile(profile->getId())) {
            Database::instance()->editProfile(profile);
            auto prof = _profiles.find(profile->getId());
            if (prof == _profiles.end()) {
                _profiles.insert({{profile->getId(), profile}});
            }
    }
}

void StorageManager::editProject(storage::ProjectPtr project)
{
    if(findProject(project->getId())) {
            Database::instance()->editProject(project);
            auto proj = _projects.find(project->getId());
            if (proj == _projects.end()) {
                _projects.insert({{project->getId(), project}});
            }
    }
}

StudentList StorageManager::listProjectStudents(ProjectPtr project) {
    if(findProject(project->getId())) {
        return Database::instance()->getStudentsInProject(project);
    }
}

ProjectList StorageManager::listProjectsNotOfStudent(storage::StudentPtr student)
{
    if(findStudent(student->getId())) {
        return Database::instance()->getUnjoinedProjectList(student);
    }
}

storage::ProjectList StorageManager::listStudentProjects(storage::StudentPtr student)
{
    if(findStudent(student->getId())) {
        return Database::instance()->getJoinedProjectList(student);
    }
}

StudentList StorageManager::getStudentsInProject(int id) {
    ProjectPtr proj = getProject(id);
    return Database::instance()->getStudentsInProject(proj);
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
