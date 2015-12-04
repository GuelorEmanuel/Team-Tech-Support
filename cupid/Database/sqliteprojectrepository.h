#ifndef SQLITEPROJECTREPOSITORY_H
#define SQLITEPROJECTREPOSITORY_H

#include "Storage/project.h"
#include "database.h"

class SqliteProjectRepository
{
public:
    SqliteProjectRepository(QSqlDatabase& db);
    int createProject(Project& project);
    int editProject(Project& project);//int id
    int listProjects(std::vector<Project> projects);
    int listProjectsIDs(std::vector<int> projects);
    int listProjectsNames(std::vector<QString> projects);
    int listFullProjects(std::vector<Project> projects);
    int getProject(Project& project);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEPROJECTREPOSITORY_H
