#include "sqliteprojectrepository.h"

SqliteProjectRepository::SqliteProjectRepository()
{
}

int SqliteProjectRepository::createProject(Project& project)
{
    int stat = 0;

    Project& proj = project;
    QSqlQuery qry(Database::getInstance().db());

    QString qproject = "INSERT INTO project VALUES(:id, :name, :min, :max, :desc)";
    QString qid = "SELECT MAX(id) FROM project";

    if(!qry.exec(qid)) {
        qDebug() << qry.lastError();
        return stat=1;
    } else {
        qry.next();
        proj.setId(qry.value(0).toInt()+1);
    }

    qry.prepare(qproject);
    qry.bindValue(":id", proj.getId());
    qry.bindValue(":name", proj.getName());
    qry.bindValue(":min", proj.getMinTeamSize());
    qry.bindValue(":max", proj.getMaxTeamSize());
    qry.bindValue(":desc", proj.getDescription());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat=1;
    } else {
        qDebug() << "Project was successfully added. Project id is:" + proj.getId();
    }

    return stat;
}

int SqliteProjectRepository::editProject(Project& project)
{
    int stat = 0;
    QSqlQuery qry(Database::getInstance().db());

    QString qproject = "UPDATE project SET name = :name, min_team_size = :min, "
            "max_team_size = :max, description = :desc WHERE id = :id";
    qry.prepare(qproject);
    qry.bindValue(":name", project.getName());
    qry.bindValue(":min", project.getMinTeamSize());
    qry.bindValue(":max", project.getMaxTeamSize());
    qry.bindValue(":desc", project.getDescription());
    qry.bindValue(":id", project.getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        stat = 1;
    } else {
        qDebug() << QString("Project is update. Project's ID is %1").arg(project.getId());
    }
    return 0;
}

//vector listProjects();
int SqliteProjectRepository::getProject(Project& project)
{
    int stat = 0;
    Project& proj = project;
    QSqlQuery qry(Database::getInstance().db());

    QString qproject = "SELECT * FROM project WHERE id = :id";

    qry.prepare(qproject);
    qry.bindValue(":id", proj.getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qry.next();
        proj.setName(qry.value(1).toString());
        proj.setMinTeamSize(qry.value(2).toInt());
        proj.setMaxTeamSize(qry.value(3).toInt());
        proj.setDescription(qry.value(4).toString());
        qDebug() << QString("Project retrieved. Project's name is %1").arg(proj.getName());
    }
    return stat;
}
