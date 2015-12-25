#include "UserManagement/logincontrol.h"
#include <QApplication>
#include "Storage/storagemanager.h"
#include "Storage/proxyproject.h"
#include "Storage/proxystudent.h"
#include "Storage/proxyprofile.h"
#include <QDebug>
#include "Storage/profile.h"
using namespace storage;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginControl c;
    return a.exec();
}
