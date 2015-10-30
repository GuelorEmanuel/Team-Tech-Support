#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

<<<<<<< HEAD
#include "studentprofile.h"
=======
#include <memory>
#include "student.h"
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

class StudentProfileView
{
public:
<<<<<<< HEAD
    StudentProfileView(StudentProfile*);
    ~StudentProfileView();

private:
    StudentProfile *profile;
=======
    StudentProfileView(Student* student);
    ~StudentProfileView();

private:
    std::auto_ptr<Student> _student;
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
};

#endif // STUDENTPROFILEVIEW_H
