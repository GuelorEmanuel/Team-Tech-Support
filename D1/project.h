#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <vector>
#include "student.h"

class Project
{
public:
    Project();
    int      getId();
    void     setId(int value);
    int      getMinTeamSize();
    void     setMinTeamSize(int value);
    int      getMaxTeamSize();
    void     setMaxTeamSize(int value);
    QString  getName();
    void     setName(QString value);
    QString  getDescription();
    void     setDescription(QString value);
    void     registerStudent(Student& student);
    std::vector<Student> getStudents();
    ~Project();
private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    std::vector<Student> _students;
};

#endif // PROJECT_H
