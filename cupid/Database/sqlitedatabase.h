#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H

#include "Storage/storage.h"
#include "Database/database.h"
#include <QSqlDatabase>
class SqliteJoinedProjectRepository;
class SqliteProfileRepository;
class SqliteProjectRepository;
class SqliteUserRepository;

class SqliteDatabase : public Database
{
public:
    ~SqliteDatabase();
    static SqliteDatabase* instance();
    virtual int createProject(storage::ProjectPtr project);
    virtual int createStudent(storage::StudentPtr student);
    virtual int createAdmin(storage::AdminPtr admin);
    virtual int createProfile(storage::ProfilePtr profile);
    virtual int editProject(storage::ProjectPtr project);
    virtual int editProfile(storage::ProfilePtr profile);
    virtual int addStudentToProject(int student_id, int project_id);
    virtual int getStudent(storage::StudentPtr student);
    virtual storage::UserPtr getUser(storage::UserPtr user);
    virtual int getAdmin(storage::AdminPtr admin);
    virtual int getProfile(storage::ProfilePtr profile);
    virtual int getProject(storage::ProjectPtr project);
    virtual int getProjectList(storage::ProjectList projects);
    virtual int getProjectIDsList(std::vector<int> &projects);
    virtual int getProjectNamesList(std::vector<QString> &projects);
    virtual int getFullProject(storage::ProjectList projects);
    virtual int getJoinedProjectList(storage::StudentPtr,
                                     storage::ProjectList list);
    virtual int getUnjoinedProjectList(storage::StudentPtr,
                                       storage::ProjectList list);
    virtual int getStudentsInProject(storage::ProjectPtr,
                                     storage::StudentList list);

protected:
    SqliteDatabase();
    SqliteDatabase(SqliteDatabase const&) = delete; // no implementation
    void operator=(SqliteDatabase const&) = delete; // no implementation

private:
    QSqlDatabase _db;
    std::unique_ptr<SqliteJoinedProjectRepository> _joinedProjectRepo;
    std::unique_ptr<SqliteProfileRepository> _profileRepo;
    std::unique_ptr<SqliteProjectRepository> _projectRepo;
    std::unique_ptr<SqliteUserRepository> _userRepo;
};

#endif // SQLITEDATABASE_H
