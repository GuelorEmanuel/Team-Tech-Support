#ifndef REALSTUDENT_H
#define REALSTUDENT_H

#include "student.h"

class RealStudent: public Student
{
public:
    RealStudent();
    virtual ~RealStudent();
    virtual QString getStudentId();
    virtual void setStudentId(QString value);
    virtual storage::ProfilePtr getProfile();
    virtual void setProfile(storage::ProfilePtr value);
    virtual storage::ProjectList getProjects();
    virtual void joinProject(storage::ProjectPtr project);
    virtual bool operator<(const Student& rhs) const;
    virtual bool operator==(const Student& rhs) const;

private:
    QString _studentId;
    storage::ProfilePtr _profile;
    storage::ProjectList _projects;
};

#endif // REALSTUDENT_H
