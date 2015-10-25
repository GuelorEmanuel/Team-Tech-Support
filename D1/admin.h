#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User
{
public:
    Admin(string);
    ~Admin();
};

#endif // ADMIN_H
