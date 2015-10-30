#include "editprojectcontrol.h"

EditProjectControl::EditProjectControl() {
}

EditProjectControl::~EditProjectControl() {
}

void EditProjectControl::editProject(QString name, QString description,
                                     int minTeamSize, int maxTeamSize,
                                     int id) {
    _project.reset(new Project);
    _project->setId(id);
    _project->setName(name);
    _project->setDescription(description);
    _project->setMinTeamSize(minTeamSize);
    _project->setMaxTeamSize(maxTeamSize);
    _project->create();
}
