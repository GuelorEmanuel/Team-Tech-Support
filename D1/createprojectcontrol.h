#ifndef CREATEPROJECTCONTROL_H
#define CREATEPROJECTCONTROL_H

#include <QtSql>
#include <memory>
#include "project.h"
#include "createprojectview.h"

class CreateProjectControl
{
public:
    CreateProjectControl(QSqlDatabase& db);
    ~CreateProjectControl();
    void createProject(QString name, QString description, int minTeamSize, int maxTeamSize);
private:
    std::auto_ptr<Project> _project;
    CreateProjectView _view;
    QSqlDatabase& _db;
};

#endif // CREATEPROJECTCONTROL_H
