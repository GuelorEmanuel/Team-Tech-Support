#ifndef EDITSTUPROFILEVIEW_H
#define EDITSTUPROFILEVIEW_H

#include <memory>
#include "student.h"

class EditStuProfileView
{
public:
    EditStuProfileView(Student* student);
    ~EditStuProfileView();

private:
    std::auto_ptr<Student> _student;

};

#endif // EDITSTUPROFILEVIEW_H
