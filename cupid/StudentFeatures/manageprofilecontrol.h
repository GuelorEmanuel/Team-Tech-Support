#ifndef MANAGEPROFILECONTROL_H
#define MANAGEPROFILECONTROL_H

#include "Storage/storage.h"
#include "manageprofilewindow.h"
#include "Storage/profile.h"
#include "Storage/proxyprofile.h"
#include "studentfeaturescommunication.h"

class ManageProfileControl
{
public:
    ManageProfileControl();
    ManageProfileControl(storage::ProfilePtr profile);
    bool profileComplete() const;
    storage::ProfilePtr getCompletedProfile() const;
    QList<QString> loadSection();
    void addAsnwers(int ans, int min, int max);
    int getAnswer(int index);
    int getMinAnswer(int index);
    int getMaxAnswer(int index);
    int* getEditedAnswers();
    int* getEditedMinAnswers();
    int* getEditedMaxAnswers();
    void editQualification(int index, int a, int amin, int amax);
    void addQualification(int ans, int min, int max);
    void editProfile();
    void createProfile();
    void updateProfile();
    void exitProfile();
private:
    storage::ProfilePtr _profile;
    ManageProfileWindow _view;
    int _studentID;
    int _action;
    void loadProfileSettings(int id);
    int _answers[28];
    int _minAnswers[28];
    int _maxAnswers[28];
    int count;
    int action;
};

#endif // MANAGEPROFILECONTROL_H
