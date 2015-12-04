#include "student.h"

Student::Student() : User(){}
Student::~Student() {}
QString Student::getUserName() {}
void Student::setUserName(QString value) {}
QString Student::getDisplayName() {}
void Student::setDisplayName(QString value) {}
int Student::getId() {}
void Student::setId(int value){}
QString Student::getStudentId(){}
void Student::setStudentId(QString value) {}
Profile& Student::getProfile() {}
void Student::setProfile(Profile* value) {}
void Student::createStudentUser(){}
std::vector<Project*> Student::getProjects() {}
void Student::joinProject(Project& project) {}

