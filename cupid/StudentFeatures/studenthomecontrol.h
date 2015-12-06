#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include "Storage/storage.h"
#include "studenthomewindow.h"
#include "studentfeaturescommunication.h"

class StudentHomeControl
{
public:
    StudentHomeControl(storage::StudentPtr student);
    void logout();
    void editProfile();
    void openUnJoinedProject(int projectId);
    QString getName();
    void getUnjoinedProjectList();
    void getJoinedProjectList();

private:
    StudentHomeWindow _view;
    storage::StudentPtr _student;
};


#endif // STUDENTMAINCONTROL_H
