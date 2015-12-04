#ifndef SQLITEPROJECTREPOSITORY_H
#define SQLITEPROJECTREPOSITORY_H

#include "Storage/project.h"
#include "database.h"
#include "memory.h"
#include "Storage/proxyproject.h"

class SqliteProjectRepository
{
public:
    SqliteProjectRepository(QSqlDatabase& db);
    int createProject(Project* project);
    int editProject(Project* project);//int id
    int listProjects(std::vector<std::shared_ptr<Project>> &projects);
    int listProjectsIDs(std::vector<int> &projects);
    int listProjectsNames(std::vector<QString> &projects);
    int listFullProjects(std::vector<std::shared_ptr<Project>> &projects);
    int getProject(Project* project);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEPROJECTREPOSITORY_H
