#ifndef EDITSTUPROFILECONTROL_H
#define EDITSTUPROFILECONTROL_H

#include <memory>
#include <QtSql>
#include "student.h"
#include "studentprofileview.h"

class EditStuProfileControl
{
public:
    EditStuProfileControl(int profileID);
    ~EditStuProfileControl();

private:
    std::auto_ptr<Profile> _profile;
    StudentProfileView  _view;
    void loadProfileSettings(int id);

};

#endif // EDITSTUPROFILECONTROL_H
