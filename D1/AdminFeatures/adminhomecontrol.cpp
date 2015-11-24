#include "adminhomecontrol.h"
#include "manageprojectcontrol.h"
#include "Storage/admin.h"

AdminHomeControl::AdminHomeControl(Admin &admin) :
    _admin(admin), _view(*this)
{
    getProjectList();
    _view.setName(admin.getDisplayName());
    _view.setModal(true);
    _view.exec();
}

void AdminHomeControl::createProject() {
    ManageProjectControl manageProjectControl;
    getProjectList();
    _view.show();
}

void AdminHomeControl::editProject(int projectId) {
    ManageProjectControl manageProjectControl;
    _view.show();
}

void AdminHomeControl::computeTeams(int projectId) {

}

void AdminHomeControl::signOut() {
    _view.close();
}

/* Function: voidAdminMainControl::getProjectList()
 * Purpose : get list of projects and display it to user(admin)
 */
void AdminHomeControl::getProjectList() {
/*    QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT * FROM project");
    // Project fields are id, name, min_team_size, max_team_size, description
    if (!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        while (qry.next()) {
            qDebug() << "Found project " << qry.value(1).toString();
            _view.addProject(qry.value(0).toInt(), qry.value(1).toString());
        }
    }*/
}

QString AdminHomeControl::getName()
{
    return "test";
            //_admin.getDisplayName();
}
