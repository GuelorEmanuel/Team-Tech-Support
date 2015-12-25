#include "profile.h"

Profile::Profile()
{
}

int Profile::getId() {
    //return _id;
}

void Profile::setId(int value) {
    //_id = value;
}

void Profile::setStuId(int value)
{
    //_stuId = value;
}

int Profile::getStuId()
{
    //return _stuId;
}

std::vector<Qualification> Profile::getQualifications() {
    //return _qualifications;
}

/*Function: void Profile::addQualification
 * Purpose: using giving values, create new qualification
 */
int Profile::addQualification(int answer, int min, int max)
{
    /*Qualification qual;

    qual.setAnswer(answer);
    qual.setMinAnswer(min);
    qual.setMaxAnswer(max);

    _qualifications.push_back(qual);*/
}

int Profile::addQualification(Qualification &qual)
{
    //_qualifications.push_back(qual);
}

int Profile::getAnswer(int index) {
    /*if(index < 1 || index > 29) return -1;

    return _qualifications[index-1].getAnswer();*/
}

int Profile::getMinAnswer(int index) {
    /*if(index < 1 || index > 29) return -1;

    return _qualifications[index-1].getMinAnswer();*/
}

int Profile::getMaxAnswer(int index) {
    /*if(index < 1 || index > 29) return -1;

    return _qualifications[index-1].getMaxAnswer();*/
}

/*Function: void Profile::loadQualification()
 * Purpose: for created project, load all settings for
 *          selected project from db
 */
int Profile::loadQualification() {
    //if(_id == -1) return;
/*
    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("SELECT * FROM profile WHERE id = :id");
    qry.bindValue(":id", _id);

    qDebug() << _id;
    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qry.next();
        for(int i = 2; i < 86; i+=3) {
            Qualification qual;
            qual.setAnswer(qry.value(i).toInt());
            qual.setMinAnswer(qry.value(i+1).toInt());
            qual.setMaxAnswer(qry.value(i+2).toInt());
            qDebug() << "Hey";
            qDebug() << qry.value(i).toInt();
            _qualifications.push_back(qual);
        }
    }
    */
}

int Profile::editQualification(int num, int ans, int amin, int amax)
{
    /*if(num < 0 || num > 28) return;


    _qualifications[num].setAnswer(ans);
    _qualifications[num].setMinAnswer(amin);
    _qualifications[num].setMaxAnswer(amax);*/

}

/*Function: void Profile::createProfile()
 * Purpose: using added values, create new project
 *          and add it to db.
 */
int Profile::createProfile(){

}

/*Function: void Profile::editProfile()
 * Purpose: using changed qualifications, update
 *          information of selected project in db
 */
int Profile::editProfile(){

}

Profile::~Profile() {}
