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
    StudentProjectControl(int projectId, Student& stu);
    void leaveProject();
    void joinProject();
private:
     StudentProjectView _view;
     void loadProjectSettings(int id);
     std::auto_ptr<Project> _project;
     Student& _student;
};

#endif // STUDENTPROJECTCONTROL_H
