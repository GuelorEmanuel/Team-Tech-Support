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
    ~Student();
    QString getStudentId();
    void setStudentId(QString value);
    Profile getProfile();
    void setProfile(Profile* value);
    std::vector<Project*> getProjects();
    void joinProject(Project& project);
private:
    QString _studentId;
    std::auto_ptr<Profile> _profile;
    std::vector<Project*> _projects;
};

#endif // STUDENT_H
