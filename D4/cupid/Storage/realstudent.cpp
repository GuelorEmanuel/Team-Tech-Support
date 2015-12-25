#include "realstudent.h"

RealStudent::RealStudent() {

}
RealStudent::~RealStudent(){

}


QString RealStudent::getUserName() {
    return _userName;
}

void RealStudent::setUserName(QString value) {
    _userName = value;
}

QString RealStudent::getDisplayName() {
    return _displayName;
}

void RealStudent::setDisplayName(QString value) {
    _displayName = value;
}

int RealStudent::getId() {
    return _id;
}

void RealStudent::setId(int value) {
    _id = value;
}


QString RealStudent::getStudentId() {
    return _studentId;
}

void RealStudent::setStudentId(QString value) {
    _studentId = value;
}

Profile &RealStudent::getProfile() {
    return *_profile; // Calls copy constructor on the profile
}

void RealStudent::setProfile(Profile* value) {
    _profile.reset(value);
}

/*Function: void Student::createStudentUser
 * Purpose: add new student user to db
 */
int RealStudent::createStudentUser() {

}


std::vector<Project*> RealStudent::getProjects() {

}

int RealStudent::joinProject(Project& project) {
    // Connect to database and add the student to the project
}
