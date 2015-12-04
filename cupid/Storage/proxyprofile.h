#ifndef PROXYPROFILE_H
#define PROXYPROFILE_H
#include "qualification.h"
#include "realprofile.h"
#include "profile.h"
#include "realstudent.h"

class ProxyProfile: public Profile
{
public:

    ProxyProfile();
    virtual ~ProxyProfile();
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



protected:
   std::auto_ptr<RealStudent> getStudent();
  std::auto_ptr<RealProfile> getProfile();

};

#endif // PROXYPROFILE_H
