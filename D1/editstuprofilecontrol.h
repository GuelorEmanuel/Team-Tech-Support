#ifndef EDITSTUPROFILECONTROL_H
#define EDITSTUPROFILECONTROL_H

<<<<<<< HEAD
#include "studentprofile.h"
=======
#include <memory>
#include "student.h"
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

class EditStuProfileControl
{
public:
<<<<<<< HEAD
    EditStuProfileControl(StudentProfile*);
    ~EditStuProfileControl();

private:
    StudentProfile *profile;
=======
    EditStuProfileControl(Student* student);
    ~EditStuProfileControl();

private:
    std::auto_ptr<Student> _student;
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
};

#endif // EDITSTUPROFILECONTROL_H
