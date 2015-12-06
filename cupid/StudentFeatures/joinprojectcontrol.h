#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include "Storage/storage.h"
#include "joinprojectwindow.h"
#include "studenthomewindow.h"
#include "studentfeaturescommunication.h"

class JoinProjectControl
{
public:
    JoinProjectControl(storage::ProjectPtr project,
                       storage::StudentPtr student, StudentHomeWindow& view);
    void leaveProject();
    int joinProject();

private:          
    JoinProjectWindow _view;
     storage::ProjectPtr _project;
     storage::StudentPtr _student;
     void loadProjectSettings(int id);
     StudentHomeWindow &_stuView;
};


#endif // STUDENTPROJECTCONTROL_H
