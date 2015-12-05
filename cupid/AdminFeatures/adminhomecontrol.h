#ifndef ADMINMAINCONTROL_H
#define ADMINMAINCONTROL_H

#include "adminhomewindow.h"
#include "Storage/storage.h"

class AdminHomeControl
{
public:
    AdminHomeControl(storage::AdminPtr admin);
    void createProject();
    void editProject(int projectId);
    void computeTeams(int projectId);
    void signOut();
    QString getName();
private:
    storage::AdminPtr _admin;
    AdminHomeWindow _view;    
    void getProjectList();
};

#endif // ADMINMAINCONTROL_H
