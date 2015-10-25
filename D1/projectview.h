#ifndef PROJECTVIEW_H
#define PROJECTVIEW_H

#include "project.h"

class ProjectView
{
public:
    ProjectView(Project*);
    ~ProjectView();

private:
    Project *project;
};

#endif // PROJECTVIEW_H
