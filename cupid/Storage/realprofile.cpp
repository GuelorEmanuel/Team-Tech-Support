#include "realprofile.h"

/*RealProfile::RealProfile(){
}
RealProfile::RealProfile(int id){

}*/

int RealProfile::getId(){
  return _id;
}
void RealProfile::setId(int value){
  _id = value;
}
int RealProfile::getStuId(){
    return _stuId;
}
std::vector<Qualification> RealProfile::getQualifications(){
  return _qualifications;
}
void RealProfile::addQualification(int, int, int){

}
void RealProfile::addQualification(Qualification &){

}
int RealProfile::getAnswer(int index){

}
int RealProfile::getMinAnswer(int index){

}
int RealProfile::getMaxAnswer(int index){

}
void RealProfile::loadQualification(){

}
void RealProfile::editQualification(int num, int ans, int amin, int amax){

}

void RealProfile::editProfile(){

}

