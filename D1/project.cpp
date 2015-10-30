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

Project::~Project()
{
}


