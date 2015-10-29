#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splashScreen = new QSplashScreen;
    splashScreen->setPixmap(QPixmap(":Images/splashScreenMain"));
    splashScreen->show();
    MainWindow w;

    QTimer::singleShot(2500,splashScreen,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));

    return a.exec();
}
