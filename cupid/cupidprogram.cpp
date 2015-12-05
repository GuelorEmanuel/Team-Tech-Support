#include "UserManagement/logincontrol.h"
#include <QApplication>
#include "Storage/storagemanager.h"
#include "Storage/proxyproject.h"
#include "Storage/proxystudent.h"
#include "Storage/proxyprofile.h"

using namespace storage;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //LoginControl c;

    StudentPtr newStudent(std::make_shared<ProxyStudent>());

    //return a.exec();
    return 0;
}
