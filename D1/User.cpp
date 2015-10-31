#include "User.h"

User::User(QString username, QString displayName, int id) :
    username(username), displayName(displayName), id(id) {}

User::~User() {}

QString User::getUserName() {
    return username;
}

QString User::getDisplayName() {
    return displayName;
}

int User::getId() {
    return id;
}
