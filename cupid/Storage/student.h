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
<<<<<<< HEAD

    virtual ~Student() = 0;
    virtual QString getStudentId() = 0;
    virtual void setStudentId(QString value) = 0;
    virtual Profile& getProfile() = 0;
    virtual void setProfile(Profile* value) = 0;
    virtual std::vector<Project*> getProjects() = 0;
    virtual void joinProject(Project& project) = 0;
    virtual void createStudentUser() = 0;
=======
    Student();
    virtual ~Student();
    virtual QString getStudentId();
    virtual void setStudentId(QString value);
    virtual Profile getProfile();
    virtual void setProfile(Profile* value) ;
    virtual std::vector<Project*> getProjects();
    virtual void joinProject(Project& project);
    virtual void createStudentUser();
    virtual bool operator<(const Student& rhs) const = 0;
    virtual bool operator==(const Student& rhs) const = 0;
>>>>>>> 21ce1c8168b8f17cbc00dd6ebeadd66b45618762

    virtual QString getUserName() = 0;
    virtual void setUserName(QString value) = 0;
    virtual QString getDisplayName() = 0;
    virtual void setDisplayName(QString value) = 0;
    virtual int getId() = 0;
    virtual void setId(int value) = 0;


protected:

    QString _studentId;
    std::auto_ptr<Profile> _profile;
    std::vector<Project*> _projects;
};

#endif // STUDENT_H
