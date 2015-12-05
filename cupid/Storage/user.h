#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    User(int id);
    ~User();
    virtual QString getUserName() const;
    void setUserName(QString value);
    QString getDisplayName() const;
    void setDisplayName(QString value);
    int getId() const;
    void setId(int value);
    virtual bool isAdmin();
protected:    
    int _id;
    QString _userName;
    QString _displayName;
};

#endif // USER_H
