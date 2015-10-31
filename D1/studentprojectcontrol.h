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
    StudentProjectControl(QSqlDatabase& db);
private:
     StudentProjectView _view;
    QSqlDatabase& _db;
};

#endif // STUDENTPROJECTCONTROL_H
