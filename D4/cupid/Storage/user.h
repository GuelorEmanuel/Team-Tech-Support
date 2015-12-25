#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    virtual ~User() = 0;
    virtual QString getUserName() = 0;
    virtual void setUserName(QString value) = 0;
    virtual QString getDisplayName() = 0;
    virtual void setDisplayName(QString value) = 0;
    virtual int getId() = 0;
    virtual void setId(int value) = 0;
protected:
    User();
    int _id;
    QString _userName;
    QString _displayName;
};

#endif // USER_H
