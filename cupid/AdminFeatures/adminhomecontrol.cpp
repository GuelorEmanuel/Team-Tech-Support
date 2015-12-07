#include "AdminFeatures/adminhomecontrol.h"
#include "AdminFeatures/adminfeaturescommunication.h"
#include "AdminFeatures/manageprojectcontrol.h"
#include "Storage/project.h"
#include "Storage/admin.h"
#include "Storage/storage.h"
#include <QDebug>
using namespace storage;

AdminHomeControl::AdminHomeControl(AdminPtr admin) :
    _admin(admin), _view(*this)
{
    updateProjectsList();
    _view.setName(admin->getDisplayName());
    _view.setModal(true);
    _view.exec();
}


void AdminHomeControl::createProject() {
    ManageProjectControl manageProjectControl;
    updateProjectsList();
    _view.show();
}

void AdminHomeControl::editProject(int id) {
    ManageProjectControl manageProjectControl(
                AdminFeaturesCommunication::getProject(id));
    updateProjectsList();
    _view.show();
}

void AdminHomeControl::computeTeams(int projectId) {
    ProjectPtr project(AdminFeaturesCommunication::getProject(projectId));
    AdminFeaturesCommunication::showComputeTeamsWindow(project);
}

void AdminHomeControl::signOut() {
    _view.close();
}

/* Function: voidAdminMainControl::getProjectList()
 * Purpose : get list of projects and display it to user(admin)
 */
void AdminHomeControl::updateProjectsList()
{
    _view.updateProjectsList(AdminFeaturesCommunication::getProjectList());
}

QString AdminHomeControl::getName()
{
    return _admin->getDisplayName();
}
