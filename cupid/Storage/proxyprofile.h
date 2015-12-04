#ifndef PROXYPROFILE_H
#define PROXYPROFILE_H

#include "profile.h"

class ProxyProfile : public Profile
{
public:
    ProxyProfile();
    ProxyProfile(int id);
private:
    int _id;
};

#endif // PROXYPROFILE_H
