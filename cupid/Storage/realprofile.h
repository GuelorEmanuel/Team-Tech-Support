#ifndef REALPROFILE_H
#define REALPROFILE_H
#include "profile.h"
#include "storage.h"
#include <memory>
#include "proxystudent.h"

class RealProfile:public Profile
{
public:
    RealProfile();
    RealProfile(int id);
    ~RealProfile();
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
    int _stuId;
    std::vector<Qualification> _qualifications;
    storage::ProfileList _profiles;
     std::unique_ptr<ProxyStudent> _student;

};

#endif // REALPROFILE_H
