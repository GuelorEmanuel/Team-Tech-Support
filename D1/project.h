#ifndef PROJECT_H
#define PROJECT_H
#include <QString>
<<<<<<< HEAD
#include "qualifications.h"
=======
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

class Project
{
public:
<<<<<<< HEAD
    Project(QString, QString, Qualifications*);
    ~Project();
private:
    QString projectName;
    QString descr;
    Qualifications *quals;
=======
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
    ~Project();
private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
};

#endif // PROJECT_H
