#include "sqliteuserrepository.h"

SqliteUserRepository::SqliteUserRepository()
{
}

int SqliteUserRepository::createStudent(Student& student)
{
    int stat = 0;

    Student& stu = student;
    QSqlQuery qry(Database::getInstance().db());

    QString qstudent = "INSERT INTO user VALUES(:id, :u, :dn, :sid)";
    QString qid = "SELECT MAX(id) FROM user";

    if(!qry.exec(qid)) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        stu.setId(qry.value(0).toInt()+1);
    }

    qry.prepare(qstudent);
    qry.bindValue(":id", stu.getId());
    qry.bindValue(":u", stu.getUserName());
    qry.bindValue(":dn", stu.getDisplayName());
    qry.bindValue(":sid", stu.getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qDebug() << "Student added. Student's ID is " + stu.getId();
    }
    return stat;
}

int SqliteUserRepository::createAdmin(Admin& admin)
{
    int stat = 0;
    //int id = 0;
    Admin& adm = admin;
    QSqlQuery qry(Database::getInstance().db());

    QString qadmin = "INSERT INTO user(id, username, display_name) VALUES(:id, :u, :dn)";
    QString qid = "SELECT MAX(id) FROM user";

    if(!qry.exec(qid)) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        adm.setId(qry.value(0).toInt()+1);
    }

    qry.prepare(qadmin);
    qry.bindValue(":id", adm.getId());
    qry.bindValue(":u", adm.getUserName());
    qry.bindValue(":dn", adm.getDisplayName());


    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qDebug() << "Admin added. Admin's ID is " + adm.getId();
    }
    return stat;
}

int SqliteUserRepository::getStudent(Student& student)
{
    int stat = 0;
    Student& stu = student;
    QSqlQuery qry(Database::getInstance().db());

    QString qstudent = "SELECT * FROM user WHERE id = :id";

    qry.prepare(qstudent);
    qry.bindValue(":id", stu.getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        stu.setUserName(qry.value(1).toString());
        stu.setDisplayName(qry.value(2).toString());
        stu.setStudentId(qry.value(3).toString());
        qDebug() << "Student retrieved. Student's name is" + stu.getDisplayName();
    }

    return stat;
}

int SqliteUserRepository::getAdmin(Admin& admin)
{
    int stat = 0;
    Admin& adm = admin;
    QSqlQuery qry(Database::getInstance().db());

    QString qadmin = "SELECT * FROM user WHERE id = :id";

    qry.prepare(qadmin);
    qry.bindValue(":id", adm.getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        adm.setUserName(qry.value(1).toString());
        adm.setDisplayName(qry.value(2).toString());
        qDebug() << "Admin retrieved. Student's name is" + adm.getDisplayName();
    }

    return stat;
}
