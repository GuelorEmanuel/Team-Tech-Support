#include "studentmaincontrol.h"
#include "database.h"
#include "student.h"
#include "editstuprofilecontrol.h"

StudentMainControl::StudentMainControl(Student &student) :
    _student(student), _view(*this)
{
    getUnjoinedProjectList();
    getJoinedProjectList();
    _view.setModal(true);
    _view.exec();
}

void StudentMainControl::logout() {
    _view.close();
}

void StudentMainControl::joinProject(int projectId) {

}

void StudentMainControl::editProfile() {
    EditStuProfileControl editProfileControl(_student.getId());
    qDebug() << "In here I was called ";
    _view.show();

}

void StudentMainControl::getUnjoinedProjectList() {
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
            _view.addUnjoinedProject(3,"Helllo");
        }
    }
}

void StudentMainControl::getJoinedProjectList() {
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
}
