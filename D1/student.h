#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include "profile.h"

class Student : public User
{
public:
    Student(strings, string);
    ~Student();
    string getID();
    string setID(string);
private:
    string stuID;
    Profile *profile;
};

#endif // STUDENT_H
