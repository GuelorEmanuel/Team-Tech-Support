#ifndef PROXYSTUDENT_H
#define PROXYSTUDENT_H

#include "student.h"
#include "realstudent.h"
#include <memory>

class ProxyStudent: public Student {

  public:
    ProxyStudent();
    virtual ~ProxyStudent();
    virtual QString getStudentId();
    virtual void setStudentId(QString value);
    virtual Profile getProfile();
    virtual void setProfile(Profile* value);
    virtual std::vector<Project*> getProjects();
    virtual void joinProject(Project& project);
    virtual void createStudentUser();
  private:
    std::auto_ptr<RealStudent> realStudent;
};

#endif // PROXYSTUDENT_H
