#ifndef EDITSTUPROFILEVIEW_H
#define EDITSTUPROFILEVIEW_H

#include "studentprofile.h"

class EditStuProfileView
{
public:
    EditStuProfileView(StudentProfile*);
    ~EditStuProfileView();

private:
    StudentProfile *profile;

};

#endif // EDITSTUPROFILEVIEW_H
