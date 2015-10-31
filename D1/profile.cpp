#include "profile.h"

Profile::Profile()
{
}

int Profile::getId() {
    return _id;
}

void Profile::setId(int value) {
    _id = value;
}

std::vector<Qualification> Profile::getQualifications() {
    return _qualifications;
}

Profile::~Profile() {}
