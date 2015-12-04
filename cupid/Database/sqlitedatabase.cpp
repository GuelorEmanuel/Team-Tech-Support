#include "Storage/storage.h"
#include "sqlitedatabase.h"
using namespace storage;

SqliteDatabase::SqliteDatabase()
    : _joinedProjectRepo(new SqliteJoinedProjectRepository(_db)),
      _profileRepo(new SqliteProfileRepository(_db)),
      _projectRepo(new SqliteProjectRepository(_db)),
      _userRepo(new SqliteUserRepository(_db))
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./mydb.sqlite");
    _db.open(); // ignore return code
}

SqliteDatabase::~SqliteDatabase() {

}

SqliteDatabase* SqliteDatabase::instance() {
    static SqliteDatabase* _instance = NULL;
    if (_instance == NULL) {
        _instance = new SqliteDatabase();
    }

    return _instance;
}

/* User Part */
int SqliteDatabase::createStudent(StudentPtr student)
{
    int stat = 0;
    stat = _userRepo->createStudent(student);
    return stat;
}

int SqliteDatabase::createAdmin(AdminPtr admin)
{
    int stat = 0;
    stat = _userRepo->createAdmin(admin);
    return stat;
}

int SqliteDatabase::getStudent(StudentPtr student)
{
    int stat = 0;
    //stat = _userRepo.getStudent(student);
    return stat;
}

int SqliteDatabase::getAdmin(AdminPtr admin)
{
    int stat = 0;
    //stat = _userRepo.getAdmin(admin);
    return stat;
}

int SqliteDatabase::getUser(QString username, int& id)
{
    int stat = 0;
    //_userRepo.getUser(username, id);
    return stat;
}

/*Profile Part*/
int SqliteDatabase::createProfile(ProfilePtr profile)
{
    int stat = 0;
    //stat = _profileRepo.createProfile(profile);
    return stat;
}

int SqliteDatabase::editProfile(ProfilePtr profile)
{
    int stat = 0;
    //stat = _profileRepo.editProfile(profile);
    return stat;
}

int SqliteDatabase::getProfile(ProfilePtr profile)
{
    int stat = 0;
    //stat = _profileRepo.getProfile(profile);
    return stat;
}

/*Project Part*/
int SqliteDatabase::createProject(ProjectPtr project)
{
    int stat = 0;
    //stat = _projectRepo.createProject(project);
    return stat;
}

int SqliteDatabase::editProject(ProjectPtr project)
{
    int stat = 0;
    //stat = _projectRepo.editProject(project);
    return stat;
}

int SqliteDatabase::getProject(ProjectPtr project)
{
    int stat = 0;
    //stat = _projectRepo.getProject(project);
    return stat;
}

int SqliteDatabase::getProjectList(ProjectList projects)
{
   //return _projectRepo->listProjects(projects);
}

int SqliteDatabase::getProjectIDsList(std::vector<int> &projects)
{
   //return _projectRepo->listProjectsIDs(projects);
}

int SqliteDatabase::getProjectNamesList(std::vector<QString> &projects)
{
   //return _projectRepo->listProjectsNames(projects);
}

int SqliteDatabase::getFullProject(ProjectList projects)
{
   //return _projectRepo->listFullProjects(projects);
}
/*Students in a project part*/
int SqliteDatabase::addStudentToProject(int student_id, int project_id)
{
    int stat = 0;
    //_joinedProjectRepo->addStudentToProject(student_id, project_id);
    return stat;
}

int SqliteDatabase::getJoinedProjectList(StudentPtr stu, ProjectList list)
{
    int stat = 0;
    std::vector<int> ids;
    //stat = _joinedProjectRepo->getJoinedProjects(stu, ids);

   /* for(int i = 0; i < ids.size(); i++) {
        Project proj;
        proj.setId(ids[i]);
        _projectRepo.getProject(proj);
        list.push_back(&proj);
    }*/
    return stat;
}

int SqliteDatabase::getUnjoinedProjectList(StudentPtr stu, ProjectList list)
{
    int stat = 0;
    /*std::vector<int> ids;
    std::vector<int> projs;
    stat = _joinedProjectRepo->getJoinedProjects(stu, ids);
    stat = _projectRepo->listProjectsIDs(projs);

    for(int i = 0; i < ids.size(); i++) {
        projs.erase(std::remove(projs.begin(), projs.end(), ids[i]), projs.end());
    }*/
    /*for(int j = 0; j < projs.size(); j++) {
        Project proj;
        proj.setId(projs[j]);
        _projectRepo.getProject(proj);
        list.push_back(&proj);
    }*/
    return stat;
}

int SqliteDatabase::getStudentsInProject(ProjectPtr project, StudentList list)
{
    int stat = 0;
    std::vector<int> ids;
    //stat = _joinedProjectRepo->getStudentsInProject(project, ids);

    /*for(int j = 0; j < ids.size(); j++) {
        Student stud;
        stud.setId(ids[j]);
        _userRepo.getStudent(stud);
        list.push_back(&stud);
    }*/
    return stat;
}
