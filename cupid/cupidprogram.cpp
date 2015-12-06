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
<<<<<<< HEAD
    //LoginControl c;
    //return a.exec();
    StudentPtr student(StorageManager::instance()->getStudent(10));

    StudentHomeControl cont(student);
    /*StorageManager::instance()->joinProject(project, student);


    StudentList list = StorageManager::instance()->listProjectStudents(project);
    qDebug() << QString("%1").arg((list->at(0))->getId());

    ProjectList list1 = StorageManager::instance()->listStudentProjects(student);
    qDebug() << QString("%1").arg((list1->at(0))->getId());

    ProjectList list2(StorageManager::instance()->listProjectsNotOfStudent(student));
    qDebug() << QString("%1").arg((list2->at(0))->getId());*/
    return 0;

=======
    LoginControl c;
    return a.exec();
>>>>>>> 1a76d4edf08078518c104ae80c86034f9765d53d
}
