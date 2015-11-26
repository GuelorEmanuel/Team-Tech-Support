#include "sqlitedatabase.h"

SqliteDatabase::SqliteDatabase()
{
}


/* User Part */
int SqliteDatabase::createStudent(Student& student)
{
    int stat = 0;
    student.setStudentId("100950500");
    student.setUserName("testcase");
    student.setDisplayName("Test Case");
    stat = _userRepo.createStudent(student);
    return stat;
}

int SqliteDatabase::createAdmin(Admin& admin)
{
    int stat = 0;
    stat = _userRepo.createAdmin(admin);
    return stat;
}

int SqliteDatabase::getStudent(Student& student)
{
    int stat = 0;
    stat = _userRepo.getStudent(student);
    return stat;
}

int SqliteDatabase::getAdmin(Admin& admin)
{
    int stat = 0;
    stat = _userRepo.getAdmin(admin);
    return stat;
}

/*Profile Part*/
int SqliteDatabase::createProfile(Profile& profile)
{
    int stat = 0;
    stat = _profileRepo.createProfile(profile);
    return stat;
}

int SqliteDatabase::editProfile(Profile& profile)
{
    int stat = 0;
    stat = _profileRepo.editProfile(profile);
    return stat;
}

int SqliteDatabase::getProfile(Profile& profile)
{
    int stat = 0;
    stat = _profileRepo.getProfile(profile);
    return stat;
}

/*Project Part*/
int SqliteDatabase::createProject(Project& project)
{
    int stat = 0;
    stat = _projectRepo.createProject(project);
    return stat;
}

int SqliteDatabase::editProject(Project& project)
{
    int stat = 0;
    stat = _projectRepo.editProject(project);
    return stat;
}

int SqliteDatabase::getProject(Project& project)
{
    int stat = 0;
    stat = _projectRepo.editProject(project);
    return stat;
}

/*Students in a project part*/
int SqliteDatabase::addStudentToProject(int student_id, int project_id)
{
    int stat = 0;
    //stat = _
    return stat;
}
