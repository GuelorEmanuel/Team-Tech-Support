#include "realstudent.h"

RealStudent::RealStudent() {

}
RealStudent::~RealStudent(){

}

QString RealStudent::getStudentId() {
    return _studentId;
}

void RealStudent::setStudentId(QString value) {
    _studentId = value;
}

Profile RealStudent::getProfile() {
    return *_profile; // Calls copy constructor on the profile
}

void RealStudent::setProfile(Profile* value) {
    _profile.reset(value);
}

/*Function: void Student::createStudentUser
 * Purpose: add new student user to db
 */
void RealStudent::createStudentUser() {

}


std::vector<Project*> RealStudent::getProjects() {

}

void RealStudent::joinProject(Project& project) {
    // Connect to database and add the student to the project
}
