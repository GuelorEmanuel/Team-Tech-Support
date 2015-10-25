#ifndef TEAM_H
#define TEAM_H

#include "student.h"

class Team
{
public:
    Team(int);
    ~Team();
    int addStudent(Student*);

private:
    int size;
    int numOfStuds;
    Student **students;
};

#endif // TEAM_H
