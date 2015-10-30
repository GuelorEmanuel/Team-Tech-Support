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
    team.cpp \
    project.cpp \
    projectview.cpp \
    editprojectview.cpp \
    editprojectcontrol.cpp \
    createprojectcontrol.cpp \
    adminprofileview.cpp \
    studentprofileview.cpp \
    editstuprofileview.cpp \
    editstuprofilecontrol.cpp \
    projectlist.cpp \
    mainwindow.cpp \
    mainWindowControl.cpp \
    model.cpp \
    signupview.cpp \
    signupoptionview.cpp \
    adminhomeview.cpp \
    accountcreationcontrol.cpp \
    createprojectview.cpp \
    qualification.cpp

HEADERS  += \
    User.h \
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
    adminprofileview.h \
    editstuprofileview.h \
    editstuprofilecontrol.h \
    projectlist.h \
    mainwindow.h \
    mainWindowControl.h \
    model.h \
    signupview.h \
    signupoptionview.h \
    adminhomeview.h \
    accountcreationcontrol.h \
    createprojectview.h \
    qualification.h \
    studentprofileview.h

FORMS    += \
    mainwindow.ui \
    signupview.ui \
    signupoptionview.ui \
    adminhomeview.ui \
    createprojectview.ui

RESOURCES += \
    Resources.qrc
