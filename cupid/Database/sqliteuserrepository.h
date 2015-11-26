#ifndef SQLITEUSERREPOSITORY_H
#define SQLITEUSERREPOSITORY_H

#include "Storage/admin.h"
#include "Storage/student.h"
#include "database.h"

class SqliteUserRepository
{
public:
    SqliteUserRepository();
    int createStudent(Student& student);
    int createAdmin(Admin& admin);
    int getStudent(Student& student);
    int getAdmin(Admin& admin);
};

#endif // SQLITEUSERREPOSITORY_H
