#ifndef CREATEADMINACCOUNTCONTROL_H
#define CREATEADMINACCOUNTCONTROL_H

#include "createadminaccountwindow.h"
#include "Storage/admin.h"

class CreateAdminAccountControl
{
public:
    CreateAdminAccountControl();
    ~CreateAdminAccountControl();
    void cancel();
    void createAdminAccount(QString displayName, QString userName);
private:
    CreateAdminAccountWindow _view;
    std::auto_ptr<Admin> _admin;
};

#endif // CREATEADMINACCOUNTCONTROL_H
