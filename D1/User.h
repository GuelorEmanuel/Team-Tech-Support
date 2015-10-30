#ifndef USER_H
#define USER_H
#include <QString>
#include <QObject>

class User: public QObject
{
public:
    User(QString);
    ~User();
    void setUserName(QString);
    QString getUserName();
    QString getFirstName();
    QString getLastName();
 private:
    QString username;
    QString firstName;
    QString lastName;
};

#endif // USER_H
