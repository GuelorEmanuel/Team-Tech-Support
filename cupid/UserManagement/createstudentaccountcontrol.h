#ifndef CREATESTUDENTACCOUNTCONTROL_H
#define CREATESTUDENTACCOUNTCONTROL_H

#include "createstudentaccountwindow.h"
#include "Storage/storage.h"

class CreateStudentAccountControl
{
public:
    CreateStudentAccountControl();
    ~CreateStudentAccountControl();
    void cancel();
    void createAccount(QString fname, QString lname, QString id);
private:
    CreateStudentAccountWindow _view;
    storage::StudentPtr _student;
};

#endif // CREATESTUDENTACCOUNTCONTROL_H
