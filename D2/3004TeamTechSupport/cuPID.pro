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
    editprojectview.cpp \
    editprojectcontrol.cpp \
    createprojectcontrol.cpp \
    editstuprofilecontrol.cpp \
    mainwindow.cpp \
    mainWindowControl.cpp \
    signupoptionview.cpp \
    adminhomeview.cpp \
    createprojectview.cpp \
    qualification.cpp \
    user.cpp \
    signupmaincontrol.cpp \
    adminmaincontrol.cpp \
    studentprojectview.cpp \
    studenthomeview.cpp \
    studentmaincontrol.cpp \
    studentprojectcontrol.cpp \
    database.cpp \
    createadminaccountcontrol.cpp \
    createstudentaccountcontrol.cpp \
    createstudentaccountview.cpp \
    createadminaccountview.cpp \
    studentprofileview.cpp \
    questions.cpp

HEADERS  += \
    student.h \
    guest.h \
    admin.h \
    profile.h \
    team.h \
    project.h \
    editprojectview.h \
    editprojectcontrol.h \
    createprojectcontrol.h \
    editstuprofilecontrol.h \
    mainwindow.h \
    mainWindowControl.h \
    signupoptionview.h \
    createprojectview.h \
    qualification.h \
    user.h \
    signupmaincontrol.h \
    adminmaincontrol.h \
    studentprojectview.h \
    studenthomeview.h \
    studentmaincontrol.h \
    studentprojectcontrol.h \
    database.h \
    createadminaccountcontrol.h \
    createstudentaccountcontrol.h \
    createstudentaccountview.h \
    createadminaccountview.h \
    adminhomeview.h \
    studentprofileview.h \
    questions.h

FORMS    += \
    mainwindow.ui \
    signupoptionview.ui \
    adminhomeview.ui \
    createprojectview.ui \
    editprojectview.ui \
    studentprojectview.ui \
    studenthomeview.ui \
    createstudentaccountview.ui \
    createadminaccountview.ui \
    createprojectview.ui \
    studentprofileview.ui

RESOURCES += \
    Resources.qrc
