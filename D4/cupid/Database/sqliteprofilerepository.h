#ifndef SQLITEPROFILEREPOSITORY_H
#define SQLITEPROFILEREPOSITORY_H

#include "Storage/profile.h"
#include "Storage/qualification.h"
#include "database.h"
#include <vector>

class SqliteProfileRepository
{
public:
    SqliteProfileRepository();
    int createProfile(Profile& profile);
    int editProfile(Profile& profile);
    int getProfile(Profile& profile);
};

#endif // SQLITEPROFILEREPOSITORY_H
