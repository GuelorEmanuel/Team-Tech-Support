#ifndef CREATEADMINACCOUNTCONTROL_H
#define CREATEADMINACCOUNTCONTROL_H

#include <QtSql>
#include "createadminaccountview.h"
#include "admin.h"

class CreateAdminAccountControl
{
public:
    CreateAdminAccountControl();
    ~CreateAdminAccountControl();
    void cancel();
    void createAdminAccount(QString displayName, QString userName);
private:
    CreateAdminAccountView _view;
    std::auto_ptr<Admin> _admin;
};

#endif // CREATEADMINACCOUNTCONTROL_H
