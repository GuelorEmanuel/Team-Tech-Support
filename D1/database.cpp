#include "database.h"

/*Class opens database and could be called any time
 * program needs to communicate with db by using cmd:
 *      Database::getInstance().db()
 */
Database::Database() {
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./mydb.sqlite");
    _db.open(); // ignore return code
}

Database::~Database() {}

QSqlDatabase& Database::db() { return _db; }
