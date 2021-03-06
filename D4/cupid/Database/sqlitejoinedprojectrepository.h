#ifndef SQLITEJOINEDPROJECTREPOSITORY_H
#define SQLITEJOINEDPROJECTREPOSITORY_H

#include "Storage/storage.h"
class QSqlDatabase;

class SqliteJoinedProjectRepository
{
public:
    SqliteJoinedProjectRepository(QSqlDatabase& db);
    int getJoinedProjects(storage::StudentPtr student, std::vector<int> &ids);
    int getStudentsInProject(storage::ProjectPtr project, std::vector<int> &ids);
    int addStudentToProject(int student_id ,int project_id);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEJOINEDPROJECTREPOSITORY_H
