#ifndef CREATEPROJECTVIEW_H
#define CREATEPROJECTVIEW_H

#include "project.h"

class CreateProjectView
{
public:
    CreateProjectView(Project*);
    ~CreateProjectView();

private:
    Project* project;
};

#endif // CREATEPROJECTVIEW_H
