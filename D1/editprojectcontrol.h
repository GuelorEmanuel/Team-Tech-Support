#ifndef EDITPROJECTCONTROL_H
#define EDITPROJECTCONTROL_H

#include "project.h"

//Control class for Edit options, pointer can/will be changed to project name/id
class EditProjectControl
{
public:
    EditProjectControl(Project);
    ~EditProjectControl();
private:
    Project *project;
};

#endif // EDITPROJECTCONTROL_H
