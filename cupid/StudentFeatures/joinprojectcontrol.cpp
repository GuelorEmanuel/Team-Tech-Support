#include "joinprojectcontrol.h"
using namespace storage;

JoinProjectControl::JoinProjectControl(ProjectPtr project,
                                       StudentPtr student, StudentHomeWindow& view)
    : _view(*this), _project(project), _student(student), _stuView(view)
{    
    _view.setModal(true);
    _view.exec();
}

/*Function: void JoinProjectControl::loadProjectSettings
 * Purpose: load selected project's settings and pass them to view
 */
void JoinProjectControl::loadProjectSettings(int id) {
    _project = StudentFeaturesCommunication::getProject(id);
    _view.refreshProjectSettings(_project);
    /*
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
    */
}

void JoinProjectControl::leaveProject()
{
    _view.close();
}

int JoinProjectControl::joinProject()
{
    int stat = StudentFeaturesCommunication::joinProject(_project, _student);
    if(!stat) {
        _stuView.updateJoinedProjects(_project->getName());
        _view.close();
    } else {
        return stat;
    }
    /*int stat = _project->registerStudent(_student);
    if(stat != 0){

        _view.close();
    }else {
        return stat;
    }*/


}
