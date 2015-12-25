#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <memory>
#include <vector>
#include "user.h"
#include "storagemanager.h"
class Profile;
class Project;

class Student : public User
{
public:
    virtual ~Student();
    virtual QString getStudentId() = 0;
    virtual void setStudentId(QString value) = 0;
    virtual storage::ProfilePtr getProfile() = 0;
    virtual void setProfile(storage::ProfilePtr value) = 0;
    virtual storage::ProjectList getProjects() = 0;
    virtual void joinProject(storage::ProjectPtr project) = 0;
    virtual bool operator<(const Student& rhs) const = 0;
    virtual bool operator==(const Student& rhs) const = 0;
protected:
     Student();
     Student(int id);
};

#endif // STUDENT_H
