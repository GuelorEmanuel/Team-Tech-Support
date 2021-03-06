#include "createprojectcontrol.h"

CreateProjectControl::CreateProjectControl() :
 _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

CreateProjectControl::~CreateProjectControl() {
}

/*Function: void CreateProjectControl::createProject
 * Purpose: using giving information, create new project
 * Input  : QString name, QString description,
 *          int minTeamSize, int maxTeamSize
 */
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
    _view.close();
}
