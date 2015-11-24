#ifndef CREATEPROJECTCONTROL_H
#define CREATEPROJECTCONTROL_H

#include <memory>
#include "Storage/project.h"
#include "manageprojectwindow.h"

class ManageProjectControl
{
public:
    ManageProjectControl();
    ~ManageProjectControl();
    void createProject(QString name, QString description, QString minTeamSize, QString maxTeamSize);
    void cancel();
private:
    std::auto_ptr<Project> _project;
    ManageProjectWindow _view;
};

#endif // CREATEPROJECTCONTROL_H
