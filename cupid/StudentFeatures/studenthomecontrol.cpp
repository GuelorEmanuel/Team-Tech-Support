#include "studenthomecontrol.h"
#include "Storage/student.h"
#include "Storage/storagemanager.h"
#include "manageprofilecontrol.h"
#include "joinprojectcontrol.h"
#include <QDebug>
using namespace storage;


StudentHomeControl::StudentHomeControl(StudentPtr student) :
    _student(student), _view(*this)
{
    getUnjoinedProjectList();
    getJoinedProjectList();

    _view.setName(student->getDisplayName());

    _view.setModal(true);
    _view.exec();
}

void StudentHomeControl::logout() {
    _view.close();
}

/*Function: void StudentMainControl::editProfile()
 * Purpose: open control class for profile edition
 */
void StudentHomeControl::editProfile() {
    ManageProfileControl manageProfileControl(_student->getId(), 1);
    _view.show();

}

QString StudentHomeControl::getName()
{
    return _student->getDisplayName();
}

/*Function: void StudentMainControl::getUnjoinedProjectList()
 * Purpose: retrive all projects from db, check wich one
 *          of them student haven't joined and pass them
 *          to view class
 */
void StudentHomeControl::getUnjoinedProjectList() {
    ProjectList projects;
    projects = StudentFeaturesCommunication::listUnjoinedProjects(_student);
    for(int i = 0; i < projects->size(); i++) {
        _view.addUnjoinedProject((projects->at(i)->getId()), (projects->at(i))->getName());
    }
    /*
    QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT id, name FROM project "
                "WHERE id NOT IN "
                "(SELECT id FROM project, project_student_registered "
                " AS psr WHERE "
                "psr.project_id = project.id AND psr.user_id = :user_id)");

    qry.bindValue(":user_id", _student.getId());

    if (!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        while (qry.next()) {
            qDebug() << "Found unjoined project " << qry.value(1).toString();
            _view.addUnjoinedProject(qry.value(0).toInt(),
                                     qry.value(1).toString());
        }
    }
    */
}

/*Function: void StudentMainControl::openUnJoinedProject
 * Purpose: open unjoined project to student
 */
void StudentHomeControl::openUnJoinedProject(int projectId) {
    ProjectPtr project;
    std::make_shared<ProjectPtr>(project);
    project = StudentFeaturesCommunication::getProject(projectId);
    qDebug() << QString("Project name %1").arg(project->getName());
    JoinProjectControl studentProjectControl(project, _student, &_view);
    _view.show();
}

/*Function: void StudentMainControl::getJoinedProjectList()
 * Purpose: retrive all projects from db, check wich one
 *          of them student joined and pass them
 *          to view class
 */
void StudentHomeControl::getJoinedProjectList() {
    ProjectList projects;
    projects = StudentFeaturesCommunication::listJoinedProjects(_student);
    for(int i = 0; i < projects->size(); i++) {
        _view.addJoinedProject((projects->at(i)->getId()), (projects->at(i))->getName());
    }
    /*
    QSqlQuery qry(Database::getInstance().db());    
    qry.prepare("SELECT id, name FROM project, project_student_registered "
                " AS psr WHERE "
                "psr.project_id = project.id AND psr.user_id = :user_id");
    qry.bindValue(":user_id", _student.getId());

    if (!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        while (qry.next()) {
            qDebug() << "Found joined project " << qry.value(1).toString();
            _view.addJoinedProject(qry.value(0).toInt(),
                                   qry.value(1).toString());
        }
    }
    */
}

