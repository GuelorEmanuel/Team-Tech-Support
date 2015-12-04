#include "studenthomecontrol.h"
#include "Storage/student.h"
#include "manageprofilecontrol.h"
#include "joinprojectcontrol.h"


StudentHomeControl::StudentHomeControl(Student &student) :
    _student(student), _view(*this)
{
    getUnjoinedProjectList();
    getJoinedProjectList();

    _view.setName(student.getDisplayName());

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
    ManageProfileControl manageProfileControl(_student.getId(), 1);
    _view.show();

}

QString StudentHomeControl::getName()
{
    return _student.getDisplayName();
}

/*Function: void StudentMainControl::getUnjoinedProjectList()
 * Purpose: retrive all projects from db, check wich one
 *          of them student haven't joined and pass them
 *          to view class
 */
void StudentHomeControl::getUnjoinedProjectList() {
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
    //JoinProjectControl studentProjectControl(projectId, _student);
    _view.show();
}

/*Function: void StudentMainControl::getJoinedProjectList()
 * Purpose: retrive all projects from db, check wich one
 *          of them student joined and pass them
 *          to view class
 */
void StudentHomeControl::getJoinedProjectList() {
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

