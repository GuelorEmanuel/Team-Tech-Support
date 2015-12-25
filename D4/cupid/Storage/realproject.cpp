#include "realproject.h"
using namespace storage;

RealProject::RealProject(int id, QString name, QString description,
             int minTeamSize, int maxTeamSize,
             StudentList students)
    : _id(id), _name(name), _description(description),
      _minTeamSize(minTeamSize), _maxTeamSize(maxTeamSize),
      _students(students) {
}

RealProject::~RealProject() {
}

int RealProject::getId() const {
    return _id;
}

void RealProject::setId(int value) {
    _id = value;
}

int RealProject::getMinTeamSize() const {
    return _minTeamSize;
}

void RealProject::setMinTeamSize(int value) {
    _minTeamSize = value;
}

int RealProject::getMaxTeamSize() const {
    return _maxTeamSize;
}

void RealProject::setMaxTeamSize(int value) {
    _maxTeamSize = value;
}

QString RealProject::getName() const {
    return _name;
}

void RealProject::setName(QString value) {
    _name = value;
}

QString RealProject::getDescription() const {
    return _description;
}

void RealProject::setDescription(QString value) {
    _description = value;
}

StudentList RealProject::getStudents() {
    return _students;
}

void RealProject::setStudents(StudentList students) {
    _students = students;
}

void RealProject::registerStudent(StudentPtr student) {
    //student.joinProject(*this);
    //_students.push_back(student);
}
