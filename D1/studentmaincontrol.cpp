#include "studentmaincontrol.h"

StudentMainControl::StudentMainControl(Student &student) :
    _student(student), _view(*this)
{
    _view.setModal(true);
    _view.exec();
}
