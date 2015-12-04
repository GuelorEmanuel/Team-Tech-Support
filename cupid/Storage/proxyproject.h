#ifndef PROXYPROJECT_H
#define PROXYPROJECT_H

#include "realproject.h"
#include <vector>

class ProxyProject {

public:

    ProxyProject();
    virtual ~ProxyProject()
    virtual int getId();
    virtual void setId(int value);
    virtual int getMinTeamSize();
    virtual void setMinTeamSize(int value);
    virtual int getMaxTeamSize();
    virtual void setMaxTeamSize(int value);
    virtual QString getName();
    virtual void setName(QString value);
    virtual QString getDescription();
    virtual int setDescription(QString value);
    virtual int registerStudent(Student& student);
    virtual std::vector<Student> getStudents();
    virtual static int lookupId(QString name);
    virtual int create();
    virtual int edit();

protected:
  std::auto_ptr<RealProject> getProject();

private:
  //QPointer<RealStudent> realStudent; will use later
  std::auto_ptr<RealProject> _realProject;
  //RealStudent *;

};

#endif // PROXYPROJECT_H
