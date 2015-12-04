#ifndef SQLITEUSERREPOSITORY_H
#define SQLITEUSERREPOSITORY_H

#include "Storage/storage.h"
#include <QString>
#include "database.h"
class Student;
class Admin;
class QSqlDatabase;

class SqliteUserRepository
{
public:
    SqliteUserRepository(QSqlDatabase& db);
    int createStudent(storage::StudentPtr student);
    int createAdmin(storage::AdminPtr admin);
    int getStudent(storage::StudentPtr student);
    int getAdmin(storage::AdminPtr admin);
    int getUser(QString username, int& id);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEUSERREPOSITORY_H
