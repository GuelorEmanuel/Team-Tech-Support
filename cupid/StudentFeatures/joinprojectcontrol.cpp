#include "Storage/storage.h"
#include "StudentFeatures/joinprojectcontrol.h"
#include "StudentFeatures/joinprojectwindow.h"
#include "StudentFeatures/studenthomecontrol.h"
#include "StudentFeatures/studentfeaturescommunication.h"
using namespace storage;

JoinProjectControl::JoinProjectControl(ProjectPtr project,
<<<<<<< HEAD
                                       StudentPtr student, StudentHomeWindow* view)
    : _view(*this), _project(project), _student(student), _stuView(view)
{    
    _view.refreshProjectSettings(_project);
    _view.setModal(true);
    _view.exec();
=======
                                       StudentPtr student,
                                       StudentHomeControl& homeControl)
    : _view(new JoinProjectWindow(*this)), _project(project),
      _student(student), _homeControl(homeControl)
{    
    _view->setModal(true);
    _view->exec();
>>>>>>> 4b7ee32a75b812131dd82fbdf97005291ec471a2
}

JoinProjectControl::~JoinProjectControl() {}

/*Function: void JoinProjectControl::loadProjectSettings
 * Purpose: load selected project's settings and pass them to view
 */
void JoinProjectControl::loadProjectSettings(int id) {
    _project = StudentFeaturesCommunication::getProject(id);
<<<<<<< HEAD
    //_view.refreshProjectSettings(_project);
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
=======
    _view->refreshProjectSettings(_project);
>>>>>>> 4b7ee32a75b812131dd82fbdf97005291ec471a2
}

void JoinProjectControl::leaveProject()
{
    _view->close();
}

int JoinProjectControl::joinProject()
{
    int stat = StudentFeaturesCommunication::joinProject(_project, _student);
    if(!stat) {
<<<<<<< HEAD
        _stuView->updateJoinedProjects(_project->getName());
        _view.close();
=======
        _homeControl.updateJoinedProjects(_project);
        _view->close();
>>>>>>> 4b7ee32a75b812131dd82fbdf97005291ec471a2
    } else {
        return stat;
    }
}
