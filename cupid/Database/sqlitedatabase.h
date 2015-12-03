#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H

#include "Database/sqlitejoinedprojectrepository.h"
#include "sqliteprofilerepository.h"
#include "Database/sqliteprojectrepository.h"
#include "sqliteuserrepository.h"
#include "Storage/profile.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/project.h"
#include <vector>

class SqliteDatabase
{
public:
    SqliteDatabase();
    int createProject(Project& project);
    int createStudent(Student& student);
    int createAdmin(Admin& admin);
    int createProfile(Profile& profile);
    int editProject(Project& project);
    int editProfile(Profile& profile);
    int addStudentToProject(int student_id, int project_id);
    int getStudent(Student& student); //Student&
    int getAdmin(Admin& admin);
    int getProfile(Profile& profile);
    int getProject(Project& project);
    int getProjectList(std::vector<Project> projects);
    int getProjectIDsList(std::vector<int> projects);
    int getProjectNamesList(std::vector<QString> projects);
    int getFullProject(std::vector<Project> projects);
    int getJoinedProjectList(int id);//Student&

private:
    SqliteJoinedProjectRepository _joinedProjectRepo;
    SqliteProfileRepository       _profileRepo;
    SqliteProjectRepository       _projectRepo;
    SqliteUserRepository          _userRepo;
};

#endif // SQLITEDATABASE_H
