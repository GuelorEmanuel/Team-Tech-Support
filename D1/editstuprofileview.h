#ifndef EDITSTUPROFILEVIEW_H
#define EDITSTUPROFILEVIEW_H

<<<<<<< HEAD
#include "studentprofile.h"
=======
#include <memory>
#include "student.h"
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

class EditStuProfileView
{
public:
<<<<<<< HEAD
    EditStuProfileView(StudentProfile*);
    ~EditStuProfileView();

private:
    StudentProfile *profile;
=======
    EditStuProfileView(Student* student);
    ~EditStuProfileView();

private:
    std::auto_ptr<Student> _student;
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

};

#endif // EDITSTUPROFILEVIEW_H
