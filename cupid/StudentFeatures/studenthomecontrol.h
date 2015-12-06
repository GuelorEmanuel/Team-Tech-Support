#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include "Storage/storage.h"
#include "studenthomewindow.h"

class StudentHomeControl
{
public:
    StudentHomeControl(storage::StudentPtr student);
    void logout();
    void editProfile();
    void openUnJoinedProject(int projectId);
    QString getName();

private:
    StudentHomeWindow _view;
    storage::StudentPtr _student;
    void getUnjoinedProjectList();
    void getJoinedProjectList();
};


#endif // STUDENTMAINCONTROL_H
