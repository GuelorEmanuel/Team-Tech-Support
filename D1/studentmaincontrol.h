#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include <QtSql>
#include "studenthomeview.h"

class StudentMainControl
{
public:
    StudentMainControl(QSqlDatabase& db);

private:
    StudentHomeView _view;
    QSqlDatabase& _db;
    void getNotJoinedProjectList();
    void getJoinedProjectList();
};


#endif // STUDENTMAINCONTROL_H
