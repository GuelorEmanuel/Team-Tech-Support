#include "project.h"

<<<<<<< HEAD
Project::Project(QString name, QString desc, Qualifications* q) :
    projectName(name), descr(desc), quals(q)
{
}

Project::~Project()
{
    delete quals;
=======
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

Project::~Project()
{
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
}


