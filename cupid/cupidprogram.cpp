#include "UserManagement/logincontrol.h"
#include <QApplication>
#include "Storage/storagemanager.h"
#include "Storage/proxyproject.h"
#include "Storage/proxystudent.h"
#include "Storage/proxyprofile.h"
#include <QDebug>
using namespace storage;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //LoginControl c;
    //return a.exec();
    ProjectPtr project(StorageManager::instance()->getProject(1));
    StudentPtr student(StorageManager::instance()->getStudent(10));

    //StorageManager::instance()->joinProject(project, student);

    StudentList list = StorageManager::instance()->listProjectStudents(project);
    qDebug() << QString("%1").arg((list->at(0))->getId());

    ProjectList list1 = StorageManager::instance()->listStudentProjects(student);
    qDebug() << QString("%1").arg((list1->at(0))->getId());

    ProjectList list2(StorageManager::instance()->listProjectsNotOfStudent(student));
    qDebug() << QString("%1").arg((list2->at(0))->getId());
    return 0;

}
