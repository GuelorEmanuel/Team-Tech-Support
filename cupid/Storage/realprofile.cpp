#include "realprofile.h"
#include <QDebug>
using namespace storage;

RealProfile::RealProfile(int id): _id(id) {}
RealProfile::RealProfile(int id, int userId): _id(id), _userId(userId) {}
RealProfile::~RealProfile() {}

int RealProfile::getId() {
    return _id;
}

void RealProfile::setId(int value) {
    _id = value;
}

int RealProfile::getUserId() {
    return _userId;
}

std::vector<Qualification> RealProfile::getQualifications() {
    return _qualifications;
}

const Qualification& RealProfile::getQualification(int index) {
    return _qualifications[index];
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
    if (index < 0 || index > 29) {
        return -1;
    } else {
      return _qualifications[index].getAnswer();
    }
}

int RealProfile::getMinAnswer(int index){
    if (index < 0 || index > 28) {
        return -1;
    } else {
      return _qualifications[index].getMinAnswer();
    }
}

int RealProfile::getMaxAnswer(int index){
    if (index < 0 || index > 28) {
        return -1;
    } else {
      return _qualifications[index].getMaxAnswer();
    }

}

void RealProfile::editQualification(int num, int ans, int amin, int amax){
    if (num < 0 || num > 28) return;
     _qualifications[num].setAnswer(ans);
     _qualifications[num].setMinAnswer(amin);
     _qualifications[num].setMaxAnswer(amax);
}

void RealProfile::setUserId(int value){
    _userId = value;
}

StudentPtr RealProfile::getStudent() {
    return _student;
}

void RealProfile::setStudent(StudentPtr student) {
    _student = student;
}
