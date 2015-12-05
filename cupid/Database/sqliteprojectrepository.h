#ifndef SQLITEPROJECTREPOSITORY_H
#define SQLITEPROJECTREPOSITORY_H

#include "Storage/storage.h"
#include <QString>
class QSqlDatabase;

class SqliteProjectRepository
{
public:
    SqliteProjectRepository(QSqlDatabase& db);
    int createProject(storage::ProjectPtr project);
    int editProject(storage::ProjectPtr project);//int id
    int listProjects(storage::ProjectList projects);
    int listProjectsIDs(std::vector<int> &projects);
    int listProjectsNames(std::vector<QString> &projects);
    int listFullProjects(storage::ProjectList projects);
    int getProject(storage::ProjectPtr project);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEPROJECTREPOSITORY_H
