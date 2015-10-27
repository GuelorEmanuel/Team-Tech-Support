#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include "User.h"
#include "profile.h"

class Student : public User
{
public:
    Student(QString, QString);
    ~Student();
    QString getID();
    void setID(QString);
private:
    QString stuID;
    Profile* profile;
};

#endif // STUDENT_H
