#ifndef SQLITEPROJECTREPOSITORY_H
#define SQLITEPROJECTREPOSITORY_H

#include "Storage/project.h"
#include "database.h"

class SqliteProjectRepository
{
public:
    SqliteProjectRepository();
    int createProject(Project& project);
    int editProject(Project& project);//int id
    //vector listProjects();
    int getProject(Project& project);

};

#endif // SQLITEPROJECTREPOSITORY_H
