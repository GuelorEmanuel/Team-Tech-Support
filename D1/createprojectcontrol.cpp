#include "createprojectcontrol.h"

CreateProjectControl::CreateProjectControl() {
}

CreateProjectControl::~CreateProjectControl() {
}

void CreateProjectControl::createProject(QString name,
                                         QString description,
                                         int minTeamSize,
                                         int maxTeamSize) {
    _project.reset(new Project);
    _project->setName(name);
    _project->setDescription(description);
    _project->setMinTeamSize(minTeamSize);
    _project->setMaxTeamSize(maxTeamSize);
    _project->create();
}
