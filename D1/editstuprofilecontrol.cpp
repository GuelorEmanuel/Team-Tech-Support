#include "editstuprofilecontrol.h"
#include "database.h"
#include <QDebug>
#include "questions.h"



EditStuProfileControl::EditStuProfileControl(int profileID) :
  _view(*this), _profile(new Profile)
{
    qDebug() << "In contructorrrrr";

  _profile->setId(profileID);
   loadProfileSettings(profileID);
  _view.setModal(true);
  _view.exec();
}
EditStuProfileControl::~EditStuProfileControl() {

}

QList<QString> EditStuProfileControl::loadSection(){
    Questions questions;
    return questions.getQuestions();

}

void EditStuProfileControl::addAsnwers(int ans, int min, int max)
{
    if(count == 28) return;
    _answers[count] = ans;
    _minAnswers[count] = min;
    _maxAnswers[count++] = max;

    qDebug() << _answers[count-1];
}

int* EditStuProfileControl::getEditedAnswers()
{
    return _answers;
}

int* EditStuProfileControl::getEditedMinAnswers() {
    return _maxAnswers;
}

int* EditStuProfileControl::getEditedMaxAnswers() {
    return _minAnswers;
}

int EditStuProfileControl::getAnswer(int index)
{
    if(index < 1 || index > 28) return -1;

    return _profile->getAnswer(index);
}

int EditStuProfileControl::getMinAnswer(int index)
{
    if(index < 1 || index > 28) return -1;

    return _profile->getMinAnswer(index);
}

int EditStuProfileControl::getMaxAnswer(int index)
{
    if(index < 1 || index > 28) return -1;

    return _profile->getMaxAnswer(index);
}

void EditStuProfileControl::editQualification(int index, int a, int amin, int amax)
{
    if(index < 1 || index > 28) return;

    _profile->editQualification(index, a, amin, amax);
}

void EditStuProfileControl::updateProfile()
{
    for(int i = 0; i < 28; i++) {
        _profile->editQualification(i, _answers[i], _minAnswers[i], _maxAnswers[i]);
    }
    _profile->editProfile();
    _view.close();
}

void EditStuProfileControl::loadProfileSettings(int id) {
    qDebug() << "Getting profile settings";
    Questions questions;
    questions.getQuestions();
    _profile->loadQualification();

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



