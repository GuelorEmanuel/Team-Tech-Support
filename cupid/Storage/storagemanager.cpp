#include "storagemanager.h"
#include "storage.h"
#include "proxyproject.h"
#include "proxystudent.h"
#include "proxyprofile.h"
#include "Database/database.h"
#include <QDebug>
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
        return !Database::instance()->getProject(proj);
    }
}


bool StorageManager::findProfile(int id)
{
    auto profile = _profiles.find(id);
    if (profile != _profiles.end()) {
        return true;
    } else {
        ProfilePtr prof(std::make_shared<ProxyProfile>(id));
        return !Database::instance()->getProfile(prof);
    }
}

bool StorageManager::findStudent(int id)
{
    auto student = _students.find(id);
    if (student != _students.end()) {
        return true;
    } else {
        StudentPtr stud(std::make_shared<ProxyStudent>(id));
        return !Database::instance()->getStudent(stud);
    }
}

bool StorageManager::findAdmin(int id)
{
    auto admin = _admins.find(id);
    if (admin != _admins.end()) {
        return true;
    } else {
        AdminPtr admin(std::make_shared<Admin>(id));
        return !Database::instance()->getAdmin(admin);
    }
}

bool StorageManager::findStudent(QString name)
{

    StudentPtr stud(std::make_shared<ProxyStudent>());
    stud->setUserName(name);
    return !Database::instance()->getStudent(stud);
}

bool StorageManager::findAdmin(QString name)
{
    AdminPtr admin(std::make_shared<Admin>());
    admin->setUserName(name);
    return !Database::instance()->getAdmin(admin);
}

bool StorageManager::findProject(QString name)
{
    ProjectPtr proj(std::make_shared<ProxyProject>());
    proj->setName(name);
    return !Database::instance()->getProject(proj);
}


int StorageManager::createStudent(storage::StudentPtr student)
{
    int stat = 0;
    if(!findStudent(student->getUserName())) {
            stat = Database::instance()->createStudent(student);
            _students.insert({{student->getId(), student}});
            return stat;
    }
    return stat = 1;
}

int StorageManager::createAdmin(storage::AdminPtr admin)
{
    int stat = 0;
    if(!findAdmin(admin->getUserName())) {
            stat = Database::instance()->createAdmin(admin);
            _admins.insert({{admin->getId(), admin}});
            return stat;
    }
    return stat = 1;
}

int StorageManager::createProfile(storage::ProfilePtr profile)
{
    int stat = 0;
    if(!findStudent(profile->getUserId())) {
            stat = Database::instance()->createProfile(profile);
            _profiles.insert({{profile->getId(), profile}});
            return stat;
    }
    return stat = 1;
}

int StorageManager::createProject(storage::ProjectPtr project) {
    int stat = 0;
    if(!findProject(project->getName())) {
            stat = Database::instance()->createProject(project);
            _projects.insert({{project->getId(), project}});
            return stat;
    }
    return stat = 1;
}

int StorageManager::editProfile(storage::ProfilePtr profile)
{
    if(findProfile(profile->getId())) {
        return Database::instance()->editProfile(profile);
    }
    return 1;
}

int StorageManager::editProject(storage::ProjectPtr project)
{
    qDebug() << QString("Project id %1").arg(project->getName());
    if(findProject(project->getId())) {
        return Database::instance()->editProject(project);
    }
    return 1;
}

ProjectList StorageManager::listProjects() {
    // Retrieve all the projects
    // TODO: Make more efficient by only asking for ones
    //       we don't have in cache yet
    ProjectList projects(std::make_shared<std::vector<ProjectPtr> >());
    Database::instance()->getFullProject(projects);

    // Add the ones we don't have yet to the cache
    for (auto it = projects->begin(); it != projects->end(); ++it)
    {
        if (_projects.find((*it)->getId()) == _projects.end())
        {
            _projects.insert({(*it)->getId(), *it});
        }
    }

    return projects;
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

ProjectList StorageManager::listStudentProjects(storage::StudentPtr student)
{
    qDebug() << "Getting joined projects for " << student->getId();
    if(findStudent(student->getId())) {
        qDebug() << "id found";
        return Database::instance()->getJoinedProjectList(student);
    }
}

StudentList StorageManager::getStudentsInProject(int id) {
    ProjectPtr proj = getProject(id);
    return Database::instance()->getStudentsInProject(proj);
}

int StorageManager::joinProject(storage::ProjectPtr project, storage::StudentPtr student)
{
    if(findStudent(student->getId())
            && findProject(project->getId())) {
        return Database::instance()->addStudentToProject(student->getId(), project->getId());
    }
    return 1;
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

ProjectPtr StorageManager::getProject(QString name)
{
    ProjectPtr newProject(std::make_shared<ProxyProject>());
    newProject->setName(name);
    Database::instance()->getProject(newProject);
    auto project = _projects.find(newProject->getId());
    if (project != _projects.end()) {
        return project->second;
    } else {
        _projects.insert({newProject->getId(), newProject});
    }
    return newProject;
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
