#include "addprojectview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddProjectView w;
    w.show();

    return a.exec();
}
