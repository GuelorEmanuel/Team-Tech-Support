#include <QtSql>
#include <QDebug>
#include "database.h"
#include "adminmaincontrol.h"
#include "createprojectcontrol.h"
#include "editprojectcontrol.h"

AdminMainControl::AdminMainControl(Admin &admin) :
    _admin(admin), _view(*this)
{
    getProjectList();
    _view.setModal(true);
    _view.exec();
}

void AdminMainControl::createProject() {
    CreateProjectControl createProjectControl;
    getProjectList();
    _view.show();
}

void AdminMainControl::editProject(int projectId) {
    EditProjectControl editProjectControl(projectId);
    _view.show();
}

void AdminMainControl::computeTeams(int projectId) {

}

void AdminMainControl::signOut() {
    _view.close();
}

void AdminMainControl::getProjectList() {
    QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT * FROM project");
    // Project fields are id, name, min_team_size, max_team_size, description
    if (!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        while (qry.next()) {
            qDebug() << "Found project " << qry.value(1).toString();
            _view.addProject(qry.value(0).toInt(), qry.value(1).toString());
        }
    }
}
