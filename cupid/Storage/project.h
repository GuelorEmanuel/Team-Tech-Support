#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <vector>
#include "student.h"

class Project
{
public:
    Project();
    int getId() const;
    void setId(int value);
    int getMinTeamSize() const;
    void setMinTeamSize(int value);
    int getMaxTeamSize() const;
    void setMaxTeamSize(int value);
    QString getName() const;
    void setName(QString value);
    QString getDescription() const;
    void setDescription(QString value);
    int registerStudent(Student& student);
    std::vector<Student> getStudents();
    static int lookupId(QString name);
    void create();
    void edit();
    ~Project();
private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    //std::vector<Student> _students;
};

#endif // PROJECT_H
