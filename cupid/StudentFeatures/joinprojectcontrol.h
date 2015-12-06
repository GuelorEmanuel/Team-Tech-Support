#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include "Storage/storage.h"
class JoinProjectWindow;
class StudentHomeControl;

class JoinProjectControl
{
public:
    JoinProjectControl(storage::ProjectPtr project,
                       storage::StudentPtr student, StudentHomeControl& homeControl);
    ~JoinProjectControl();
    void leaveProject();
    int joinProject();

private:          
    std::unique_ptr<JoinProjectWindow> _view;
    storage::ProjectPtr _project;
    storage::StudentPtr _student;
    StudentHomeControl &_homeControl;
    void loadProjectSettings(int id);
};


#endif // STUDENTPROJECTCONTROL_H
