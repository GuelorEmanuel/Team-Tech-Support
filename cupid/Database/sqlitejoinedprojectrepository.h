#ifndef SQLITEJOINEDPROJECTREPOSITORY_H
#define SQLITEJOINEDPROJECTREPOSITORY_H

#include "Storage/project.h"
#include "Storage/student.h"
#include "database.h"
#include <vector>
class QSqlDatabase;

class SqliteJoinedProjectRepository
{
public:
    SqliteJoinedProjectRepository(QSqlDatabase& db);
    int getJoinedProjects(Student& student, std::vector<int> ids);
    int getStudentsInProject(Project& project, std::vector<int> ids);
    int addStudentToProject(int student_id ,int project_id);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEJOINEDPROJECTREPOSITORY_H
