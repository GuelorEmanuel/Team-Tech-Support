#ifndef EDITPROJECTCONTROL_H
#define EDITPROJECTCONTROL_H

#include <memory>
#include "project.h"

//Control class for Edit options, pointer can/will be changed to project name/id
class EditProjectControl
{
public:
    EditProjectControl();
    ~EditProjectControl();
    void editProject(QString name, QString description,
                     int minTeamSize, int maxTeamSize, int id);
private:
    std::auto_ptr<Project> _project;
};

#endif // EDITPROJECTCONTROL_H
