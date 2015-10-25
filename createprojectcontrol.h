#ifndef CREATEPROJECTCONTROL_H
#define CREATEPROJECTCONTROL_H

#include "project.h"

class CreateProjectControl
{
public:
    CreateProjectControl(Project*);
    ~CreateProjectControl();
private:
    Project *project;
};

#endif // CREATEPROJECTCONTROL_H
