#-------------------------------------------------
#
# Project created by QtCreator 2015-10-24T12:20:54
#
#-------------------------------------------------
QT       +=sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# With C++11 support
greaterThan(QT_MAJOR_VERSION, 4){
    CONFIG += c++11
} else {
    QMAKE_CXXFLAGS += -std=c++0x
}

TARGET = cuPID
TEMPLATE = app

SOURCES += \
    AdminFeatures/adminhomecontrol.cpp \
    AdminFeatures/manageprojectcontrol.cpp \
    Database/database.cpp \
    Storage/admin.cpp \
    Storage/profile.cpp \
    Storage/project.cpp \
    Storage/qualification.cpp \
    Storage/student.cpp \
    Storage/user.cpp \
    StudentFeatures/studenthomecontrol.cpp \
    UserManagement/createadminaccountcontrol.cpp \
    UserManagement/createstudentaccountcontrol.cpp \
    questions.cpp \
    UserManagement/loginwindow.cpp \
    UserManagement/logincontrol.cpp \
    cupidprogram.cpp \
    UserManagement/accounttypeoption.cpp \
    UserManagement/createadminaccountwindow.cpp \
    UserManagement/createstudentaccountwindow.cpp \
    AdminFeatures/adminhomewindow.cpp \
    AdminFeatures/manageprojectwindow.cpp \
    StudentFeatures/manageprofilecontrol.cpp \
    StudentFeatures/manageprofilewindow.cpp \
    StudentFeatures/studenthomewindow.cpp \
    StudentFeatures/joinprojectcontrol.cpp \
    StudentFeatures/joinprojectwindow.cpp \
    Database/sqlitedatabase.cpp \
    Database/sqlitejoinedprojectrepository.cpp \
    Database/sqliteprofilerepository.cpp \
    Database/sqliteprojectrepository.cpp \
    Database/sqliteuserrepository.cpp \
    Storage/proxyprofile.cpp \
    Storage/proxyproject.cpp \
    Storage/proxystudent.cpp \
    Storage/realprofile.cpp \
    Storage/realproject.cpp \
    Storage/realstudent.cpp \
    AlgorithmFeatures/algorithm.cpp \
    AlgorithmFeatures/computeteamscontrol.cpp \
    AlgorithmFeatures/team.cpp \
    Storage/storagemanager.cpp \
    AdminFeatures/adminfeaturescommunication.cpp \
    AlgorithmFeatures/algorithmfeaturescommunication.cpp \
    AlgorithmFeatures/computeteamswindow.cpp \
    StudentFeatures/studentfeaturescommunication.cpp \
    UserManagement/userfeaturescommunication.cpp \
    AlgorithmFeatures/algorithmresults.cpp

HEADERS  += \
    AdminFeatures/adminhomecontrol.h \
    AdminFeatures/manageprojectcontrol.h \
    Database/database.h \    
    Storage/admin.h \
    Storage/profile.h \
    Storage/project.h \
    Storage/qualification.h \
    Storage/storagemanager.h \
    Storage/student.h \
    Storage/user.h \
    StudentFeatures/studenthomecontrol.h \
    UserManagement/adminsignupview.h \
    UserManagement/createadminaccountcontrol.h \
    UserManagement/createstudentaccountcontrol.h \
    questions.h \
    UserManagement/accounttypeoption.h \
    UserManagement/loginwindow.h \
    UserManagement/logincontrol.h \
    UserManagement/createstudentaccountwindow.h \
    UserManagement/createadminaccountwindow.h \
    AdminFeatures/adminhomewindow.h \
    AdminFeatures/manageprojectwindow.h \
    StudentFeatures/manageprofilecontrol.h \
    StudentFeatures/manageprofilewindow.h \
    StudentFeatures/studenthomewindow.h \
    StudentFeatures/joinprojectcontrol.h \
    StudentFeatures/joinprojectwindow.h \
    Database/sqlitedatabase.h \
    Database/sqlitejoinedprojectrepository.h \
    Database/sqliteprofilerepository.h \
    Database/sqliteprojectrepository.h \
    Database/sqliteuserrepository.h \
    Storage/proxyprofile.h \
    Storage/proxyproject.h \
    Storage/proxystudent.h \
    Storage/realprofile.h \
    Storage/realproject.h \
    Storage/realstudent.h \
    StudentFeatures/studentfeaturescommunication.h \
    AdminFeatures/adminfeaturescommunication.h \
    UserManagement/usermanagementcommunication.h \
    AlgorithmFeatures/algorithm.h \
    AlgorithmFeatures/computeteamscontrol.h \
    AlgorithmFeatures/team.h \
    AlgorithmFeatures/algorithmfeaturescommunication.h \
    AlgorithmFeatures/computeteamswindow.h \
    AlgorithmFeatures/algorithmresults.h

FORMS    += \
    UserManagement/accounttypeoption.ui \
    UserManagement/loginwindow.ui \
    UserManagement/createadminaccountwindow.ui \
    UserManagement/createstudentaccountwindow.ui \
    AdminFeatures/adminhomewindow.ui \
    AdminFeatures/manageprojectwindow.ui \
    StudentFeatures/manageprofilewindow.ui \
    StudentFeatures/studenthomewindow.ui \
    StudentFeatures/joinprojectwindow.ui \
    AlgorithmFeatures/computeteamswindow.ui

RESOURCES += \
    Resources.qrc
