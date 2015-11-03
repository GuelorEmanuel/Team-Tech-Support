#ifndef EDITSTUPROFILECONTROL_H
#define EDITSTUPROFILECONTROL_H

#include <memory>
#include <QtSql>
#include "student.h"
#include "studentprofileview.h"
#include "profile.h"

class EditStuProfileControl
{
public:
    EditStuProfileControl(int profileID);
    ~EditStuProfileControl();
    QList<QString> loadSection();

private:
    std::auto_ptr<Profile> _profile;
    StudentProfileView  _view;
    void loadProfileSettings(int id);

};

#endif // EDITSTUPROFILECONTROL_H
