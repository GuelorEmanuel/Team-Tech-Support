#include "proxyprofile.h"

ProxyProfile::ProxyProfile() : ProxyProfile(-1)
{
}

ProxyProfile::ProxyProfile(int id) : _id(id)
{
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
    if (_profile.get() == NULL){ //check if stu is null
        _stuId = value;
    }else{
        _student->setStudentId(QString::number(value));
    }
}
int ProxyProfile::getStuId(){
    if (_profile.get() == NULL){ //check if Student is nULL
        return _stuId;
    }else{
        //_student->getStudentID();
    }

}
std::vector<Qualification> ProxyProfile::getQualifications(){

}
void ProxyProfile::addQualification(int ans, int minAns, int maxAns){
  Qualification qual;
  qual.setAnswer(ans);
  qual.setMinAnswer(minAns);
  qual.setMaxAnswer(maxAns);
  _qualifications.push_back(qual);
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
void ProxyProfile::initRealProfile(){
    /*_profile.reset(new RealProfile(_id, _name, _description,
                               _minTeamSize, _maxTeamSize,
                               StorageManager::instance()
                               ->getStudentsInProject(_id)));*/
}
