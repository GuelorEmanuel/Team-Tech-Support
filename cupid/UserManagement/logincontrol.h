#ifndef LOGINCONTROL_H
#define LOGINCONTROL_H

#include <memory>
#include <QString>
class LoginWindow;

class LoginControl
{
public:
    LoginControl();
    ~LoginControl();
    void signUp();
    void createAdminAccount();
    void createStudentAccount();
    void signIn(QString userName);

private:
   std::unique_ptr<LoginWindow> _view;
};

#endif // LOGINCONTROL_H
