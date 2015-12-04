#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    ~User();
    virtual QString getUserName();
    void setUserName(QString value);
    QString getDisplayName();
    void setDisplayName(QString value);
    int getId();
    void setId(int value);
protected:
    User();
    int _id;
    QString _userName;
    QString _displayName;
};

#endif // USER_H
