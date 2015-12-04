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
    virtual Profile& getProfile();
    virtual void setProfile(Profile* value);
    virtual std::vector<Project*> getProjects();
    virtual void joinProject(Project& project);
    virtual void createStudentUser();

    virtual QString getUserName();
    virtual void setUserName(QString value);
    virtual QString getDisplayName();
    virtual void setDisplayName(QString value);
    virtual int getId();
    virtual void setId(int value);


};

#endif // REALSTUDENT_H