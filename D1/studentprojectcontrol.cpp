#include "studentprojectcontrol.h"

StudentProjectControl::StudentProjectControl():
    _view(*this)
{
    _view.setModal(true);
    _view.exec();
}
