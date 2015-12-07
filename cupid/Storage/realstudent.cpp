#include "realstudent.h"
#include "storage.h"
#include <QDebug>
#include "Storage/realstudent.h"
#include "Storage/storage.h"
#include "Storage/storagemanager.h"
using namespace storage;

RealStudent::RealStudent(int id, QString studentId, ProfilePtr profile)
    : Student(id), _studentId(studentId), _profile(profile)
{
}

RealStudent::~RealStudent() {}

QString RealStudent::getStudentId() {
    return _studentId;
}

void RealStudent::setStudentId(QString value) {
    _studentId = value;
}

ProfilePtr RealStudent::getProfile() {
    return _profile;
}

void RealStudent::setProfile(ProfilePtr value) {
    _profile = value;
}

ProjectList RealStudent::getProjects() {
    if (!_projects)
    {
        // Using "this" doesn't work well with shared pointers,
        // so we use a workaround.
        _projects = StorageManager::instance()->
                listStudentProjects(StorageManager::instance()
                                    ->getStudent(getId()));
    }
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
