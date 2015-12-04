#ifndef PROJECT_H
#define PROJECT_H

#include "storage.h"
#include <QString>
#include <vector>
class Student;

class Project
{
public:
    virtual ~Project();
    virtual int getId() const = 0;
    virtual void setId(int value) = 0;
    virtual int getMinTeamSize() const = 0;
    virtual void setMinTeamSize(int value) = 0;
    virtual int getMaxTeamSize() const = 0;
    virtual void setMaxTeamSize(int value) = 0;
    virtual QString getName() const = 0;
    virtual void setName(QString value) = 0;
    virtual QString getDescription() const = 0;
    virtual void setDescription(QString value) = 0;
    virtual storage::StudentList getStudents() = 0;
    virtual void setStudents(storage::StudentList students) = 0;
    virtual void registerStudent(storage::StudentPtr student) = 0;
};

#endif // PROJECT_H
