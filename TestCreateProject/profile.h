#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <vector>
#include "qualification.h"

class Profile
{
public:
    Profile();
    int getId();
    void setId(int value);
    std::vector<Qualification> getQualifications();
    ~Profile();
private:
    int _id;
    std::vector<Qualification> _qualifications;
};

#endif // PROFILE_H
