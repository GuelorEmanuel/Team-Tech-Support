#ifndef SQLITEUSERREPOSITORY_H
#define SQLITEUSERREPOSITORY_H

#include <QString>
#include "database.h"
class Student;
class Admin;
class QSqlDatabase;

class SqliteUserRepository
{
public:
    SqliteUserRepository(QSqlDatabase& db);
    int createStudent(Student* student);
    int createAdmin(Admin* admin);
    int getStudent(Student* student);
    int getAdmin(Admin* admin);
    int getUser(QString username, int& id);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEUSERREPOSITORY_H
