#include "editprojectcontrol.h"
#include "database.h"

EditProjectControl::EditProjectControl(int projectId) :
    _view(*this), _project(new Project)
{
    _project->setId(projectId);
    loadProjectSettings(projectId);
    _view.setModal(true);
    _view.exec();
}

EditProjectControl::~EditProjectControl() {
}

/*Function: void EditProjectControl::editProject
 * Purpose: using giving information, create new Project
 * Input: QString name, QString desscription,
 *        int minTeamSize, int maxTeamSize
 */
void EditProjectControl::editProject(QString name, QString description,
                                     int minTeamSize, int maxTeamSize) {
    _project->setName(name);
    _project->setDescription(description);
    _project->setMinTeamSize(minTeamSize);
    _project->setMaxTeamSize(maxTeamSize);
    _project->edit();
    _view.close();
}

/*Function: void EditProjectControl::loadProjectSettings
 * Purpose: get selected project's settings ans send it to view
 *          class
 * Input  : int id
 * Output : set of settings
 */
void EditProjectControl::loadProjectSettings(int id) {
    qDebug() << "Getting project settings";
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
        _project->setId(qry.value(0).toInt());
        _project->setName(qry.value(1).toString());
        _project->setMinTeamSize(qry.value(2).toInt());
        _project->setMaxTeamSize(qry.value(3).toInt());
        _project->setDescription(qry.value(4).toString());
        _view.refreshProjectSettings(*_project);
    }
}

void EditProjectControl::cancel() {
    _view.close();
}
