#-------------------------------------------------
#
# Project created by QtCreator 2015-10-24T12:20:54
#
#-------------------------------------------------
QT       +=sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuPID
TEMPLATE = app


SOURCES += main.cpp\
    student.cpp \
    guest.cpp \
    admin.cpp \
    profile.cpp \
    team.cpp \
    project.cpp \
    projectview.cpp \
    editprojectview.cpp \
    editprojectcontrol.cpp \
    createprojectcontrol.cpp \
    studentprofileview.cpp \
    editstuprofileview.cpp \
    editstuprofilecontrol.cpp \
    mainwindow.cpp \
    mainWindowControl.cpp \
    signupview.cpp \
    signupoptionview.cpp \
    adminhomeview.cpp \
    accountcreationcontrol.cpp \
    createprojectview.cpp \
    qualification.cpp \
    user.cpp \
    signupmaincontrol.cpp \
    adminmaincontrol.cpp \
    studentprojectview.cpp

HEADERS  += \
    student.h \
    guest.h \
    admin.h \
    profile.h \
    team.h \
    project.h \
    projectview.h \
    editprojectview.h \
    editprojectcontrol.h \
    createprojectcontrol.h \
    editstuprofileview.h \
    editstuprofilecontrol.h \
    mainwindow.h \
    mainWindowControl.h \
    signupview.h \
    signupoptionview.h \
    adminhomeview.h \
    accountcreationcontrol.h \
    createprojectview.h \
    qualification.h \
    studentprofileview.h \
    user.h \
    signupmaincontrol.h \
    adminmaincontrol.h \
    studentprojectview.h

FORMS    += \
    mainwindow.ui \
    signupview.ui \
    signupoptionview.ui \
    adminhomeview.ui \
    createprojectview.ui \
    editprojectview.ui \
    studentprojectview.ui

RESOURCES += \
    Resources.qrc
