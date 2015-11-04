#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include <QtSql>
#include "studenthomeview.h"
class Student;

class StudentMainControl
{
public:
    StudentMainControl(Student& student);
    void logout();
    void joinProject(int projectId);
    void editProfile();
    void openUnJoinedProject(int projectId);
    QString getName();
private:
    StudentHomeView _view;
    Student& _student;
    void getUnjoinedProjectList();
    void getJoinedProjectList();
};


#endif // STUDENTMAINCONTROL_H
