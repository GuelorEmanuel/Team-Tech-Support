#ifndef PROXYPROFILE_H
#define PROXYPROFILE_H

#include "profile.h"

class ProxyProfile : public Profile
{
public:
    ProxyProfile();
    ProxyProfile(int id);
    virtual int getId();
    virtual void setId(int value);
    virtual void setStuId(int value);
    virtual int getStuId();
    virtual std::vector<Qualification> getQualifications();
    virtual void addQualification(int, int, int);
    virtual void addQualification(Qualification&);
    virtual int getAnswer(int index);
    virtual int getMinAnswer(int index);
    virtual int getMaxAnswer(int index);
    virtual void loadQualification();
    virtual void editQualification(int num, int ans, int amin, int amax);
    virtual void createProfile();
    virtual void editProfile();
private:
    int _id;
};

#endif // PROXYPROFILE_H
