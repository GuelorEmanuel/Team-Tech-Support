#ifndef ADMINMAINCONTROL_H
#define ADMINMAINCONTROL_H

#include <QtSql>
#include "adminhomeview.h"
class Admin;

class AdminMainControl
{
public:
    AdminMainControl(QSqlDatabase& db, Admin& admin);
    void createProject();
    void editProject(int projectId);
    void computeTeams(int projectId);
    void signOut();
private:
    QSqlDatabase& _db;
    AdminHomeView _view;
    Admin& _admin;
    void getProjectList();
};

#endif // ADMINMAINCONTROL_H
