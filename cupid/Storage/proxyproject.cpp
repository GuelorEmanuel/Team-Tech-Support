#include "proxyproject.h"
#include "storagemanager.h"

ProxyProject::ProxyProject() : _id(-1) {
}

ProxyProject::ProxyProject(QString name, QString description,
             int minTeamSize, int maxTeamSize)
    : ProxyProject(-1, name, description, minTeamSize, maxTeamSize) {
}

ProxyProject::ProxyProject(int id, QString name, QString description,
             int minTeamSize, int maxTeamSize)
    : _id(id), _name(name), _description(description),
      _minTeamSize(minTeamSize), _maxTeamSize(maxTeamSize),
      _project(NULL) {
}

ProxyProject::ProxyProject(int id, QString name, QString description,
             int minTeamSize, int maxTeamSize,
             std::vector<Student&>& students)
    : _project(new RealProject(id, name, description,
                               minTeamSize, maxTeamSize,
                               students)) {
}

RealProject::RealProject(int id, QString name, QString description,
             int minTeamSize, int maxTeamSize,
             std::vector<Student&>& students)
    :  {
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
    if (_project.get() == NULL) {
        return _id = value;
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
    _minTeamSize = value;
}

int ProxyProject::getMaxTeamSize() const {
    if (_project.get() == NULL) {
        return _maxTeamSize;
    } else {
        return _project->getMaxTeamSize();
    }
}

void ProxyProject::setMaxTeamSize(int value) {
    _maxTeamSize = value;
}

QString ProxyProject::getName() const {
    if (_project.get() == NULL) {
        return _name;
    } else {
        return _project->getName();
    }
}

void ProxyProject::setName(QString value) {
    _name = value;
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

std::vector<Student&>& ProxyProject::getStudents() {
    if (_project.get() == NULL) {
        initRealProject();
    }

    return _project->getStudents();
}

void ProxyProject::setStudents(std::vector<Student&>& students) {
    if (_project.get() == NULL) {
        initRealProject();
    }

    _project->setStudents(students);
}

void ProxyProject::registerStudent(Student& student) {
    student.joinProject(*this);
    _students.push_back(student);
}

void ProxyProject::initRealProject() {
    std::vector<Student&>& students
            = StorageManager::instance()->getStudentsInProject(*this);
    _project = new RealProject(_id, _name, _description,
                               _minTeamSize, _maxTeamSize,
                               students);
}
