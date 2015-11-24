#ifndef MANAGEPROFILECONTROL_H
#define MANAGEPROFILECONTROL_H

#include <memory>
#include "Storage/student.h"
#include "manageprofilewindow.h"
#include "Storage/profile.h"

class ManageProfileControl
{
public:
    ManageProfileControl(int profileID, int action);
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
    std::auto_ptr<Profile> _profile;
    ManageProfileWindow  _view;
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
