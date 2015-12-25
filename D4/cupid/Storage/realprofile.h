#ifndef REALPROFILE_H
#define REALPROFILE_H

#include "qualification.h"
#include <vector>

class RealProfile
{
public:
    RealProfile();
    virtual ~RealProfile();
    virtual int getId();
    virtual void setId(int value);
    virtual void setStuId(int value);
    virtual int getStuId();
    virtual std::vector<Qualification> getQualifications();
    virtual int addQualification(int, int, int);
    virtual int addQualification(Qualification&);
    virtual int getAnswer(int index);
    virtual int getMinAnswer(int index);
    virtual int getMaxAnswer(int index);
    virtual int loadQualification();
    virtual int editQualification(int num, int ans, int amin, int amax);
    virtual int editQualification(int num, Qualification&);
    virtual int createProfile();
    virtual int editProfile();
};

#endif // REALPROFILE_H
