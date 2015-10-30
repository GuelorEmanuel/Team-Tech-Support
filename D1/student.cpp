#include "student.h"

Student::Student() {
}

Student::~Student() {
}

QString Student::getStudentId()
{
    return _studentId;
}

void Student::setStudentId(QString value) {
    _studentId = value;
}

Profile Student::getProfile() {
    return *_profile; // Calls copy constructor on the profile
}

void Student::setProfile(Profile* value) {
    _profile.reset(value);
}

std::vector<Project*> Student::getProjects() {
    if (_projects.empty())
    {
        // Get list of projects this student has joined from the database
    }

    return _projects;
}

void Student::joinProject(Project& project) {

}
