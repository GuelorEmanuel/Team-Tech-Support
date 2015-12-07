#include "Storage/student.h"
#include "Storage/storagemanager.h"
#include "StudentFeatures/manageprofilecontrol.h"
#include "StudentFeatures/joinprojectcontrol.h"
#include "StudentFeatures/studentfeaturescommunication.h"
#include "StudentFeatures/studenthomewindow.h"
#include <QDebug>
using namespace storage;

StudentHomeControl::StudentHomeControl(StudentPtr student) :
    _student(student), _view(new StudentHomeWindow(*this))
{
    getUnjoinedProjectList();
    getJoinedProjectList();

    _view->setName(student->getDisplayName());
    _view->setModal(true);
    _view->exec();
}

StudentHomeControl::~StudentHomeControl() {}

void StudentHomeControl::logout() {
    _view->close();
}

/*Function: void StudentMainControl::editProfile()
 * Purpose: open control class for profile edition
 */
void StudentHomeControl::editProfile() {
    ManageProfileControl manageProfileControl(_student->getProfile());
    _view->show();
}

QString StudentHomeControl::getName()
{
    return _student->getDisplayName();
}

/*Function: void StudentMainControl::openUnJoinedProject
 * Purpose: open unjoined project to student
 */
void StudentHomeControl::openUnJoinedProject(int projectId) {
    ProjectPtr project = StudentFeaturesCommunication::getProject(projectId);
    JoinProjectControl joinProjectControl(project, _student, *this);
    _view->show();
}

/*Function: void StudentMainControl::getUnjoinedProjectList()
 * Purpose: retrive all projects from db, check wich one
 *          of them student haven't joined and pass them
 *          to view class
 */
void StudentHomeControl::getUnjoinedProjectList() {
    ProjectList projects(
                StudentFeaturesCommunication::listUnjoinedProjects(_student));
    _view->setUnjoinedProjects(projects);
}

/*Function: void StudentMainControl::getJoinedProjectList()
 * Purpose: retrive all projects from db, check wich one
 *          of them student joined and pass them
 *          to view class
 */
void StudentHomeControl::getJoinedProjectList() {
    ProjectList projects(
                StudentFeaturesCommunication::listJoinedProjects(_student));
    _view->setJoinedProjects(projects);
}

void StudentHomeControl::updateJoinedProjects(storage::ProjectPtr project)
{
    _view->updateJoinedProjects(project);
}

