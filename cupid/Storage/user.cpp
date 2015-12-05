#include "user.h"

User::User() : User(-1) {}

User::User(int id) : _id(id) {}

User::~User() {}

QString User::getUserName() const {
    return _userName;
}

void User::setUserName(QString value) {
    _userName = value;
}

QString User::getDisplayName() const {
    return _displayName;
}

void User::setDisplayName(QString value) {
    _displayName = value;
}

int User::getId() const {
    return _id;
}

void User::setId(int value) {
    _id = value;
}

bool User::isAdmin()
{
    return false;
}
