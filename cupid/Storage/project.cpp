#include "project.h"

Project::Project(){}
int Project::getId(){}
void Project::setId(int value){}
int Project::lookupId(QString name){}
int Project::getMinTeamSize(){}
void Project::setMinTeamSize(int value) {}
int Project::getMaxTeamSize(){}
void Project::setMaxTeamSize(int value){}
QString Project::getName(){}
void Project::setName(QString value) {}
QString Project::getDescription(){}
int Project::setDescription(QString value){}
int Project::registerStudent(Student& student){}
std::vector<Student*>Project::getStudents() {}
int Project::create(){}
int Project::edit() {}
Project::~Project(){}


