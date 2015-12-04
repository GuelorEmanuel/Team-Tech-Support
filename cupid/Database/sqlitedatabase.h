#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H

#include "sqlitejoinedprojectrepository.h"
#include "sqliteprofilerepository.h"
#include "sqliteprojectrepository.h"
#include "sqliteuserrepository.h"
#include "Storage/profile.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/project.h"
#include <QtSql>
#include <vector>

class SqliteDatabase : public Database
{
public:
    static SqliteDatabase* instance();
    virtual int createProject(Project* project);
    virtual int createStudent(Student* student);
    virtual int createAdmin(Admin* admin);
    virtual int createProfile(Profile* profile);
    virtual int editProject(Project* project);
    virtual int editProfile(Profile* profile);
    virtual int addStudentToProject(int student_id, int project_id);
    virtual int getStudent(Student* student); //Student&
    virtual int getUser(QString username, int& id);
    virtual int getAdmin(Admin* admin);
    virtual int getProfile(Profile* profile);
    virtual int getProject(Project* project);
    virtual int getProjectList(std::vector<Project*> &projects);
    virtual int getProjectIDsList(std::vector<int> &projects);
    virtual int getProjectNamesList(std::vector<QString> &projects);
    virtual int getFullProject(std::vector<Project*> &projects);
    virtual int getJoinedProjectList(Student* stu,
                                     std::vector<Project*> &list);
    virtual int getUnjoinedProjectList(Student* stu,
                                       std::vector<Project*> &list);
    virtual int getStudentsInProject(Project* project,
                                     std::vector<Student*> &list);

protected:
    SqliteDatabase();
    SqliteDatabase(SqliteDatabase const&); // no implementation
    void operator=(SqliteDatabase const&); // no implementation

private:
    static SqliteDatabase* _instance;
    QSqlDatabase _db;
    SqliteJoinedProjectRepository* _joinedProjectRepo;
    SqliteProfileRepository*       _profileRepo;
    SqliteProjectRepository*       _projectRepo;
    SqliteUserRepository*          _userRepo;
};

#endif // SQLITEDATABASE_H
