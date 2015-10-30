#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include <memory>
#include "User.h"
#include "profile.h"

class Student : public User
{
public:
    Student(QString username, QString displayName, int id, QString studentId);
    ~Student();
    QString getStudentId();
private:
    QString studentId;
    std::auto_ptr<Profile> profile;
};

#endif // STUDENT_H
