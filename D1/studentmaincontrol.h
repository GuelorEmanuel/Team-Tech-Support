#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include <QtSql>
#include "studenthomeview.h"
class Student;

class StudentMainControl
{
public:
    StudentMainControl(QSqlDatabase& db, Student& student);

private:
    StudentHomeView _view;
    QSqlDatabase& _db;
    Student& _student;
    void getNotJoinedProjectList();
    void getJoinedProjectList();
};


#endif // STUDENTMAINCONTROL_H
