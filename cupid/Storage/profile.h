#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include <vector>
#include "qualification.h"
#include "storage.h"

class Profile
{
public:
    virtual int getId()=0;
    virtual void setId(int value)=0;
    virtual void setStuId(int value)=0;
    virtual int getStuId() = 0;
    virtual std::vector<Qualification> getQualifications()=0;
    virtual void addQualification(int ans, int minAns, int maxAns)=0;
    virtual void addQualification(Qualification &qualification)=0;
    virtual int getAnswer(int index)=0;
    virtual int getMinAnswer(int index)=0;
    virtual int getMaxAnswer(int index)=0;
    virtual void loadQualification()=0;
    virtual void editQualification(int num, int ans, int amin, int amax)=0;
    virtual storage::StudentList getStudents() = 0;
    virtual void setStudents(storage::StudentList students) = 0;
    virtual void registerStudent(storage::StudentPtr student) = 0;

    virtual void editProfile()=0;
    virtual ~Profile()=0;

    enum
    {
        Q_DESIRED_GRADE = 0,
        Q_PROCRASTINATION,
        Q_QUALITY_STANDARDS,
        Q_GRADE_CGPA,
        Q_GRADE_2401,
        Q_GRADE_2404,
        Q_TIME_WORK_OVER_BREAK,
        Q_TIME_MORNING_PERSON,
        Q_TIME_NIGHT_OWL,
        Q_TIME_FLEXIBILITY,
        Q_ROLE_LEADER,
        Q_ROLE_FOLLOWER,
        Q_ROLE_DETAIL,
        Q_ROLE_BIG_PICTURE,
        Q_ROLE_CHALLENGE,
        Q_ROLE_REPETITIVE,
        Q_ROLE_IDEA_GENERATION,
        Q_ROLE_IDEA_EVALUATION,
        Q_PERSONALITY_BLUNTNESS,
        Q_PERSONALITY_COMMUNICATION,
        Q_PERSONALITY_STRUCTURE,
        Q_SKILL_PROGRAMMING,
        Q_SKILL_DOCUMENTATION,
        Q_SKILL_PRESENTATION,
        Q_SKILL_ORGANIZATION,
        Q_SKILL_RESEARCH,
        Q_EFFICIENCY,
        Q_WORKLOAD
    };
protected:
    Profile();


};

#endif // PROFILE_H
