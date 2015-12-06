#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include "Storage/storage.h"
#include "joinprojectwindow.h"
#include "studentfeaturescommunication.h"
#include "studenthomewindow.h"

class JoinProjectControl
{
public:
    JoinProjectControl(storage::ProjectPtr project,
                       storage::StudentPtr student, StudentHomeWindow *view);
    void leaveProject();
    int joinProject();

private:          
    JoinProjectWindow _view;
     storage::ProjectPtr _project;
     storage::StudentPtr _student;
     void loadProjectSettings(int id);
     StudentHomeWindow *viewStu;
};
#endif // STUDENTPROJECTCONTROL_H
