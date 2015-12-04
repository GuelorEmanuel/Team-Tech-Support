#include "sqliteuserrepository.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <memory>

SqliteUserRepository::SqliteUserRepository(QSqlDatabase& db)
    : _db(db)
{
}

int SqliteUserRepository::createStudent(Student* student)
{
    int stat = 0;
    QSqlQuery qry(_db);
    QString qstudent = "INSERT INTO user VALUES(:id, :u, :dn, :sid)";

    qry.prepare(qstudent);
    qry.bindValue(":id", student->getId());
    qry.bindValue(":u", student->getUserName());
    qry.bindValue(":dn", student->getDisplayName());
    qry.bindValue(":sid", student->getStudentId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qDebug() << QString("Student added. Student's ID is %1").arg(
                        student->getId());
    }

    return stat;
}

int SqliteUserRepository::createAdmin(Admin* admin)
{
    int stat = 0;
    QSqlQuery qry(_db);

    QString qadmin = "INSERT INTO user(id, username, display_name) VALUES(:id, :u, :dn)";
    QString qid = "SELECT MAX(id) FROM user";

    if(!qry.exec(qid)) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        admin->setId(qry.value(0).toInt()+1);
    }

    qry.prepare(qadmin);
    qry.bindValue(":id", admin->getId());
    qry.bindValue(":u", admin->getUserName());
    qry.bindValue(":dn", admin->getDisplayName());


    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qDebug() << QString("Admin added. Admin's ID is %1").arg(admin->getId());
    }
    return stat;
}

int SqliteUserRepository::getStudent(Student* student)
{
    int stat = 0;
    QSqlQuery qry(_db);

    QString qstudent = "SELECT * FROM user WHERE id = :id";

    qry.prepare(qstudent);
    qry.bindValue(":id", student->getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        student->setUserName(qry.value(1).toString());
        student->setDisplayName(qry.value(2).toString());
        student->setStudentId(qry.value(3).toString());
        qDebug() << QString("Student retrieved. Student's name is %1").arg(student->getStudentId());
    }

    return stat;
}

int SqliteUserRepository::getAdmin(Admin* admin)
{
    int stat = 0;
    QSqlQuery qry(_db);

    QString qadmin = "SELECT * FROM user WHERE id = :id";

    qry.prepare(qadmin);
    qry.bindValue(":id", admin->getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        admin->setUserName(qry.value(1).toString());
        admin->setDisplayName(qry.value(2).toString());
        qDebug() << QString("Admin retrieved. Admint's name is %1").arg(admin->getDisplayName());
    }

    return stat;
}

int SqliteUserRepository::getUser(QString username, int& id)
{
    QSqlQuery qry(_db);
    QString quser = "SELECT id FROM user WHERE username = :u";
    id = -1;
    qry.prepare(quser);
    qry.bindValue(":u", username);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return 1;
    } else {
        while(qry.next())
            id = qry.value(0).toInt();
    }

    return 0;
}
