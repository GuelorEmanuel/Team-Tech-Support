#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <vector>
#include "qualification.h"

class Profile
{
public:

    virtual int getId() = 0;
    virtual void setId(int value) = 0;
    virtual void setStuId(int value) = 0;
    virtual int getStuId() = 0;
    virtual std::vector<Qualification> getQualifications() = 0;
    virtual int addQualification(int, int, int) = 0;
    virtual int addQualification(Qualification&) = 0;
    virtual int getAnswer(int index) = 0;
    virtual int getMinAnswer(int index) = 0;
    virtual int getMaxAnswer(int index) = 0;
    virtual int loadQualification() = 0;
    virtual int editQualification(int num, int ans, int amin, int amax) = 0;
    virtual int editQualification(int num, Qualification&) = 0;
    virtual int createProfile() = 0;
    virtual int editProfile() = 0;
    virtual ~Profile() = 0;

protected:
    Profile();
    int _id;
    int _stuId;
    std::vector<Qualification> _qualifications;
};

#endif // PROFILE_H
