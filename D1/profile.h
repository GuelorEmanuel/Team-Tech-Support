#ifndef PROFILE_H
#define PROFILE_H

#include "qualifications.h"

class Profile
{
public:
    Profile(string, string, string);
    ~Profile();

private:
    string fname;
    string lname;
    string id;
};

#endif // PROFILE_H
