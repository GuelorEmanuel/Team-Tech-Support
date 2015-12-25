#include "manageprofilecontrol.h"
#include "Storage/profile.h"
#include "studentfeaturescommunication.h"
#include "Storage/proxyprofile.h"
#include <QDebug>
using namespace storage;

// Version for create profile
ManageProfileControl::ManageProfileControl()
    : _view(*this), _action(0), count(0)
{
     ProfilePtr profile(std::make_shared<ProxyProfile>());
    _profile = profile;
    _isComplete = false;
    _view.setStatus();
    _view.setModal(true);
    _view.exec();
}

// Version for edit profile
ManageProfileControl::ManageProfileControl(ProfilePtr profile)
    : _view(*this), _action(1), count(0), _profile(profile)
{
    _isComplete = true;
    _view.setStatus();
    _view.setModal(true);
    _view.exec();
}

bool ManageProfileControl::profileComplete() const
{
    return _isComplete;
}

ProfilePtr ManageProfileControl::getCompletedProfile() const
{
    return _profile;
}

/*Function: void EditStuProfileControl::addAsnwers
 * Purpose: if editing, add given values to arrays with edited information
 *          if creating, add new qualification to Profile object
 * Input  : int asnwer, int min asnwer, int max answer
 */
void ManageProfileControl::addAsnwers(int ans, int min, int max)
{
    if(count == 28) return;
    if(_action == 1) {
        _answers[count] = ans;
        _minAnswers[count] = min;
        _maxAnswers[count++] = max;
    }
    if(_action == 0) {
        addQualification(ans, min, max);
    }

}

int* ManageProfileControl::getEditedAnswers()
{
    return _answers;
}

int* ManageProfileControl::getEditedMinAnswers() {
    return _maxAnswers;
}

int* ManageProfileControl::getEditedMaxAnswers() {
    return _minAnswers;
}

int ManageProfileControl::getAnswer(int index)
{
    if(index < 0 || index > 28) return -1;

    return _profile->getAnswer(index);
}

int ManageProfileControl::getMinAnswer(int index)
{
    if(index < 0 || index > 27) return -1;

    return _profile->getMinAnswer(index);
}

int ManageProfileControl::getMaxAnswer(int index)
{
    if(index < 0 || index > 27) return -1;

    return _profile->getMaxAnswer(index);
}

void ManageProfileControl::editQualification(int index, int a, int amin, int amax)
{
    if(index < 0 || index > 27) return;

    _profile->editQualification(index, a, amin, amax);
}

void ManageProfileControl::addQualification(int ans, int min, int max)
{
    _profile->addQualification(ans, min, max);
}

/*Function: void EditStuProfileControl::updateProfile
 * Purpose: if editing, update profile settings in db
 *          if creating, add new profile to db
 */
void ManageProfileControl::updateProfile()
{
    if(_action == 1) editProfile();
    else createProfile();
}


void ManageProfileControl::editProfile()
{
    for(int i = 0; i < 28; i++) {
        _profile->editQualification(i, _answers[i], _minAnswers[i], _maxAnswers[i]);
    }
    StudentFeaturesCommunication::editProfile(_profile);
    _view.close();
}

void ManageProfileControl::createProfile()
{
    _isComplete = true;
    _view.close();
}

/*Function: void EditStuProfileControl::loadProfileSettings
 * Purpose: load all questions and qualifications for profile object
 */
void ManageProfileControl::loadProfileSettings(int id) {
    _profile = StudentFeaturesCommunication::getProfile(id);

}

void ManageProfileControl::exitProfile()
{
    _view.close();
}


int ManageProfileControl::getAction()
{
    return _action;
}
