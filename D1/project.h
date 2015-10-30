#ifndef PROJECT_H
#define PROJECT_H
#include <QString>
#include "qualifications.h"

class Project
{
public:
    Project(QString, QString, Qualifications*);
    ~Project();
private:
    QString projectName;
    QString descr;
    Qualifications *quals;
};

#endif // PROJECT_H
