#include "proxyproject.h"
#include "realproject.h"
#include "storagemanager.h"
using namespace storage;

ProxyProject::ProxyProject() : ProxyProject(-1) {
}

ProxyProject::ProxyProject(int id) : _id(id) {
}

ProxyProject::ProxyProject(QString name, QString description,
             int minTeamSize, int maxTeamSize)
    : ProxyProject(-1, name, description, minTeamSize, maxTeamSize) {
}

ProxyProject::ProxyProject(int id, QString name, QString description,
             int minTeamSize, int maxTeamSize)
    : _id(id), _name(name), _description(description),
      _minTeamSize(minTeamSize), _maxTeamSize(maxTeamSize) {
}

ProxyProject::ProxyProject(int id, QString name, QString description,
             int minTeamSize, int maxTeamSize,
             StudentList students)
    : _project(new RealProject(id, name, description,
                               minTeamSize, maxTeamSize,
                               students))
{
}

ProxyProject::~ProxyProject() {
}

int ProxyProject::getId() const {
    if (_project.get() == NULL) {
        return _id;
    } else {
        return _project->getId();
    }
}

void ProxyProject::setId(int value) {
    if (!_project) {
        _id = value;
    } else {
        _project->setId(value);
    }
}

int ProxyProject::getMinTeamSize() const {
    if (_project.get() == NULL) {
        return _minTeamSize;
    } else {
        return _project->getMinTeamSize();
    }
}

void ProxyProject::setMinTeamSize(int value) {
    if (_project.get() == NULL) {
        _minTeamSize = value;
    } else {
        _project->setMinTeamSize(value);
    }
}

int ProxyProject::getMaxTeamSize() const {
    if (_project.get() == NULL) {
        return _maxTeamSize;
    } else {
        return _project->getMaxTeamSize();
    }
}

void ProxyProject::setMaxTeamSize(int value) {
    if (!_project) {
        _maxTeamSize = value;
    } else {
        _project->setMaxTeamSize(value);
    }
}

QString ProxyProject::getName() const {
    if (!_project) {
        return _name;
    } else {
        return _project->getName();
    }
}

void ProxyProject::setName(QString value) {
    if (!_project) {
        _name = value;
    } else {
        _project->setName(value);
    }
}

QString ProxyProject::getDescription() const {
    if (_project.get() == NULL) {
        return _description;
    } else {
        return _project->getDescription();
    }
}

void ProxyProject::setDescription(QString value) {
    _description = value;
}

StudentList ProxyProject::getStudents() {
    if (_project.get() == NULL) {
        initRealProject();
    }

    return _project->getStudents();
}

void ProxyProject::setStudents(StudentList students) {
    if (_project.get() == NULL) {
        initRealProject();
    }

    _project->setStudents(students);
}

void ProxyProject::registerStudent(StudentPtr student) {
    //student.joinProject(*this);
    //_students.push_back(student);
}

void ProxyProject::initRealProject() {   
    _project.reset(new RealProject(_id, _name, _description,
                               _minTeamSize, _maxTeamSize,
                               StorageManager::instance()
                               ->getStudentsInProject(_id)));
}
