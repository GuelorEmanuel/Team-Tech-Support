#include "proxyprofile.h"

ProxyProfile::ProxyProfile() : ProxyProfile(-1)
{
}

ProxyProfile::ProxyProfile(int id) : _id(id)
{
}
int ProxyProfile::getId(){
    return 0;
}
void ProxyProfile::setId(int value){

}
void ProxyProfile::setStuId(int value){

}
int ProxyProfile::getStuId(){

}
std::vector<Qualification> ProxyProfile::getQualifications(){

}
void ProxyProfile::addQualification(int ans, int minAns, int maxAns){

}
void ProxyProfile::addQualification(Qualification &qualification){

}
int ProxyProfile::getAnswer(int index){

}
int ProxyProfile::getMinAnswer(int index){
}

int ProxyProfile::getMaxAnswer(int index){

}
void ProxyProfile::loadQualification(){

}
void ProxyProfile::editQualification(int num, int ans, int amin, int amax){

}
void ProxyProfile::createProfile(){

}
void ProxyProfile::editProfile(){

}
