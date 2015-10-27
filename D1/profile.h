#ifndef PROFILE_H
#define PROFILE_H
#include <QString>
#include "qualifications.h"

class Profile
{
public:
    Profile(QString, QString, QString, QString);
    ~Profile();

private:
    QString fname;
    QString lname;
    QString id;
    QString userName;
};

#endif // PROFILE_H
