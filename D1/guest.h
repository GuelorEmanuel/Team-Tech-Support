#ifndef GUEST_H
#define GUEST_H

#include "user.h"

class Guest : public User
{
public:
    Guest();
    ~Guest();
};

#endif // GUEST_H
