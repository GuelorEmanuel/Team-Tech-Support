#include "adminmaincontrol.h"
#include "createprojectcontrol.h"
#include "editprojectcontrol.h"

AdminMainControl::AdminMainControl(QSqlDatabase &db) :
    _db(db), _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void AdminMainControl::createProject() {
    _view.hide();
    CreateProjectControl createProjectControl(_db);
    _view.show();
}

void AdminMainControl::editProject(int projectId) {
    _view.hide();
    EditProjectControl editProjectControl(_db, projectId);
    _view.show();
}

void AdminMainControl::computeTeams(int projectId) {

}

void AdminMainControl::signOut() {
    _view.close();
}

void AdminMainControl::getProjectList() {

}
