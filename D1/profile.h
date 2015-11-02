#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <vector>
#include "qualification.h"
#include <QtSql>
#include "database.h"

class Profile
{
public:
    Profile();
    int getId();
    void setId(int value);
    std::vector<Qualification> getQualifications();
    void addQualification(int, int, int);
    void addQualification(Qualification&);
    void createProfile(int stuId);
    ~Profile();
private:
    int _id;
    std::vector<Qualification> _qualifications;
};

#endif // PROFILE_H
