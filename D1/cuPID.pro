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
    User.cpp \
    student.cpp \
    guest.cpp \
    admin.cpp \
    profile.cpp \
    qualifications.cpp \
    team.cpp \
    project.cpp \
    studentprofile.cpp \
    adminprofile.cpp \
    projectview.cpp \
    editprojectview.cpp \
    editprojectcontrol.cpp \
    createprojectview.cpp \
    createprojectcontrol.cpp \
    adminprofileview.cpp \
    studentprofileview.cpp \
    editstuprofileview.cpp \
    editstuprofilecontrol.cpp \
    projectlist.cpp \
    mainwindow.cpp \
    mainWindowControl.cpp \
    studenthomepageview.cpp \
    adminhomepageview.cpp \
    signupview.cpp \
    signupoptionview.cpp

HEADERS  += \
    User.h \
    student.h \
    guest.h \
    admin.h \
    profile.h \
    qualifications.h \
    team.h \
    project.h \
    studentprofile.h \
    adminprofile.h \
    projectview.h \
    editprojectview.h \
    editprojectcontrol.h \
    createprojectview.h \
    createprojectcontrol.h \
    adminprofileview.h \
    studentprofileview.h \
    editstuprofileview.h \
    editstuprofilecontrol.h \
    projectlist.h \
    mainwindow.h \
    mainWindowControl.h \
    studenthomepageview.h \
    adminhomepageview.h \
    signupview.h \
    signupoptionview.h

FORMS    += \
    mainwindow.ui \
    studenthomepageview.ui \
    adminhomepageview.ui \
    signupview.ui \
    signupoptionview.ui

RESOURCES += \
    Resources.qrc
