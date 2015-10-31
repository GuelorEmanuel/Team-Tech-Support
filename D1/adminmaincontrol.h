#ifndef ADMINMAINCONTROL_H
#define ADMINMAINCONTROL_H

#include <QtSql>
#include "adminhomeview.h"

class AdminMainControl
{
public:
    AdminMainControl(QSqlDatabase& db);
    void createProject();
    void editProject(int projectId);
    void computeTeams(int projectId);
    void signOut();
private:
    QSqlDatabase& _db;
    AdminHomeView _view;
    void getProjectList();
};

#endif // ADMINMAINCONTROL_H
