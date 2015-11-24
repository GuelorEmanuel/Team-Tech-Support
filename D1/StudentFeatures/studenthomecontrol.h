#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include "studenthomewindow.h"
class Student;

class StudentHomeControl
{
public:
    StudentHomeControl(Student& student);
    void logout();
    void editProfile();
    void openUnJoinedProject(int projectId);

    QString getName();
private:
    StudentHomeWindow _view;
    Student& _student;
    void getUnjoinedProjectList();
    void getJoinedProjectList();
};


#endif // STUDENTMAINCONTROL_H
