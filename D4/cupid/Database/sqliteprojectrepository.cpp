#include "Database/sqliteprojectrepository.h"
#include "Storage/storage.h"
#include "Storage/proxyproject.h"
#include "Storage/project.h"
#include <QString>
#include <QtSql>
using namespace storage;

SqliteProjectRepository::SqliteProjectRepository(QSqlDatabase& db)
    : _db(db)
{
}

int SqliteProjectRepository::createProject(ProjectPtr project)
{
    int stat = 0;
    QSqlQuery qry(_db);

    QString qproject = "INSERT INTO project VALUES(:id, :name, :min, :max, :desc)";
    QString qid = "SELECT MAX(id) FROM project";

    if(!qry.exec(qid)) {
        qDebug() << qry.lastError();
        return stat=1;
    } else {
        qry.next();
        project->setId(qry.value(0).toInt()+1);
    }

    qry.prepare(qproject);
    qry.bindValue(":id", project->getId());
    qry.bindValue(":name", project->getName());
    qry.bindValue(":min", project->getMinTeamSize());
    qry.bindValue(":max", project->getMaxTeamSize());
    qry.bindValue(":desc", project->getDescription());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat=1;
    } else {
        qDebug() << QString("Project was successfully added. Project id is: %1").arg(project->getId());
    }

    return stat;
}

int SqliteProjectRepository::editProject(ProjectPtr project)
{
    int stat = 0;
    QSqlQuery qry(_db);

    QString qproject = "UPDATE project SET name = :name, min_team_size = :min, "
            "max_team_size = :max, description = :desc WHERE id = :id";
    qry.prepare(qproject);
    qry.bindValue(":name", project->getName());
    qry.bindValue(":min", project->getMinTeamSize());
    qry.bindValue(":max", project->getMaxTeamSize());
    qry.bindValue(":desc", project->getDescription());
    qry.bindValue(":id", project->getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        stat = 1;
    } else {
        qDebug() << QString("Project is update. Project's ID is %1").arg(project->getId());
    }
    return 0;
}

int SqliteProjectRepository::listProjects(ProjectList projects)
{
    QSqlQuery qry(_db);

    QString qprojects = "SELECT id, name FROM project";
    qry.prepare(qprojects);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next()) {
            ProjectPtr project;
            project->setId(qry.value(0).toInt());
            project->setName(qry.value(1).toString());
            projects->push_back(project);
            qDebug() << QString("Project %1 is added").arg(project->getName());
        }
    }

    return 0;

}

int SqliteProjectRepository::listProjectsIDs(std::vector<int> &projects)
{
    QSqlQuery qry(_db);
    int id = 0;
    QString qprojects = "SELECT id FROM project";
    qry.prepare(qprojects);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next()) {
            id = qry.value(0).toInt();
            projects.push_back(id);
            qDebug() << QString("Project %1 is added").arg(id);
        }
    }
    return 0;
}

int SqliteProjectRepository::listProjectsNames(std::vector<QString> &projects)
{
    QSqlQuery qry(_db);
    QString name = "";
    QString qprojects = "SELECT name FROM project";
    qry.prepare(qprojects);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next()) {
            name = qry.value(0).toString();
            projects.push_back(name);
            qDebug() << QString("Project %1 is added").arg(name);
        }
    }
    return 0;
}

int SqliteProjectRepository::listFullProjects(ProjectList projects)
{
    QSqlQuery qry(_db);

    QString qprojects = "SELECT id, name, description, min_team_size, max_team_size FROM project";
    qry.prepare(qprojects);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next()) {
            ProjectPtr project(
                        std::make_shared<ProxyProject>(
                            qry.value(0).toInt(),
                            qry.value(1).toString(),
                            qry.value(2).toString(),
                            qry.value(3).toInt(),
                            qry.value(4).toInt()));
            projects->push_back(project);
            qDebug() << QString("Project %1 is added").arg(project->getName());
        }
    }

    return 0;
}

int SqliteProjectRepository::getProject(ProjectPtr project)
{
    int stat = 0;
    QSqlQuery qry(_db);

    if(project->getId() == -1) {
        QString qproject = "SELECT * FROM project WHERE name = :n";
        qry.prepare(qproject);
        qry.bindValue(":n", project->getName());
    } else {
        QString qproject = "SELECT * FROM project WHERE id = :id";
        qry.prepare(qproject);
        qry.bindValue(":id", project->getId());
    }

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        stat = 1;
    } else {
        if(qry.next()) {
            project->setName(qry.value(1).toString());
            project->setMinTeamSize(qry.value(2).toInt());
            project->setMaxTeamSize(qry.value(3).toInt());
            project->setDescription(qry.value(4).toString());
            qDebug() << QString("Project retrieved. Project's name is %1").arg(project->getName());
        } else
            stat = 1;
    }
    return stat;
}
