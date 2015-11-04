#ifndef EDITSTUPROFILECONTROL_H
#define EDITSTUPROFILECONTROL_H

#include <memory>
#include <QtSql>
#include "student.h"
#include "studentprofileview.h"
#include "profile.h"

class EditStuProfileControl
{
public:
    EditStuProfileControl(int profileID, int action);
    ~EditStuProfileControl();
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
    StudentProfileView  _view;
    int _studentID;
    int _action;
    void loadProfileSettings(int id);
    int _answers[28];
    int _minAnswers[28];
    int _maxAnswers[28];
    int count = 0;
};

#endif // EDITSTUPROFILECONTROL_H
