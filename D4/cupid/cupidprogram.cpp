#include "UserManagement/logincontrol.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    LoginControl c;

    return a.exec();
}
