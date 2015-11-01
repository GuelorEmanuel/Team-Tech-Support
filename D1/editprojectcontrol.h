#ifndef EDITPROJECTCONTROL_H
#define EDITPROJECTCONTROL_H

#include <QtSql>
#include <memory>
#include "project.h"
#include "editprojectview.h"

class EditProjectControl
{
public:
    EditProjectControl(int projectId);
    ~EditProjectControl();
    void editProject(QString name, QString description,
                     int minTeamSize, int maxTeamSize);
private:
    std::auto_ptr<Project> _project;
    EditProjectView _view;
    int _projectId;
};

#endif // EDITPROJECTCONTROL_H
