#ifndef EDITSTUPROFILECONTROL_H
#define EDITSTUPROFILECONTROL_H

#include "studentprofile.h"

class EditStuProfileControl
{
public:
    EditStuProfileControl(StudentProfile*);
    ~EditStuProfileControl();

private:
    StudentProfile *profile;
};

#endif // EDITSTUPROFILECONTROL_H
