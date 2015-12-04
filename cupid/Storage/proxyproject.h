#ifndef PROXYPROJECT_H
#define PROXYPROJECT_H
#include <memory>
#include "realproject.h"

class ProxyProject
{
public:
    ProxyProject();
    virtual ~ProxyProject();
    virtual int getId();
    virtual void setId(int value);
    virtual int getMinTeamSize();
    virtual int setMinTeamSize(int value);
    virtual int getMaxTeamSize();
    virtual int setMaxTeamSize(int value);
    virtual QString getName();
    virtual void setName(QString value);
    virtual QString getDescription();
    virtual int setDescription(QString value);
    virtual int registerStudent(Student& student);
    virtual std::vector<Student*> getStudents();
    virtual int lookupId(QString name);
    virtual int create();
    virtual int edit();

protected:
 std::auto_ptr<RealProject> getStudent();
private:
RealProject _realProject;
};

#endif // PROXYPROJECT_H
