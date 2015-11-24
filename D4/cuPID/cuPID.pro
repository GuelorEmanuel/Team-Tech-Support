#-------------------------------------------------
#
# Project created by QtCreator 2015-11-23T19:31:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuPID
TEMPLATE = app


SOURCES += main.cpp\
        loginview.cpp \
    usermanager.cpp \
    logincontrol.cpp \
    createadminaccountcontrol.cpp

HEADERS  += loginview.h \
    usermanager.h \
    logincontrol.h \
    createadminaccountcontrol.h

FORMS    += loginview.ui
