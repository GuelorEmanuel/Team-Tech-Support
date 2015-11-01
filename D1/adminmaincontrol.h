#ifndef ADMINMAINCONTROL_H
#define ADMINMAINCONTROL_H

#include <QtSql>
#include "adminhomeview.h"
class Admin;

class AdminMainControl
{
public:
    AdminMainControl(Admin& admin);
    void createProject();
    void editProject(int projectId);
    void computeTeams(int projectId);
    void signOut();
private:
    AdminHomeView _view;
    Admin& _admin;
    void getProjectList();
};

#endif // ADMINMAINCONTROL_H
