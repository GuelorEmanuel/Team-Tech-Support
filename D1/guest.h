#ifndef GUEST_H
#define GUEST_H

#include "User.h"

class Guest : public User
{
public:
    Guest(QString);
    ~Guest();
};

#endif // GUEST_H
