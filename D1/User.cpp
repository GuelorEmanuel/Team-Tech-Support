#include "User.h"

User::User(string name) : username(name) {}

User::~User() {}

string User::getName()
{
    return username;
}

void User::setNane(string name) {
    username = name;
}
