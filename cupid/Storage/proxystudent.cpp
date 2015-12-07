#include "proxystudent.h"
#include "realstudent.h"
#include <QDebug>
#include "Storage/proxystudent.h"
#include "Storage/realstudent.h"
#include "Storage/storage.h"
using namespace storage;

ProxyStudent::ProxyStudent() : Student(), _profileId(-1) {
}

ProxyStudent::ProxyStudent(int id) : Student(id), _profileId(id)
{
}

ProxyStudent::ProxyStudent(int id, QString studentId)
    : Student(id), _studentId(studentId), _profileId(id)
{
}

ProxyStudent::ProxyStudent(int id, QString studentId, int profileId)
    : Student(id), _studentId(studentId), _profileId(profileId)
{
    qDebug() << "ProxyStudent::ProxyStudent(userId=" << id << ", profileId=" << profileId << ")";
}

ProxyStudent::~ProxyStudent() {}

QString ProxyStudent::getStudentId() {
    if (!_realStudent) {
        return _studentId;
    } else {
        return _realStudent->getStudentId();
    }
}

void ProxyStudent::setStudentId(QString value) {
    if (!_realStudent) {
        _studentId = value;
    } else {
        _realStudent->setStudentId(value);
    }
}

ProfilePtr ProxyStudent::getProfile() {
    if (!_realStudent) {
        initRealStudent();
    }
    return _realStudent->getProfile();
}

void ProxyStudent::setProfile(ProfilePtr value) {
    qDebug() << "ProxyStudent::setProfile(userId=" << _id << ", profileId=" << value->getId() << ")";
    if (!_realStudent) {
        initRealStudent();
    }
    _realStudent->setProfile(value);
}

ProjectList ProxyStudent::getProjects() {
    if (!_realStudent) {
        initRealStudent();
    }
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

void ProxyStudent::initRealStudent()
{
    ProfilePtr profile(StorageManager::instance()->getProfile(_profileId));
    _realStudent.reset(new RealStudent(_id, _studentId, profile));
}
