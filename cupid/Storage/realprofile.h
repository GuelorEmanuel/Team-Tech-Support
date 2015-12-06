#ifndef REALPROFILE_H
#define REALPROFILE_H
#include "profile.h"
#include "storage.h"
#include <memory>
#include "proxystudent.h"

class RealProfile:public Profile
{
public:
    explicit RealProfile(int id);
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
    //virtual void createProfile();
    virtual void editProfile();
    virtual storage::StudentPtr  getStudent();
    virtual void setStudent(storage::StudentPtr student);
    virtual void registerStudent(storage::StudentPtr student);


private:
    int _id;
    int _stuId;
    //storage::ProfileList _profiles;
    storage::StudentPtr _student;
    std::vector<Qualification> _qualifications;

};

#endif // REALPROFILE_H
