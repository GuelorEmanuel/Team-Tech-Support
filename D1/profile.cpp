#include "profile.h"

Profile::Profile()
{
}

int Profile::getId() {
    return _id;
}

void Profile::setId(int value) {
    _id = value;
}

std::vector<Qualification> Profile::getQualifications() {
    return _qualifications;
}

void Profile::addQualification(int answer, int min, int max)
{
    Qualification qual;

    qual.setAnswer(answer);
    qual.setMinAnswer(min);
    qual.setMaxAnswer(max);

    _qualifications.push_back(qual);
}

void Profile::addQualification(Qualification &qual)
{
    _qualifications.push_back(qual);
}

void Profile::createProfile(int stuId)
{

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
     qry.bindValue(":uid", stuId);


     for(int i = 0; i < 28; i++) {
         qry.bindValue(QString(":q%1").arg(i+1), _qualifications[i].getAnswer());
         qry.bindValue(QString(":q%1min").arg(i+1), _qualifications[i].getMinAnswer());
         qry.bindValue(QString(":q%1max").arg(i+1), _qualifications[i].getMaxAnswer());
         qDebug() <<  i;
     }

     if(!qry.exec()) {
         qDebug() << qry.lastError();
     } else {
         qDebug() << "Profile is added";
     }
}

Profile::~Profile() {}
