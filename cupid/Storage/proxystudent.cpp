#include "proxystudent.h"

ProxyStudent::ProxyStudent() {
}
ProxyStudent::~ProxyStudent(){

}

QString ProxyStudent::getUserName() {
    return _userName;
}

void ProxyStudent::setUserName(QString value) {
    _userName = value;
}

QString ProxyStudent::getDisplayName() {
    return _displayName;
}

void ProxyStudent::setDisplayName(QString value) {
    _displayName = value;
}



std::auto_ptr<RealStudent> ProxyStudent::getStudent() {
    if (_realStudent.get()) {
        _realStudent.reset(new RealStudent);
    }
    return _realStudent;
}

QString ProxyStudent::getStudentId() {
    return _studentId;
}

void ProxyStudent::setStudentId(QString value) {
    _studentId = value;
}

Profile& ProxyStudent::getProfile() {
    return *_profile; // Calls copy constructor on the profile
}

void ProxyStudent::setProfile(Profile* value) {
    _profile.reset(value);
}

/*Function: void Student::createStudentUser
 * Purpose: add new student user to db
 */
int ProxyStudent::createStudentUser() {
 return 0;
}


std::vector<Project*> ProxyStudent::getProjects() {
    if (_projects.empty()) {
        //Do something here
    }

}

int ProxyStudent::joinProject(Project& project) {
    // Connect to database and add the student to the project
  return 0;
}

