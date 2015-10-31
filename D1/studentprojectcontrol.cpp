#include "studentprojectcontrol.h"

StudentProjectControl::StudentProjectControl(QSqlDatabase &db):
    _db(db), _view(*this)
{
    _view.setModal(true);
    _view.exec();
}
