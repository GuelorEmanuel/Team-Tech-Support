#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include <memory>
#include "Storage/project.h"
#include "Storage/student.h"
#include "joinprojectwindow.h"

class JoinProjectControl
{
public:
    JoinProjectControl(int projectId, Student& stu);
    void leaveProject();
    int joinProject();
private:
     JoinProjectWindow _view;
     void loadProjectSettings(int id);
     std::auto_ptr<Project> _project;
     Student& _student;
};

#endif // STUDENTPROJECTCONTROL_H
