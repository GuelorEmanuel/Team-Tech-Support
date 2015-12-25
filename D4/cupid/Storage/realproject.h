#ifndef REALPROJECT_H
#define REALPROJECT_H
#include <vector>

class RealProject
{
public:
    RealProject();
    virtual ~RealProject()
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
};

#endif // REALPROJECT_H
