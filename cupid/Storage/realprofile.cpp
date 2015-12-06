#include "realprofile.h"

/*RealProfile::RealProfile(){
}
RealProfile::RealProfile(int id){

}*/

RealProfile::RealProfile(int id):_id(id){

}

RealProfile::RealProfile():_id(-1),_stuId(-1){

}

RealProfile::~RealProfile(){

}

int RealProfile::getId(){
  return _id;
}
void RealProfile::setId(int value){
  _id = value;
}
int RealProfile::getStuId(){
   _stuId = _student->getStudentId().toInt();
   return _stuId;
}
std::vector<Qualification> RealProfile::getQualifications(){
  return _qualifications;
}
void RealProfile::addQualification(int ans, int minAns, int maxAns){
    Qualification qual;
    qual.setAnswer(ans);
    qual.setMinAnswer(minAns);
    qual.setMaxAnswer(maxAns);
    _qualifications.push_back(qual);

}
void RealProfile::addQualification(Qualification &qual){
    _qualifications.push_back(qual);

}
int RealProfile::getAnswer(int index){
    if (index < 1 || index > 29){
        return -1;
    }else{
      return _qualifications[index-1].getAnswer();
    }

}
int RealProfile::getMinAnswer(int index){
    if (index < 1 || index > 29){
        return -1;
    }else{
      return _qualifications[index-1].getMinAnswer();
    }

}
int RealProfile::getMaxAnswer(int index){
    if (index < 1 || index > 29){
        return -1;
    }else{
      return _qualifications[index-1].getMaxAnswer();
    }

}
void RealProfile::loadQualification(){

}
void RealProfile::editQualification(int num, int ans, int amin, int amax){
    if (num < 0 || num > 28) return;
     _qualifications[num].setAnswer(ans);
     _qualifications[num].setMinAnswer(amin);
     _qualifications[num].setMaxAnswer(amax);
}

void RealProfile::editProfile(){

}

void RealProfile::setStuId(int value){
    _student->setStudentId( QString::number(value));

}
void RealProfile::createProfile(){

}

