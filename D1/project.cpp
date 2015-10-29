#include "project.h"

Project::Project(QString name, QString desc, Qualifications* q) :
    projectName(name), descr(desc), quals(q)
{
}

Project::~Project()
{
    delete quals;
}


