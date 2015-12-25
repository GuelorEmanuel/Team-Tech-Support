#ifndef REALPROFILE_H
#define REALPROFILE_H

#include "profile.h"
#include "storage.h"

class RealProfile:public Profile
{
public:
    explicit RealProfile(int id);
    explicit RealProfile(int id, int userId);
    ~RealProfile();
    virtual int getId();
    virtual void setId(int value);
    virtual void setUserId(int value);
    virtual int getUserId();
    virtual std::vector<Qualification> getQualifications();
    virtual const Qualification& getQualification(int index);
    virtual void addQualification(int, int, int);
    virtual void addQualification(Qualification&);
    virtual int getAnswer(int index);
    virtual int getMinAnswer(int index);
    virtual int getMaxAnswer(int index);
    virtual void editQualification(int num, int ans, int amin, int amax);
    virtual storage::StudentPtr getStudent();
    virtual void setStudent(storage::StudentPtr student);

private:
    int _id;
    int _userId;
    storage::StudentPtr _student;
    std::vector<Qualification> _qualifications;
};

#endif // REALPROFILE_H
