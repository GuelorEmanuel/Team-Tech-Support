#include "proxystudent.h"
#include "realstudent.h"
#include <QDebug>
using namespace storage;

ProxyStudent::ProxyStudent() : ProxyStudent(-1) {
}
ProxyStudent::ProxyStudent(int id) {
    _id = id;
}

ProxyStudent::ProxyStudent(QString stuID, int pId) {
    _studentId = stuID;
    _profileId = pId;
}

ProxyStudent::~ProxyStudent() {

}

QString ProxyStudent::getStudentId() {
    return _realStudent->getStudentId();
}

void ProxyStudent::setStudentId(QString value) {
    _realStudent->setStudentId(value);
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
void ProxyStudent::initRealStudent(){
    _realStudent.reset(new RealStudent(_studentId, _profileId));
}
