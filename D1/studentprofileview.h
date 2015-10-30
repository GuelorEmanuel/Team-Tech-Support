#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include "studentprofile.h"

class StudentProfileView
{
public:
    StudentProfileView(StudentProfile*);
    ~StudentProfileView();

private:
    StudentProfile *profile;
};

#endif // STUDENTPROFILEVIEW_H
