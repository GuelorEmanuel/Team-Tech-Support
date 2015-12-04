#include "sqlitejoinedprojectrepository.h"
#include "Storage/storage.h"
using namespace storage;

SqliteJoinedProjectRepository::SqliteJoinedProjectRepository(QSqlDatabase& db) : _db(db)
{
}

int SqliteJoinedProjectRepository::getJoinedProjects(StudentPtr student, std::vector<int> &ids)
{
    QSqlQuery qry(_db);

    QString qlist = "SELECT project_id FROM project_student_registered WHERE user_id = :sid";

    qry.prepare(qlist);
    qry.bindValue(":sid", student->getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next()) {
            ids.push_back(qry.value(0).toInt());
        }
    }
    return 0;
}


int SqliteJoinedProjectRepository::getStudentsInProject(ProjectPtr project, std::vector<int> &ids)
{
    QSqlQuery qry(_db);

    QString qlist = "SELECT user_id FROM project_student_registered WHERE project_id = :pid";

    qry.prepare(qlist);
    qry.bindValue(":pid", project->getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next()) {
            ids.push_back(qry.value(0).toInt());
        }
    }
    return 0;
}

int SqliteJoinedProjectRepository::addStudentToProject(int student_id ,int project_id)
{
    QSqlQuery qry(_db);

    QString qlist = "INSERT INTO project_student_registered VALUES(:pid, :sid)";

    qry.prepare(qlist);
    qry.bindValue(":sid", student_id);
    qry.bindValue(":pid", project_id);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        qDebug() << QString("Done. Student %1 in a project %2").arg(student_id).arg(project_id);
    }
    return 0;
}
