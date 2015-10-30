
#include "User.h"


User::User(QString name) : username(name) {}

User::~User() {}

QString User::getUserName() {
    return username;
}
QString User::getFirstName() {
    return firstName;
}
QString User::getLastName() {
    return lastName;
}

void User::setUserName(QString name) {
    username = name;
}
