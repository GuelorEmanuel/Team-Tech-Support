#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include "Storage/storage.h"
#include "joinprojectwindow.h"

class JoinProjectControl
{
public:
    JoinProjectControl(storage::ProjectPtr project,
                       storage::StudentPtr student);
    void leaveProject();
    int joinProject();

private:          
    JoinProjectWindow _view;
     storage::ProjectPtr _project;
     storage::StudentPtr _student;
     void loadProjectSettings(int id);
};

#endif // STUDENTPROJECTCONTROL_H
