#include "project.h"

Project::Project(string name, string desc, Qualifications* q) :
    projectName(name), descr(desc), quals(q)
{
}

Project::~Project()
{
    delete quals;
}


