#include "user.h"

User::User() {}

User::~User() {}

QString User::getUserName() {
    return _userName;
}

void User::setUserName(QString value) {
    _userName = value;
}

QString User::getDisplayName() {
    return _displayName;
}

void User::setDisplayName(QString value) {
    _displayName = value;
}

int User::getId() {
    return _id;
}

void User::setId(int value) {
    _id = value;
}
