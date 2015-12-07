#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include "Storage/storage.h"
class JoinProjectWindow;
class StudentHomeControl;

class JoinProjectControl
{
public:
    JoinProjectControl(storage::ProjectPtr project,
<<<<<<< HEAD
                       storage::StudentPtr student, StudentHomeWindow* view);
=======
                       storage::StudentPtr student, StudentHomeControl& homeControl);
    ~JoinProjectControl();
>>>>>>> 4b7ee32a75b812131dd82fbdf97005291ec471a2
    void leaveProject();
    int joinProject();

private:          
<<<<<<< HEAD
    JoinProjectWindow _view;
     storage::ProjectPtr _project;
     storage::StudentPtr _student;
     void loadProjectSettings(int id);
     StudentHomeWindow *_stuView;
=======
    std::unique_ptr<JoinProjectWindow> _view;
    storage::ProjectPtr _project;
    storage::StudentPtr _student;
    StudentHomeControl &_homeControl;
    void loadProjectSettings(int id);
>>>>>>> 4b7ee32a75b812131dd82fbdf97005291ec471a2
};


#endif // STUDENTPROJECTCONTROL_H
