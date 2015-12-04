#ifndef PROXYSTUDENT_H
#define PROXYSTUDENT_H

#include "student.h"
#include "realstudent.h"
<<<<<<< HEAD
//#include <QPointer>
=======
#include <memory>
>>>>>>> 21ce1c8168b8f17cbc00dd6ebeadd66b45618762

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

<<<<<<< HEAD
    virtual QString getUserName();
    virtual void setUserName(QString value);
    virtual QString getDisplayName();
    virtual void setDisplayName(QString value);
    virtual int getId();
    virtual void setId(int value);

  protected:
    //QPointer<RealStudent> getStudent(); will use later
    std::auto_ptr<RealStudent> getStudent();

  private:
    //QPointer<RealStudent> realStudent; will use later
    std::auto_ptr<RealStudent> _realStudent;
    //RealStudent *;
=======
  private:
    std::auto_ptr<RealStudent> realStudent;
>>>>>>> 21ce1c8168b8f17cbc00dd6ebeadd66b45618762




};

#endif // PROXYSTUDENT_H
