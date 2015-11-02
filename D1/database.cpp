#include "database.h"

Database::Database() {
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("/home/admin/Desktop/Team-Tech-Support/D1/mydb.sqlite");
    _db.open(); // ignore return code
}

Database::~Database() {}

QSqlDatabase& Database::db() { return _db; }
