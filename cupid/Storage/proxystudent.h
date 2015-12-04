#ifndef PROXYSTUDENT_H
#define PROXYSTUDENT_H

#include "student.h"
#include "realstudent.h"

class ProxyStudent: public Student {

  public:
    ProxyStudent();
    virtual ~ProxyStudent();
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

  protected:
    std::auto_ptr<RealStudent> getStudent();

  private:
    //QPointer<RealStudent> realStudent; will use later
    std::auto_ptr<RealStudent> _realStudent;
    //RealStudent *;




};

#endif // PROXYSTUDENT_H
