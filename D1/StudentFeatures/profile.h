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
    void setStuId(int value);
    int getStuId();
    std::vector<Qualification> getQualifications();
    void addQualification(int, int, int);
    void addQualification(Qualification&);
    int getAnswer(int index);
    int getMinAnswer(int index);
    int getMaxAnswer(int index);
    void loadQualification();
    void editQualification(int num, int ans, int amin, int amax);
    //void editQualification(int num, Qualification&);
    void createProfile();
    void editProfile();
    ~Profile();
private:
    int _id;
    int _stuId;
    std::vector<Qualification> _qualifications;
};

#endif // PROFILE_H
