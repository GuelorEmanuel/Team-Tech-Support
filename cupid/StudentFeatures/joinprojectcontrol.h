#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include <memory>
#include "Storage/project.h"
#include "Storage/student.h"
#include "joinprojectwindow.h"

class JoinProjectControl
{
public:
    JoinProjectControl(std::shared_ptr<Project> project,
                       std::shared_ptr<Student> student);
    void leaveProject();
    int joinProject();
private:          
    JoinProjectWindow _view;
     std::shared_ptr<Project> _project;
     std::shared_ptr<Student> _student;     
     void loadProjectSettings(int id);
};

#endif // STUDENTPROJECTCONTROL_H
