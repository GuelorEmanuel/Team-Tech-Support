#include "proxystudent.h"
#include "realstudent.h"
using namespace storage;

ProxyStudent::ProxyStudent() : ProxyStudent(-1) {
}

ProxyStudent::ProxyStudent(int id) {
    _id = id;
}

ProxyStudent::~ProxyStudent() {

}

QString ProxyStudent::getStudentId() {
    return _studentId;
}

void ProxyStudent::setStudentId(QString value) {
    _studentId = value;
}

ProfilePtr ProxyStudent::getProfile() {
    return _realStudent->getProfile();
}

void ProxyStudent::setProfile(ProfilePtr value) {
    _realStudent->setProfile(value);
}

ProjectList ProxyStudent::getProjects() {
    return _realStudent->getProjects();
}

void ProxyStudent::joinProject(ProjectPtr project) {
    // Connect to database and add the student to the project
}

bool ProxyStudent::operator<(const Student& rhs) const
{
    return getId() < rhs.getId();
}

bool ProxyStudent::operator==(const Student& rhs) const
{
    return getId() == rhs.getId();
}
