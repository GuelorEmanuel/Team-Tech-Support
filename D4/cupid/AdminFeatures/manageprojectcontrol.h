#ifndef CREATEPROJECTCONTROL_H
#define CREATEPROJECTCONTROL_H

#include "Storage/storage.h"
#include "manageprojectwindow.h"
#include <QString>

class ManageProjectControl
{
public:
    ManageProjectControl();
    ManageProjectControl(storage::ProjectPtr project);
    ~ManageProjectControl();
    void createProject(QString name, QString description, QString minTeamSize, QString maxTeamSize);
    void editProject(QString name, QString description, QString minTeamSize, QString maxTeamSize);
    bool getStatus();
    void cancel();
private:
    storage::ProjectPtr _project;
    ManageProjectWindow _view;
    bool _isCreating;
};

#endif // CREATEPROJECTCONTROL_H
