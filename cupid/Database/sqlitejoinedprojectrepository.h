#ifndef SQLITEJOINEDPROJECTREPOSITORY_H
#define SQLITEJOINEDPROJECTREPOSITORY_H

#include "Storage/project.h"
#include "Storage/student.h"
#include <vector>
#include "database.h"

class SqliteJoinedProjectRepository
{
public:
    SqliteJoinedProjectRepository();
    int getJoinedProjects(Student& student, std::vector<int> ids);
    int getStudentsInProject(Project& project, std::vector<int> ids);
    int addStudentToProject(int student_id ,int project_id);

};

#endif // SQLITEJOINEDPROJECTREPOSITORY_H
