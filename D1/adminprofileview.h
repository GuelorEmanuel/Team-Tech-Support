#ifndef ADMINPROFILEVIEW_H
#define ADMINPROFILEVIEW_H

#include "adminprofile.h"

class AdminProfileView
{
public:
    AdminProfileView(AdminProfile*);
    ~AdminProfileView();

private:
    AdminProfile* profile;
};

#endif // ADMINPROFILEVIEW_H
