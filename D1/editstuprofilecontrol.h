#ifndef EDITSTUPROFILECONTROL_H
#define EDITSTUPROFILECONTROL_H

#include <memory>
#include "student.h"

class EditStuProfileControl
{
public:
    EditStuProfileControl(Student* student);
    ~EditStuProfileControl();

private:
    std::auto_ptr<Student> _student;
};

#endif // EDITSTUPROFILECONTROL_H
