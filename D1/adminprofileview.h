#ifndef ADMINPROFILEVIEW_H
#define ADMINPROFILEVIEW_H

#include <memory>
#include "admin.h"

class AdminProfileView
{
public:
    AdminProfileView(Admin* admin);
    ~AdminProfileView();

private:
    std::auto_ptr<Admin> _admin;
};

#endif // ADMINPROFILEVIEW_H
