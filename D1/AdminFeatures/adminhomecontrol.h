#ifndef ADMINMAINCONTROL_H
#define ADMINMAINCONTROL_H

#include "adminhomewindow.h"
class Admin;

class AdminHomeControl
{
public:
    AdminHomeControl(Admin& admin);
    void createProject();
    void editProject(int projectId);
    void computeTeams(int projectId);
    void signOut();
    QString getName();
private:
    AdminHomeWindow _view;
    Admin& _admin;
    void getProjectList();
};

#endif // ADMINMAINCONTROL_H
