#include "realprofile.h"
#include <vector>


RealProfile::RealProfile(){
}
RealProfile::~RealProfile(){

}
int RealProfile::getId(){
  return 0;
}
void RealProfile::setId(int value){
  //return 0;
}
void RealProfile::setStuId(int value){
  //return 0;
}
int RealProfile::getStuId(){
  return 0;
}
int RealProfile::addQualification(int choosen, int p1, int p2){
  return 0;
}
int RealProfile::addQualification(Qualification & qualification){
  return 0;
}
int RealProfile::getAnswer(int index){
  return 0;
}
int RealProfile::getMinAnswer(int index){
  return 0;
}
int RealProfile::getMaxAnswer(int index){
  return 0;
}
std::vector<Qualification> RealProfile::getQualifications() {
    //return _qualifications;
}

int RealProfile::loadQualification(){
  return 0;
}

int RealProfile::editQualification(int num, int ans, int amin, int amax){
  return 0;
}
int RealProfile::editQualification(int num, Qualification &qualification){

}

int RealProfile::createProfile(){
  return 0;
}
int RealProfile::editProfile(){
  return 0;
}
