#include "Storage/storage.h"
#include "StudentFeatures/joinprojectcontrol.h"
#include "StudentFeatures/joinprojectwindow.h"
#include "StudentFeatures/studenthomecontrol.h"
#include "StudentFeatures/studentfeaturescommunication.h"
using namespace storage;

JoinProjectControl::JoinProjectControl(ProjectPtr project,
                                       StudentPtr student,
                                       StudentHomeControl& homeControl)
    : _view(new JoinProjectWindow(*this)), _project(project),
      _student(student), _homeControl(homeControl)
{    
    _view->setModal(true);
    _view->exec();
}

JoinProjectControl::~JoinProjectControl() {}

/*Function: void JoinProjectControl::loadProjectSettings
 * Purpose: load selected project's settings and pass them to view
 */
void JoinProjectControl::loadProjectSettings(int id) {
    _project = StudentFeaturesCommunication::getProject(id);
    _view->refreshProjectSettings(_project);
}

void JoinProjectControl::leaveProject()
{
    _view->close();
}

int JoinProjectControl::joinProject()
{
    int stat = StudentFeaturesCommunication::joinProject(_project, _student);
    if(!stat) {
        _homeControl.updateJoinedProjects(_project);
        _view->close();
    } else {
        return stat;
    }
}
