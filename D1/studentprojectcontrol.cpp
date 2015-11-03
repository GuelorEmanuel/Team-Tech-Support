#include "studentprojectcontrol.h"

StudentProjectControl::StudentProjectControl(int projectId):
    _view(*this),_project(new Project)
{
    _project->setId(projectId);
    loadProjectSettings(projectId);
    _view.setModal(true);
    _view.exec();
}

void StudentProjectControl::loadProjectSettings(int id) {
    qDebug() << "Getting project settings:projectID: "<<id;
    QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT * FROM project WHERE id = :id");
    qry.bindValue(":id", id);
    // Project fields are id, name, min_team_size, max_team_size, description
    if (!qry.exec()) {
        qDebug() << qry.lastError();
        return; // TODO: displaying error message to user
    } else {
        if (!qry.first()) {
            qDebug() << "Project id not found";
            return; // TODO: displaying error message to user
        }
         qDebug() << "I found you";
        _project->setId(qry.value(0).toInt());
        _project->setName(qry.value(1).toString());
        _project->setMinTeamSize(qry.value(2).toInt());
        _project->setMaxTeamSize(qry.value(3).toInt());
        _project->setDescription(qry.value(4).toString());
        _view.refreshProjectSettings(*_project);
    }
}
