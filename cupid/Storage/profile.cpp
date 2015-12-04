#include "profile.h"

Profile::Profile(){}
int Profile::getId() {}
void Profile::setId(int value){}
void Profile::setStuId(int value){}
int Profile::getStuId(){}
std::vector<Qualification> Profile::getQualifications(){}
int Profile::addQualification(int answer, int min, int max){}
int Profile::addQualification(Qualification &qual){}
int Profile::getAnswer(int index){}
int Profile::getMinAnswer(int index){}
int Profile::getMaxAnswer(int index) {}
int Profile::loadQualification() {}
int Profile::editQualification(int num, int ans, int amin, int amax){}
int Profile::createProfile(){}
int Profile::editProfile(){}
Profile::~Profile() {}
