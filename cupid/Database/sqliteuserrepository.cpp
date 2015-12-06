#include "Storage/storage.h"
#include "sqliteuserrepository.h"
#include "Storage/admin.h"
#include "Storage/student.h"
#include "Storage/proxystudent.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
using namespace storage;

SqliteUserRepository::SqliteUserRepository(QSqlDatabase& db)
    : _db(db)
{
}

int SqliteUserRepository::createStudent(StudentPtr student)
{
    int stat = 0;
    QSqlQuery qry(_db);
    QString qstudent = "INSERT INTO user VALUES(:id, :u, :dn, :sid)";

    QString qid = "SELECT MAX(id) FROM user";

    if(!qry.exec(qid)) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qry.next();
        student->setId(qry.value(0).toInt()+1);
    }

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

int SqliteUserRepository::createAdmin(AdminPtr admin)
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

int SqliteUserRepository::getStudent(StudentPtr student)
{
    int stat = 0;
    QSqlQuery qry(_db);

    qDebug() << "Hey in db";
    if(student->getId() == -1) {
        QString qstudent = "SELECT * FROM user WHERE username = :u";
        qry.prepare(qstudent);
        qry.bindValue(":u", student->getUserName());
    } else {
        QString qstudent = "SELECT * FROM user WHERE id = :id";
        qry.prepare(qstudent);
        qry.bindValue(":id", student->getId());
    }

    qDebug() << "Hey in db";
    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        qDebug() << "Hey in db1";
        if(qry.next()) {
            if(!qry.value(3).isNull()) {
                student->setUserName(qry.value(1).toString());
                student->setDisplayName(qry.value(2).toString());
                qDebug() << QString("Value stu id %1").arg(qry.value(3).toString());
                //student->setStudentId(qry.value(3).toString());
                qDebug() << QString("Student retrieved. Student's name is %1").arg(student->getId());
            } else {
                stat = 1;
            }
        } else
            stat = 1;
    }

    return stat;
}

int SqliteUserRepository::getAdmin(AdminPtr admin)
{
    int stat = 0;
    QSqlQuery qry(_db);

    if(admin->getId() == -1) {
        QString qadmin = "SELECT * FROM user WHERE username = :u";
        qry.prepare(qadmin);
        qry.bindValue(":u", admin->getUserName());
    } else {
        QString qadmin = "SELECT * FROM user WHERE id = :id";
        qry.prepare(qadmin);
        qry.bindValue(":id", admin->getId());
    }

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return stat = 1;
    } else {
        if(qry.next()) {
            if(qry.value(3).isNull()){
                admin->setUserName(qry.value(1).toString());
                admin->setDisplayName(qry.value(2).toString());
                qDebug() << QString("Admin retrieved. Admint's name is %1").arg(admin->getDisplayName());
            } else
                stat = 1;
        } else {
            stat = 1;
        }
    }

    return stat;
}

storage::UserPtr SqliteUserRepository::getUser(UserPtr user)
{
    QSqlQuery qry(_db);
    QString quser = "SELECT id, student_id FROM user WHERE username = :u";
    qry.prepare(quser);
    qry.bindValue(":u", user->getUserName());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return NULL;
    } else {
        while(qry.next()){
            if(qry.value(1).isNull()) {
                return AdminPtr(std::make_shared<Admin>(qry.value(0).toInt()));
            } else {
                return StudentPtr(std::make_shared<ProxyStudent>(qry.value(0).toInt()));
            }
        }
        return NULL;
    }

    return 0;
}
