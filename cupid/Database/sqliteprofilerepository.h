#ifndef SQLITEPROFILEREPOSITORY_H
#define SQLITEPROFILEREPOSITORY_H

#include "Storage/storage.h"
class QSqlDatabase;

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
