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
                                         QString minTeamSize,
                                         QString maxTeamSize) {

    // Check if all of the fields have been filled

    if(name.isEmpty() || minTeamSize.isEmpty()
            || description.isEmpty() || maxTeamSize.isEmpty()) {
        _view.displayError("Please fill out all fields");
        return;
    }

    bool isInt = false;

    int min = minTeamSize.toInt(&isInt);
    if (!isInt || min < 1) {
        _view.displayError("Invalid min team size");
        return;
    }

    int max = maxTeamSize.toInt(&isInt);
    if (!isInt || max < 1) {
        _view.displayError("Invalid max team size");
        return;
    }

    if (max < min) {
        _view.displayError("Max cannot be less than min");
        return;
    }

    // Fields are okay, create project

    // TODO: See what happens if you try to create a project and the
    //       project name is already taken

    _project.reset(new Project);
    _project->setName(name);
    _project->setDescription(description);
    _project->setMinTeamSize(min);
    _project->setMaxTeamSize(max);
    _project->create();
    _view.close();
}

void CreateProjectControl::cancel() {
    _view.close();
}
