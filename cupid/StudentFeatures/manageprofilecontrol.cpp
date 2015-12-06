#include "manageprofilecontrol.h"
#include "questions.h"
#include "Storage/profile.h"
#include <QDebug>
using namespace storage;

/*Class: Control class for Edit Student Profile AND Create Student Profile.
 * Edits profile when the status of action variable is 1.
 * Creates profile when the status is 0.
 */
ManageProfileControl::ManageProfileControl(int profileID, int action)
    : _view(*this), _action(action), count(0)
{

  if(action == 1)
  {
      std::make_shared<ProfilePtr>(_profile);
      loadProfileSettings(profileID);
  }
  if(action == 0)
  {
      ProfilePtr prof(std::make_shared<ProxyProfile>());
      _profile  = prof;
      std::make_shared<ProfilePtr>(_profile);
      _profile->setStuId(profileID);
  }

  for(int i = 0; i < 4; i++) {
      _view.addValues(i, count);
      if(action == 1) {
          _view.setValues(i, count);
      }
      ++count;
  }
  _view.setAction(_action);
  _view.setModal(true);
  _view.exec();
}

/*Function: QList<QString> EditStuProfileControl::loadSection
 * Purpose: Loads questions
 */
QList<QString> ManageProfileControl::loadSection(){
    Questions questions;
    return questions.getQuestions();

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
    if(index < 1 || index > 28) return -1;

    return _profile->getAnswer(index);
}

int ManageProfileControl::getMinAnswer(int index)
{
    if(index < 1 || index > 28) return -1;

    return _profile->getMinAnswer(index);
}

int ManageProfileControl::getMaxAnswer(int index)
{
    if(index < 1 || index > 28) return -1;

    return _profile->getMaxAnswer(index);
}

void ManageProfileControl::editQualification(int index, int a, int amin, int amax)
{
    if(index < 1 || index > 28) return;

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
    /*for(int i = 0; i < 28; i++) {
        _profile->editQualification(i, _answers[i], _minAnswers[i], _maxAnswers[i]);
    }
    _profile->editProfile();*/
    //StorageManager::instance()->editProfile(_profile);
    StudentFeaturesCommunication::editProfile(_profile);
    _view.close();
}

void ManageProfileControl::createProfile()
{
    //_profile->createProfile();
    //StorageManager::instance()->createProfile(_profile);
    StudentFeaturesCommunication::createProfile(_profile);
    _view.close();
}

/*Function: void EditStuProfileControl::loadProfileSettings
 * Purpose: load all questions and qualifications for profile object
 */
void ManageProfileControl::loadProfileSettings(int id) {
    Questions questions;
    questions.getQuestions();
    //_profile->loadQualification();
    _profile = StudentFeaturesCommunication::getProfile(id);//StorageManager::instance()->getProfile(id);
    /*QSqlQuery qry(Database::getInstance().db());
    qry.prepare("SELECT * FROM profile WHERE id = :id");
    qry.bindValue(":id", id);

    if (!qry.exec()) {
        qDebug() << qry.lastError();
        return; // TODO: displaying error message to user
    } else {
        if (!qry.first()) {
            qDebug() << "Project id not found";
            return; // TODO: displaying error message to user
        }

        while (qry.next()) {
            qDebug() << "Found project " << qry.value(1).toString();
            //_view.addProject(qry.value(0).toInt(), qry.value(1).toString());
        }
    }*/
}

void ManageProfileControl::exitProfile()
{
    _view.close();
}



