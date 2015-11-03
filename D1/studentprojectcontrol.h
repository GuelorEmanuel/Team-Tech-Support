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
};

#endif // STUDENTPROJECTCONTROL_H
