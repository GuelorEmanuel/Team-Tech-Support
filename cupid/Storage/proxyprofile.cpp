#include "Storage/proxyprofile.h"
#include "Storage/realprofile.h"
#include "Storage/storagemanager.h"
#include "Storage/storage.h"
#include <QDebug>
using namespace storage;

ProxyProfile::ProxyProfile() : _id(-1),_userId(-1)
{
}

ProxyProfile::ProxyProfile(int id) : _id(id)
{
}

ProxyProfile::~ProxyProfile()
{
}

int ProxyProfile::getId() {
    if (!_profile) {
        return _id;
    } else {
        return _profile->getId();
    }
}

void ProxyProfile::setId(int value){
    if (!_profile) {
        _id = value;
    } else {
        _profile->setId(value);
    }

}

void ProxyProfile::setUserId(int value){
    if (!_profile) {
        _userId = value;
    } else {
       _profile->setUserId(value);
    }
}

int ProxyProfile::getUserId(){
    if (!_profile) {
        return _userId;
    } else {
        return _profile->getUserId();
    }

}
std::vector<Qualification> ProxyProfile::getQualifications(){
    if (!_profile){
        initRealProfile();
    }
    return _profile->getQualifications();
}

void ProxyProfile::addQualification(int ans, int minAns, int maxAns){
    if (!_profile) {
        initRealProfile();
    }
    _profile->addQualification(ans, minAns, maxAns);
}

const Qualification& ProxyProfile::getQualification(int index) {
    if (!_profile) {
        initRealProfile();
    }
    return _profile->getQualification(index);
}

void ProxyProfile::addQualification(Qualification &qualification){
    if (!_profile) {
        initRealProfile();
    }
    _profile->addQualification(qualification);
}

int ProxyProfile::getAnswer(int index){
    if (!_profile) {
        initRealProfile();
    }
    return _profile->getAnswer(index);
}

int ProxyProfile::getMinAnswer(int index){
    if (!_profile) {
        initRealProfile();
    }
    return _profile->getMinAnswer(index);
}

int ProxyProfile::getMaxAnswer(int index){
    if (!_profile) {
        initRealProfile();
    }
    return _profile->getMaxAnswer(index);
}

void ProxyProfile::editQualification(int num, int ans, int amin, int amax){
    if (!_profile) {
        initRealProfile();
    }
    _profile->editQualification(num, ans, amin, amax);
}

StudentPtr ProxyProfile::getStudent() {
    if (!_profile) {
        initRealProfile();
    }

    return _profile->getStudent();
}

void ProxyProfile::setStudent(StudentPtr student) {
    if (!_profile) {
        initRealProfile();
    }

    _profile->setStudent(student);
}

void ProxyProfile::initRealProfile(){
    _profile.reset(new RealProfile(_id, _userId));
}
