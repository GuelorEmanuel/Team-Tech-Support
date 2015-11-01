#ifndef CREATESTUDENTACCOUNTCONTROL_H
#define CREATESTUDENTACCOUNTCONTROL_H

#include "createstudentaccountview.h"

class CreateStudentAccountControl
{
public:
    CreateStudentAccountControl();
    ~CreateStudentAccountControl();
    void cancel();
private:
    CreateStudentAccountView _view;
};

#endif // CREATESTUDENTACCOUNTCONTROL_H
