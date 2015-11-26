#ifndef PROXYSTUDENT_H
#define PROXYSTUDENT_H

#include "student.h"
#include "realstudent.h"
#include <QPointer>

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

  protected:
    //QPointer<RealStudent> getStudent(); will use later
    RealStudent *getStudent();

  private:
    //QPointer<RealStudent> realStudent; will use later
    RealStudent *realStudent;




};

#endif // PROXYSTUDENT_H
