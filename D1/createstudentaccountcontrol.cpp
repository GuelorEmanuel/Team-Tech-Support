#include "createstudentaccountcontrol.h"
#include "editstudentprofilecontrol.h"

CreateStudentAccountControl::CreateStudentAccountControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void CreateStudentAccountControl::cancel() {
    _view.close();
}

/*Function: void CreateStudentAccountControl::createAccount
 * Purpose: using giving information, create new Student account(user)
 * Input  : QString fname, QString lname, QString id
 */
void CreateStudentAccountControl::createAccount(QString fname, QString lname, QString id)
{
    int newID = -1;
    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("SELECT max(id) FROM user");

    if(!qry.exec()) {
        qDebug() << qry.lastError();
        return;
    } else {
        qry.next();
        newID = qry.value(0).toInt()+1;
    }

    _student.reset(new Student);
    _student->setId(newID);
    _student->setStudentId(id);
    _student->setDisplayName(QString("%1 %2").arg(fname).arg(lname));
    _student->setUserName(QString("%1%2").arg(fname).arg(lname).toLower());
    _student->createStudentUser();

    EditStudentProfileControl createProfile(newID, 0);
    _view.close();
}

CreateStudentAccountControl::~CreateStudentAccountControl() {}
