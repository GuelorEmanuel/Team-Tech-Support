#ifndef REALPROJECT_H
#define REALPROJECT_H
#include <memory>
#include <QString>
#include <vector>
#include "realstudent.h"

class RealProject
{
public:
    RealProject();
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
    virtual std::vector<Student*> getStudents();
    virtual int lookupId(QString name);
    virtual int create();
    virtual int edit();
    virtual ~RealProject();
private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    std::vector<RealStudent> _students;
};

#endif // REALPROJECT_H
