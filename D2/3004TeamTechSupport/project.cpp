#include "project.h"

Project::Project() : _id(-1)
{
}

int Project::getId() const {
    return _id;
}

void Project::setId(int value) {
    _id = value;

}

int Project::lookupId(QString name) {
    int id = 0;
    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("SELECT * FROM project");

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        id = -1;
    } else {
        while(qry.next()) {
            if(name == qry.value(1).toString())
                id = qry.value(0).toInt();
        }
    }
    return id;
}

int Project::getMinTeamSize() const {
    return _minTeamSize;
}

void Project::setMinTeamSize(int value) {
    _minTeamSize = value;
}

int Project::getMaxTeamSize() const {
    return _maxTeamSize;
}

void Project::setMaxTeamSize(int value) {
    _maxTeamSize = value;
}

QString Project::getName() const {
    return _name;
}

void Project::setName(QString value) {
    _name = value;
}

QString Project::getDescription() const {
    return _description;
}

void Project::setDescription(QString value) {
    _description = value;
}

/*Function: int Project::registerStudent
 *Purpose : register given student in a project by adding him
 *          to project_student_registered table
 */
int Project::registerStudent(Student& student) {
    // Connect to database and make sure the student is in the project
    if(_id == -1) return 0;

    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("INSERT INTO project_student_registered VALUES (:pid, :sid)");
    qry.bindValue(":pid", _id);
    qry.bindValue(":sid", student.getId());

    if(qry.exec()) {
        qDebug() << qry.lastError();
        return 0;
    } else {
        qDebug() << "Student just joined project.";
        return 1;
    }
    return 0;
}

std::vector<Student> Project::getStudents() {
    // Connect to database and return a list of students in the project
}

/*Function: void Project::create()
 * Purpose: create new project and add it to db
 */
void Project::create() {
    // Connect to database and insert a new project
    // Make sure to set id to the id the database autogenerates

    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("INSERT INTO project(name, min_team_size, max_team_size, description) VALUES(:n, :min, :max, :desc)");

    qry.bindValue(":n", _name);
    qry.bindValue(":min", _minTeamSize);
    qry.bindValue(":max", _maxTeamSize);
    qry.bindValue(":desc", _description);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qDebug() << "Project is added";
    }

}

/*Function: void Project::edit()
 * Purpose: edit the project and update it in db
 */
void Project::edit() {
    // Connect to the database and update the project settings
    // Make sure to abort if id is -1

    if(_id == -1) return;

    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("UPDATE project SET name=:n, min_team_size=:min, max_team_size=:max, description=:d WHERE id =:id");
    qry.bindValue(":n", _name);
    qry.bindValue(":min", _minTeamSize);
    qry.bindValue(":max", _maxTeamSize);
    qry.bindValue(":d", _description);
    qry.bindValue(":id", _id);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qDebug() << "Project is updated";
    }
}

Project::~Project()
{

}


