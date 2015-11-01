#include "studentmaincontrol.h"

StudentMainControl::StudentMainControl(QSqlDatabase &db, Student &student) :
    _db(db), _student(student), _view(*this)
{
    _view.setModal(true);
    _view.exec();
}
