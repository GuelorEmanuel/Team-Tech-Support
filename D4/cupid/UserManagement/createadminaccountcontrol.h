#ifndef CREATEADMINACCOUNTCONTROL_H
#define CREATEADMINACCOUNTCONTROL_H

#include "createadminaccountwindow.h"
#include "Storage/storage.h"

class CreateAdminAccountControl
{
public:
    CreateAdminAccountControl();
    ~CreateAdminAccountControl();
    void cancel();
    void createAdminAccount(QString displayName, QString userName);
private:
    CreateAdminAccountWindow _view;
    storage::AdminPtr _admin;
};

#endif // CREATEADMINACCOUNTCONTROL_H
