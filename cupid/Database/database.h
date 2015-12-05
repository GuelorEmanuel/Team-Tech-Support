#ifndef DATABASE_H
#define DATABASE_H

#include "Storage/storage.h"
#include <QString>

class Database
{
public:
    static Database* instance();
    ~Database();
    virtual int createProject(storage::ProjectPtr project) = 0;
    virtual int createStudent(storage::StudentPtr student) = 0;
    virtual int createAdmin(storage::AdminPtr admin) = 0;
    virtual int createProfile(storage::ProfilePtr profile) = 0;
    virtual int editProject(storage::ProjectPtr project) = 0;
    virtual int editProfile(storage::ProfilePtr profile) = 0;
    virtual int addStudentToProject(int student_id, int project_id) = 0;
    virtual int getStudent(storage::StudentPtr student) = 0;
    virtual int getUser(QString username, int& id) = 0;
    virtual int getAdmin(storage::AdminPtr admin) = 0;
    virtual int getProfile(storage::ProfilePtr profile) = 0;
    virtual int getProject(storage::ProjectPtr project) = 0;
    virtual int getProjectList(storage::ProjectList projects) = 0;
    virtual int getProjectIDsList(std::vector<int> &projects) = 0;
    virtual int getProjectNamesList(std::vector<QString> &projects) = 0;
    virtual int getFullProject(storage::ProjectList projects) = 0;
    virtual int getJoinedProjectList(storage::StudentPtr,
                                     storage::ProjectList list) = 0;
    virtual int getUnjoinedProjectList(storage::StudentPtr,
                                       storage::ProjectList list) = 0;
    virtual int getStudentsInProject(storage::ProjectPtr,
                                     storage::StudentList list) = 0;
protected:
    Database();
    Database(Database const&) = delete; // no implementation
    void operator=(Database const&) = delete; // no implementation
};

#endif // DATABASE_H
