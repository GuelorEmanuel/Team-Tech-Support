#ifndef STUDENTPROFILE_H
#define STUDENTPROFILE_H

#include "profile.h"

class StudentProfile : public Profile
{
public:
    StudentProfile(string, string, string);
    ~StudentProfile();
private:
    Qualifications *quals;
};

#endif // STUDENTPROFILE_H
