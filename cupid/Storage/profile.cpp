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
int Profile::createProfile()
{
/*
    QSqlQuery qry(Database::getInstance().db());


    qry.prepare("INSERT INTO profile VALUES(:id, :uid, :q1, :q1min, :q1max, "
                ":q2, :q2min, :q2max,:q3, :q3min, :q3max,:q4, :q4min, :q4max,"
                ":q5, :q5min, :q5max,:q6, :q6min, :q6max,:q7, :q7min, :q7max,"
                ":q8, :q8min, :q8max,:q9, :q9min, :q9max,:q10, :q10min, :q10max,"
                ":q11, :q11min, :q11max,:q12, :q12min, :q12max,:q13, :q13min, :q13max,"
                ":q14, :q14min, :q14max,:q15, :q15min, :q15max,:q16, :q16min, :q16max,"
                ":q17, :q17min, :q17max,:q18, :q18min, :q18max,:q19, :q19min, :q19max, "
                ":q20, :q20min, :q20max,:q21, :q21min, :q21max,:q22, :q22min, :q22max,"
                ":q23, :q23min, :q23max,:q24, :q24min, :q24max,:q25, :q25min, :q25max,"
                ":q26, :q26min, :q26max,:q27, :q27min, :q27max,:q28, :q28min, :q28max)");


     qry.bindValue(":id", _id);
     qry.bindValue(":uid", _stuId);


     for(int i = 0; i < 28; i++) {
         qry.bindValue(QString(":q%1").arg(i+1), _qualifications[i].getAnswer());
         qry.bindValue(QString(":q%1min").arg(i+1), _qualifications[i].getMinAnswer());
         qry.bindValue(QString(":q%1max").arg(i+1), _qualifications[i].getMaxAnswer());
     }

     if(!qry.exec()) {
         qDebug() << qry.lastError();
     } else {
         qDebug() << "Profile is added";
     }
     */
}

/*Function: void Profile::editProfile()
 * Purpose: using changed qualifications, update
 *          information of selected project in db
 */
int Profile::editProfile()
{
    /*
    if(_id == -1) return;

    QSqlQuery qry(Database::getInstance().db());

    for(int i = 0; i < 28; i++) {
        QString prep = "UPDATE profile SET q%1 = :q%1, q%1min = :q%1min, q%1max = :q%1max WHERE id=:id";
        qry.prepare(prep.arg(i+1));

        qry.bindValue(QString(":q%1").arg(i+1), _qualifications[i].getAnswer());
        qry.bindValue(QString(":q%1min").arg(i+1), _qualifications[i].getMinAnswer());
        qry.bindValue(QString(":q%1max").arg(i+1), _qualifications[i].getMaxAnswer());


        qry.bindValue(":id", _id);

        if(!qry.exec()){
            qDebug() << qry.lastError();
        } else {
            qDebug() << "Profile is updated.";
        }
    }
*/
}

Profile::~Profile() {}
