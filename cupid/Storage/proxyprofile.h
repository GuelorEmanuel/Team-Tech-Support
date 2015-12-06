#ifndef PROXYPROFILE_H
#define PROXYPROFILE_H

#include "profile.h"
#include "realprofile.h"
#include "proxystudent.h"
#include <memory>

class ProxyProfile : public Profile
{
public:
    explicit ProxyProfile();
    explicit ProxyProfile(int id);
    ~ProxyProfile();
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
    //virtual void createProfile();
    virtual void editProfile();
    virtual storage::StudentPtr  getStudent();
    virtual void setStudent(storage::StudentPtr student);
    virtual void registerStudent(storage::StudentPtr student);
protected:
    void initRealProfile();
private:
    std::unique_ptr<RealProfile> _profile;
    int _id;
    int _stuId;
    std::vector<Qualification> _qualifications;
   // std::unique_ptr<ProxyStudent> _student; //remove this
};

#endif // PROXYPROFILE_H
