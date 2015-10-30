#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <memory>
#include "student.h"

class StudentProfileView
{
public:
    StudentProfileView(Student* student);
    ~StudentProfileView();

private:
    std::auto_ptr<Student> _student;
};

#endif // STUDENTPROFILEVIEW_H
