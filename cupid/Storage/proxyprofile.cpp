#include "proxyprofile.h"
#include "storagemanager.h"
using namespace storage;

ProxyProfile::ProxyProfile() : _id(-1),_stuId(-1) {
}

ProxyProfile::ProxyProfile(int id) : _id(id) {
}

ProxyProfile::~ProxyProfile(){

}

int ProxyProfile::getId(){
    if (_profile.get() == NULL){
        return _id;
    }else{
        return _profile->getId();
    }
}
void ProxyProfile::setId(int value){
    if (_profile.get() == NULL){
        _id = value;
    }else{
        _profile->setId(value);
    }

}
void ProxyProfile::setStuId(int value){
    if (_profile.get() == NULL){ //check ifrof is null
        _stuId = value;
    }else{
       _profile->setStuId(value);
    }
}
int ProxyProfile::getStuId(){
    if (_profile.get() == NULL){ //check if profile does not exist
        return _stuId;
    }else{
        return _profile->getStuId();
    }

}
std::vector<Qualification> ProxyProfile::getQualifications(){
    if ( _profile.get() == NULL){
        return _qualifications;
    }else{
        _profile->getQualifications();
    }

}
void ProxyProfile::addQualification(int ans, int minAns, int maxAns){
  _profile->addQualification(ans, minAns, maxAns);
}
void ProxyProfile::addQualification(Qualification &qualification){
  _qualifications.push_back(qualification);
}
int ProxyProfile::getAnswer(int index){
    if (index < 1 || index > 29) return -1;
    return _qualifications[index-1].getAnswer();

}
int ProxyProfile::getMinAnswer(int index){
    if (index < 1 || index > 29) return -1;
    return _qualifications[index-1].getMinAnswer();
}

int ProxyProfile::getMaxAnswer(int index){
    if (index < 1 || index > 29) return -1;
    return _qualifications[index-1].getMaxAnswer();

}
void ProxyProfile::loadQualification(){

}
void ProxyProfile::editQualification(int num, int ans, int amin, int amax){
    if (num < 0 || num > 28 && _profile != NULL){
      _profile->getQualifications()[num].setAnswer(ans);
      _profile->getQualifications()[num].setMinAnswer(amin);
       _profile->getQualifications()[num].setMaxAnswer(amax);
    }
    else{
        return;
    }

}
void ProxyProfile::editProfile(){

}
StudentPtr ProxyProfile::getStudent() {
    if (_profile.get() == NULL) {
        initRealProfile();
    }

    return _profile->getStudent();
}

void ProxyProfile::setStudent(StudentPtr student) {
    if (_profile.get() == NULL) {
        initRealProfile();
    }

    _profile->setStudent(student);
}

void ProxyProfile::registerStudent(StudentPtr student) {
    //student.joinProject(*this);
    //_students.push_back(student);
}
void ProxyProfile::initRealProfile(){
    _profile.reset(new RealProfile(_id));
}
