#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"

class Admin : public User
{
public:
    Admin();
    Admin(int id);
    ~Admin();
    void create();
private:
};

#endif // ADMIN_H
