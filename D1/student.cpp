#include "student.h"

Student::Student(QString username, QString displayName, int id, QString studentId) :
    User(username, displayName, id), studentId(studentId)
{
    // What to do about profile initialization?
}

Student::~Student() {
}

QString Student::getStudentId()
{
    return studentId;
}
