#ifndef REALSTUDENT_H
#define REALSTUDENT_H

#include "Storage/student.h"
#include "Storage/storage.h"

class RealStudent: public Student
{
public:
    explicit RealStudent(int id, QString studentId, storage::ProfilePtr);
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
    int _profileId;
    storage::ProfilePtr _profile;
    storage::ProjectList _projects;
};

#endif // REALSTUDENT_H
