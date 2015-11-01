#include "createstudentaccountcontrol.h"

CreateStudentAccountControl::CreateStudentAccountControl() : _view(*this)
{
    _view.setModal(true);
    _view.exec();
}

void CreateStudentAccountControl::cancel() {
    _view.close();
}

CreateStudentAccountControl::~CreateStudentAccountControl() {}
