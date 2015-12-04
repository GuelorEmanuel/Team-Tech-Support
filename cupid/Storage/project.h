#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <vector>
#include "student.h"
#include <memory>

class Project
{
public:

    virtual int getId()=0;
    virtual void setId(int value)=0;
    virtual int getMinTeamSize()=0;
    virtual void setMinTeamSize(int value)=0;
    virtual int getMaxTeamSize()=0;
    virtual void setMaxTeamSize(int value)=0;
    virtual QString getName()=0;
    virtual void setName(QString value)=0;
    virtual QString getDescription()=0;
    virtual int setDescription(QString value)=0;
    virtual int registerStudent(Student& student)=0;
    virtual std::vector<Student*> getStudents()=0;
    virtual int lookupId(QString name)=0;
    virtual int create()=0;
    virtual int edit()=0;
    virtual~Project()=0;

protected:
     Project();
};

#endif // PROJECT_H
