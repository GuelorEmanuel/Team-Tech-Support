#ifndef USER_H
#define USER_H
#include <QString>
#include <QObject>

class User: public QObject
{
public:
    User();
    ~User();
    QString getUserName();
    void setUserName(QString value);
    QString getDisplayName();
    void setDisplayName(QString value);
    int getId();
    void setId(int value);
private:
    int _id;
    QString _userName;
    QString _displayName;
};

#endif // USER_H
