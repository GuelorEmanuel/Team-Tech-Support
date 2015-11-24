#ifndef LOGINCONTROL_H
#define LOGINCONTROL_H

#include "logincontrol.h"
#include "loginwindow.h"

class LoginControl
{
public:
    LoginControl();
    ~LoginControl();
    void signUp();
    int signIn(QString userName);

private:
   LoginWindow _view;
};

#endif // LOGINCONTROL_H
