#ifndef ADMINPROFILE_H
#define ADMINPROFILE_H
#include <QString>
#include "profile.h"

class AdminProfile : public Profile
{
public:
    AdminProfile(QString, QString, QString, QString);
    ~AdminProfile();

};

#endif // ADMINPROFILE_H
