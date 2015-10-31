#include "project.h"

Project::Project() : _id(-1)
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

std::vector<Student> Project::getStudents() {
    // Connect to database and return a list of students in the project
}

void Project::create() {
    // Connect to database and insert a new project
    // Make sure to set id to the id the database autogenerates
}

void Project::edit() {
    // Connect to the database and update the project settings
    // Make sure to abort if id is -1
}

Project::~Project()
{

}


