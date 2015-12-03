#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <memory>
#include <vector>
#include "user.h"
#include "profile.h"
class Project;

class Student : public User
{
public:
    Student();
    virtual ~Student();
    virtual QString getStudentId();
    virtual void setStudentId(QString value);
    virtual Profile getProfile();
    virtual void setProfile(Profile* value) ;
    virtual std::vector<Project*> getProjects();
    virtual void joinProject(Project& project);
    virtual void createStudentUser();

protected:

    QString _studentId;
    std::auto_ptr<Profile> _profile;
    std::vector<Project*> _projects;
};

#endif // STUDENT_H
