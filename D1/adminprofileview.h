#ifndef ADMINPROFILEVIEW_H
#define ADMINPROFILEVIEW_H

<<<<<<< HEAD
#include "adminprofile.h"
=======
#include <memory>
#include "admin.h"
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

class AdminProfileView
{
public:
<<<<<<< HEAD
    AdminProfileView(AdminProfile*);
    ~AdminProfileView();

private:
    AdminProfile* profile;
=======
    AdminProfileView(Admin* admin);
    ~AdminProfileView();

private:
    std::auto_ptr<Admin> _admin;
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
};

#endif // ADMINPROFILEVIEW_H
