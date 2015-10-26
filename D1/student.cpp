#include "student.h"

Student::Student(string name, string id) : User(name), stuID(id)
{
    profile = new Profile;
}

Student::~Student() {
    delete profile;
}

void Student::getID()
{
    return stuID;
}

string Student::setID(string id)
{
    stuID = id;
}
