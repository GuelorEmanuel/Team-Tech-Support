#include "student.h"

Student::Student() : User(){
}

Student::~Student() {
}

QString Student::getStudentId()
{
    return _studentId;
}

void Student::setStudentId(QString value) {
    _studentId = value;
}

Profile Student::getProfile() {
    return *_profile; // Calls copy constructor on the profile
}

void Student::setProfile(Profile* value) {
    _profile.reset(value);
}

void Student::createStudentUser()
{
    if(User::_id == -1) return;

    QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT max(id) FROM user");

    if(!qry.exec()){
        qDebug() << qry.lastError();
    } else {
        qry.next();
        User::setId(qry.value(0).toInt() + 1);
    }

    qry.prepare("INSERT INTO user(id, username, display_name, student_id) VALUES(:id, :u, :dn, :sid)");
    qry.bindValue(":id", User::_id);
    qry.bindValue(":u", User::_userName);
    qry.bindValue(":dn", User::_displayName);
    qry.bindValue(":sid", _studentId);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qDebug() << "Student user is in the table";
    }
}


std::vector<Project*> Student::getProjects() {
    if (_projects.empty())
    {
        // Get list of projects this student has joined from the database
    }

    return _projects;
}

void Student::joinProject(Project& project) {
    // Connect to database and add the student to the project
}

