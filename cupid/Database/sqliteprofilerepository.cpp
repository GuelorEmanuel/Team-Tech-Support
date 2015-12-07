#include "sqliteprofilerepository.h"
#include "Storage/storage.h"
#include "Storage/qualification.h"
#include "Storage/profile.h"
#include <QtSql>
#include <QDebug>
using namespace storage;

SqliteProfileRepository::SqliteProfileRepository(QSqlDatabase& db)  : _db(db)
{
}

int SqliteProfileRepository::createProfile(ProfilePtr profile)
{
    int stat = 0;
    QSqlQuery  qry(_db);

    std::vector<Qualification> quals = profile->getQualifications();

    QString qprofile = "INSERT INTO profile VALUES(:id, :uid, :q1, :q1min, :q1max, "
                       ":q2, :q2min, :q2max,:q3, :q3min, :q3max,:q4, :q4min, :q4max,"
                       ":q5, :q5min, :q5max,:q6, :q6min, :q6max,:q7, :q7min, :q7max,"
                       ":q8, :q8min, :q8max,:q9, :q9min, :q9max,:q10, :q10min, :q10max,"
                       ":q11, :q11min, :q11max,:q12, :q12min, :q12max,:q13, :q13min, :q13max,"
                       ":q14, :q14min, :q14max,:q15, :q15min, :q15max,:q16, :q16min, :q16max,"
                       ":q17, :q17min, :q17max,:q18, :q18min, :q18max,:q19, :q19min, :q19max, "
                       ":q20, :q20min, :q20max,:q21, :q21min, :q21max,:q22, :q22min, :q22max,"
                       ":q23, :q23min, :q23max,:q24, :q24min, :q24max,:q25, :q25min, :q25max,"
                       ":q26, :q26min, :q26max,:q27, :q27min, :q27max,:q28, :q28min, :q28max)";

   QString qid = "SELECT MAX(id) FROM profile";
   /*if(!qry.exec(qid)) {
      qDebug() << qry.lastError();
      return stat = 1;
   } else {
       qry.next();
       profile->setId(qry.value(0).toInt()+1);
   }*/

   qry.prepare(qprofile);
   //qry.bindValue(":id", profile->getId());
   qry.bindValue(":uid", profile->getStuId());

   for(int i = 1; i < 29; i++) {
       qry.bindValue(QString(":q%1").arg(i), quals[i-1].getAnswer());
       qry.bindValue(QString(":q%1min").arg(i), quals[i-1].getMinAnswer());
       qry.bindValue(QString(":q%1max").arg(i), quals[i-1].getMaxAnswer());
   }

   if(!qry.exec()) {
       qDebug() << qry.lastError();
       return stat = 1;
   } else {
       qDebug()  << QString("Profile is added. Profile's ID is %1").arg(profile->getId());
   }
    return stat;
}

int SqliteProfileRepository::editProfile(ProfilePtr profile)
{
    int stat = 0;
    QSqlQuery qry(_db);
    std::vector<Qualification> quals = profile->getQualifications();

    for(int i = 0; i < 28; i++) {
        QString prep = "UPDATE profile SET q%1 = :q%1, q%1min = :q%1min, q%1max = :q%1max WHERE id=:id";
        qry.prepare(prep.arg(i+1));

        qry.bindValue(QString(":q%1").arg(i+1), quals[i].getAnswer());
        qry.bindValue(QString(":q%1min").arg(i+1), quals[i].getMinAnswer());
        qry.bindValue(QString(":q%1max").arg(i+1), quals[i].getMaxAnswer());


        qry.bindValue(":id", profile->getId());

        if(!qry.exec()){
            qDebug() << qry.lastError();
        } else {
            qDebug() << "Profile is updated.";
        }
    }
    return stat;
}

int SqliteProfileRepository::getProfile(ProfilePtr profile)
{
    int stat = 1;
    QSqlQuery qry(_db);
    int track = 1;
    QString qprof = "SELECT * FROM profile WHERE id = :id";
    qry.prepare(qprof);
    qry.bindValue(":id", profile->getId());

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        while(qry.next()){
            profile->setStuId(qry.value(1).toInt());
            for(int i = 0; i < 28; i++) {
                profile->addQualification(qry.value(++track).toInt(), qry.value(++track).toInt(), qry.value(++track).toInt());

            }
            stat = 0;
        }
    }
    return stat;
}
