#include "editprojectcontrol.h"

EditProjectControl::EditProjectControl(QSqlDatabase &db, int projectId) :
    _db(db), _view(*this), _projectId(projectId)
{
    _view.setModal(true);
    _view.exec();
}

EditProjectControl::~EditProjectControl() {
}

void EditProjectControl::editProject(QString name, QString description,
                                     int minTeamSize, int maxTeamSize) {
    _project.reset(new Project);
    _project->setId(_projectId);
    _project->setName(name);
    _project->setDescription(description);
    _project->setMinTeamSize(minTeamSize);
    _project->setMaxTeamSize(maxTeamSize);
    _project->create();
}
