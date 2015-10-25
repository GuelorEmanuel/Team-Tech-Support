#ifndef EDITPROJECTVIEW_H
#define EDITPROJECTVIEW_H

#include "project.h"

class EditProjectView
{
public:
    EditProjectView(Project*);
    ~EditProjectView();

private:
    Project *project;
};

#endif // EDITPROJECTVIEW_H
