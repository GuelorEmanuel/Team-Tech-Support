#ifndef CREATESTUDENTACCOUNTCONTROL_H
#define CREATESTUDENTACCOUNTCONTROL_H

#include "createstudentaccountwindow.h"
#include <memory>
#include "Storage/student.h"

class CreateStudentAccountControl
{
public:
    CreateStudentAccountControl();
    ~CreateStudentAccountControl();
    void cancel();
    void createAccount(QString fname, QString lname, QString id);
private:
    CreateStudentAccountWindow _view;
    std::auto_ptr<Student> _student;
};

#endif // CREATESTUDENTACCOUNTCONTROL_H
