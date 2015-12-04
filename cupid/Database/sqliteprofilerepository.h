#ifndef SQLITEPROFILEREPOSITORY_H
#define SQLITEPROFILEREPOSITORY_H

#include "Storage/storage.h"
#include "Storage/profile.h"
#include "Storage/qualification.h"
#include "database.h"
#include <vector>

class SqliteProfileRepository
{
public:
    SqliteProfileRepository(QSqlDatabase& db);
    int createProfile(storage::ProfilePtr profile);
    int editProfile(storage::ProfilePtr profile);
    int getProfile(storage::ProfilePtr profile);
private:
    QSqlDatabase& _db;
};

#endif // SQLITEPROFILEREPOSITORY_H
