#include "database.h"
#include "sqlitedatabase.h"

Database* Database::instance() {
    static Database* _instance = NULL;
    if (_instance == NULL) {
        // If you want to switch to a different database
        // implementation, this is the only line
        // you have to change.
        _instance = SqliteDatabase::instance();
    }

    return _instance;
}

Database::~Database() {}

Database::Database() {}
