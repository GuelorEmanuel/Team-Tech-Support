#ifndef CREATEPROJECTCONTROL_H
#define CREATEPROJECTCONTROL_H

#include <QtSql>
#include <memory>
#include "project.h"
#include "createprojectview.h"

class CreateProjectControl
{
public:
    CreateProjectControl();
    ~CreateProjectControl();
    void createProject(QString name, QString description, int minTeamSize, int maxTeamSize);
    void cancel();
private:
    std::auto_ptr<Project> _project;
    CreateProjectView _view;
};

#endif // CREATEPROJECTCONTROL_H
