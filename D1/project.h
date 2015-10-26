#ifndef PROJECT_H
#define PROJECT_H

#include "qualifications.h"

class Project
{
public:
    Project(string, string, Qualifications*);
    ~Project();
private:
    string projectName;
    string descr;
    Qualifications *quals;
};

#endif // PROJECT_H
