#ifndef CREATEPROJECTCONTROL_H
#define CREATEPROJECTCONTROL_H

#include <memory>
#include "project.h"

class CreateProjectControl
{
public:
    CreateProjectControl();
    ~CreateProjectControl();
    void createProject(QString name, QString description, int minTeamSize, int maxTeamSize);
private:
    std::auto_ptr<Project> _project;
};

#endif // CREATEPROJECTCONTROL_H
