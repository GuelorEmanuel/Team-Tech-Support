#ifndef STUDENTMAINCONTROL_H
#define STUDENTMAINCONTROL_H

#include "Storage/storage.h"
#include <QString>
class StudentHomeWindow;

class StudentHomeControl
{
public:
    StudentHomeControl(storage::StudentPtr student);
    ~StudentHomeControl();
    void logout();
    void editProfile();
    void openUnJoinedProject(int projectId);
    void updateJoinedProjects(storage::ProjectPtr project);
    QString getName();
    void getUnjoinedProjectList();
    void getJoinedProjectList();
private:
    std::unique_ptr<StudentHomeWindow> _view;
    storage::StudentPtr _student;
};


#endif // STUDENTMAINCONTROL_H
