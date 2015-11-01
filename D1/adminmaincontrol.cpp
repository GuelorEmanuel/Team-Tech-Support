#include "adminmaincontrol.h"
#include "createprojectcontrol.h"
#include "editprojectcontrol.h"

AdminMainControl::AdminMainControl(Admin &admin) :
    _admin(admin), _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void AdminMainControl::createProject() {
    _view.hide();
    CreateProjectControl createProjectControl();
    _view.show();
}

void AdminMainControl::editProject(int projectId) {
    _view.hide();
    EditProjectControl editProjectControl(projectId);
    _view.show();
}

void AdminMainControl::computeTeams(int projectId) {

}

void AdminMainControl::signOut() {
    _view.close();
}

void AdminMainControl::getProjectList() {

}
