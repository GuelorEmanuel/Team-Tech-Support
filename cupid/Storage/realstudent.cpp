#include "realstudent.h"
#include "storage.h"
using namespace storage;

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

ProfilePtr RealStudent::getProfile() {
    return _profile; // Calls copy constructor on the profile
}

void RealStudent::setProfile(ProfilePtr value) {
    _profile.swap(value);
}

ProjectList RealStudent::getProjects() {
    return _projects;
}

void RealStudent::joinProject(ProjectPtr project) {
    // Connect to database and add the student to the project
}

bool RealStudent::operator<(const Student& rhs) const
{
    return getId() < rhs.getId();
}

bool RealStudent::operator==(const Student& rhs) const
{
    return getId() == rhs.getId();
}
