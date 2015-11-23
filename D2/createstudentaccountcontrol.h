#ifndef CREATESTUDENTACCOUNTCONTROL_H
#define CREATESTUDENTACCOUNTCONTROL_H

#include "createstudentaccountview.h"
#include <memory>
#include "student.h"
#include <QtSql>
#include "database.h"

class CreateStudentAccountControl
{
public:
    CreateStudentAccountControl();
    ~CreateStudentAccountControl();
    void cancel();
    void createAccount(QString fname, QString lname, QString id);
private:
    CreateStudentAccountView _view;
    std::auto_ptr<Student> _student;
};

#endif // CREATESTUDENTACCOUNTCONTROL_H
