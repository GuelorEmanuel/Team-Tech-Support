#ifndef GUEST_H
#define GUEST_H

#include "User.h"

class Guest : public User
{
public:
    Guest(string = "GUEST");
    ~Guest();
};

#endif // GUEST_H
