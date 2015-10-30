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
<<<<<<< HEAD
    qualifications.cpp \
    team.cpp \
    project.cpp \
    studentprofile.cpp \
    adminprofile.cpp \
=======
    team.cpp \
    project.cpp \
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
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
<<<<<<< HEAD
    createprojectview.cpp
=======
    createprojectview.cpp \
    qualification.cpp
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

HEADERS  += \
    User.h \
    student.h \
    guest.h \
    admin.h \
    profile.h \
<<<<<<< HEAD
    qualifications.h \
    team.h \
    project.h \
    studentprofile.h \
    adminprofile.h \
=======
    team.h \
    project.h \
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
    projectview.h \
    editprojectview.h \
    editprojectcontrol.h \
    createprojectcontrol.h \
    adminprofileview.h \
<<<<<<< HEAD
    studentprofileview.h \
=======
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d
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
<<<<<<< HEAD
    createprojectview.h
=======
    createprojectview.h \
    qualification.h \
    studentprofileview.h
>>>>>>> f8e1e5003a143e6fca704cc0a5b84b1bc749a24d

FORMS    += \
    mainwindow.ui \
    signupview.ui \
    signupoptionview.ui \
    adminhomeview.ui \
    createprojectview.ui

RESOURCES += \
    Resources.qrc
