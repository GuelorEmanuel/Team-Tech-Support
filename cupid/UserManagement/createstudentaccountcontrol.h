#ifndef CREATESTUDENTACCOUNTCONTROL_H
#define CREATESTUDENTACCOUNTCONTROL_H

#include <memory>
#include <QString>
class CreateStudentAccountWindow;

class CreateStudentAccountControl
{
public:
    CreateStudentAccountControl();
    ~CreateStudentAccountControl();
    void cancel();
    void createAccount(QString displayName, QString userName, QString studentId);
private:
    std::unique_ptr<CreateStudentAccountWindow> _view;
};

#endif // CREATESTUDENTACCOUNTCONTROL_H
