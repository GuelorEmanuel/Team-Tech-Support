#ifndef CREATEADMINACCOUNTCONTROL_H
#define CREATEADMINACCOUNTCONTROL_H

#include <QtSql>
#include "createadminaccountview.h"

class CreateAdminAccountControl
{
public:
    CreateAdminAccountControl();
    ~CreateAdminAccountControl();
    void cancel();
    void createAdminAccount(QString displayName, QString userName);
private:
    CreateAdminAccountView _view;
};

#endif // CREATEADMINACCOUNTCONTROL_H
