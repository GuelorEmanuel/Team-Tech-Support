#include "studentprojectcontrol.h"

StudentProjectControl::StudentProjectControl(int projectId):
    _view(*this)
{
    _view.setModal(true);
    _view.exec();
}
