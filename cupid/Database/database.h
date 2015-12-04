#ifndef DATABASE_H
#define DATABASE_H

class Project;
class Student;
class Admin;
class Profile;
#include <vector>
#include <QString>
#include <QtSql>

class Database
{
public:
    static Database* instance();
    ~Database();
    virtual int createProject(Project& project) = 0;
    virtual int createStudent(Student& student) = 0;
    virtual int createAdmin(Admin& admin) = 0;
    virtual int createProfile(Profile& profile) = 0;
    virtual int editProject(Project& project) = 0;
    virtual int editProfile(Profile& profile) = 0;
    virtual int addStudentToProject(int student_id, int project_id) = 0;
    virtual int getStudent(Student& student) = 0; //Student&
    virtual int getUser(QString username, int& id) = 0;
    virtual int getAdmin(Admin& admin) = 0;
    virtual int getProfile(Profile& profile) = 0;
    virtual int getProject(Project& project) = 0;
    virtual int getProjectList(std::vector<Project> projects) = 0;
    virtual int getProjectIDsList(std::vector<int> projects) = 0;
    virtual int getProjectNamesList(std::vector<QString> projects) = 0;
    virtual int getFullProject(std::vector<Project> projects) = 0;
    virtual int getJoinedProjectList(Student& stu,
                                     std::vector<Project*> list) = 0;
    virtual int getUnjoinedProjectList(Student& stu,
                                       std::vector<Project*> list) = 0;
    virtual int getStudentsInProject(Project& project,
                                     std::vector<Student*> list) = 0;
protected:
    Database();
    Database(Database const&); // no implementation
    void operator=(Database const&); // no implementation
private:
    static Database* _instance;
};

#endif // DATABASE_H
