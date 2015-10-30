#include "project.h"

Project::Project()
{
}

int Project::getId() {
    return _id;
}

void Project::setId(int value) {
    _id = value;
}

int Project::getMinTeamSize() {
    return _minTeamSize;
}

void Project::setMinTeamSize(int value) {
    _minTeamSize = value;
}

int Project::getMaxTeamSize() {
    return _maxTeamSize;
}

void Project::setMaxTeamSize(int value) {
    _maxTeamSize = value;
}

QString Project::getName() {
    return _name;
}

void Project::setName(QString value) {
    _name = value;
}

QString Project::getDescription() {
    return _description;
}

void Project::setDescription(QString value) {
    _description = value;
}

void Project::registerStudent(Student& student) {
    // Connect to database and make sure the student is in the project
}

std::vector<Student> getStudents() {
    // Connect to database and return a list of students in the project
}

Project::~Project()
{
}


