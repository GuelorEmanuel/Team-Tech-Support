#include "admin.h"

Admin::Admin() : User() {}

Admin::~Admin() {}

void Admin::create()
{
    QSqlQuery qry(Database::getInstance().db());

    qry.prepare("SELECT max(id) FROM user");

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qry.next();
        User::setId(qry.value(0).toInt() + 1);
        qDebug() << User::_id;
    }

    qry.prepare("INSERT INTO user(id, username, display_name, student_id) VALUES (:id, :un, :dn, NULL)");

    qry.bindValue(":id", User::_id);
    qry.bindValue(":un", User::_userName);
    qry.bindValue(":dn", User::_displayName);

    if(!qry.exec()) {
        qDebug() << qry.lastError();
    } else {
        qDebug() << "New admin is added";
    }

}
