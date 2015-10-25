#ifndef PROJECTLIST_H
#define PROJECTLIST_H

#include "project.h"

class ProjectList
{
public:
    ProjectList();
    ~ProjectList();

private:
    Project **projectList;
};

#endif // PROJECTLIST_H
