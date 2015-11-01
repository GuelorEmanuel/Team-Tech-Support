#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>

class Database
{
private:
    Database(); // no public constructor
    Database(Database const&); // no implementation
    void operator=(Database const&); // no implementation
    QSqlDatabase _db;
public:
    static Database& getInstance() {
        static Database instance;
        return instance;
    }

    QSqlDatabase& db();
    ~Database();
};

#endif // DATABASE_H
