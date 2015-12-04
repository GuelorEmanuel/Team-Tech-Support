#include "proxystudent.h"

ProxyStudent::ProxyStudent() {
  realStudent = NULL;
}

ProxyStudent::~ProxyStudent() {

}

QString ProxyStudent::getStudentId() {
    return _studentId;
}

void ProxyStudent::setStudentId(QString value) {
    _studentId = value;
}

Profile ProxyStudent::getProfile() {
    return *_profile; // Calls copy constructor on the profile
}

void ProxyStudent::setProfile(Profile* value) {
    _profile.reset(value);
}

/*Function: void Student::createStudentUser
 * Purpose: add new student user to db
 */
void ProxyStudent::createStudentUser() {

}


std::vector<Project*> ProxyStudent::getProjects() {

}

void ProxyStudent::joinProject(Project& project) {
    // Connect to database and add the student to the project
}

