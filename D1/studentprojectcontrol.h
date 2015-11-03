#ifndef STUDENTPROJECTCONTROL_H
#define STUDENTPROJECTCONTROL_H

#include <QtSql>
#include <memory>
#include "project.h"
#include "student.h"
#include "studentprojectview.h"

class StudentProjectControl
{
public:
    StudentProjectControl(int projectId);
private:
     StudentProjectView _view;
     void loadProjectSettings(int id);
     std::auto_ptr<Project> _project;
};

#endif // STUDENTPROJECTCONTROL_H
