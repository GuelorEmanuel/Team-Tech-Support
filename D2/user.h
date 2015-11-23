#ifndef USER_H
#define USER_H
#include <QString>
#include <QObject>
#include "database.h"
#include <QtSql>

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
protected:
    int _id;
    QString _userName;
    QString _displayName;
};

#endif // USER_H
