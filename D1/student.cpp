#include "student.h"

Student::Student(QString name, QString id) : User(name), stuID(id)
{
    profile = new Profile(getFirstName(),getLastName(), id, name);
}

Student::~Student() {
    delete profile;
}

QString Student::getID()
{
    return stuID;
}

void Student::setID(QString id)
{
    stuID = id;
}
