#ifndef USER_H
#define USER_H
#include <QString>
#include <QObject>

class User: public QObject
{
public:
    User(QString username, QString displayName, int id);
    ~User();
    QString getUserName();
    QString getDisplayName();
    int getId();
private:
    int id;
    QString username;
    QString displayName;
};

#endif // USER_H
