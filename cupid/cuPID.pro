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
    Database/database.cpp \
    Database/sqlitedatabase.cpp \
    Database/sqlitejoinedprojectrepository.cpp \
    Database/sqliteprofilerepository.cpp \
    Database/sqliteprojectrepository.cpp \
    Database/sqliteuserrepository.cpp \
    Storage/admin.cpp \
    Storage/profile.cpp \
    Storage/project.cpp \
    Storage/qualification.cpp \
    Storage/student.cpp \
    Storage/user.cpp \    
    Storage/proxyprofile.cpp \
    Storage/proxyproject.cpp \
    Storage/proxystudent.cpp \
    Storage/realprofile.cpp \
    Storage/realproject.cpp \
    Storage/realstudent.cpp \
    Storage/storagemanager.cpp \
    cupidprogram.cpp \
    AdminFeatures/adminhomecontrol.cpp \
    AdminFeatures/manageprojectcontrol.cpp \
    AdminFeatures/adminhomewindow.cpp \
    AdminFeatures/manageprojectwindow.cpp \
    AdminFeatures/adminfeaturescommunication.cpp \
    StudentFeatures/studenthomecontrol.cpp \
    StudentFeatures/studentfeaturescommunication.cpp \
    StudentFeatures/manageprofilecontrol.cpp \
    StudentFeatures/manageprofilewindow.cpp \
    StudentFeatures/studenthomewindow.cpp \
    StudentFeatures/joinprojectcontrol.cpp \
    StudentFeatures/joinprojectwindow.cpp \
    questions.cpp \
    UserManagement/createadminaccountcontrol.cpp \
    UserManagement/createstudentaccountcontrol.cpp \
    UserManagement/loginwindow.cpp \
    UserManagement/logincontrol.cpp \
    UserManagement/accounttypeoption.cpp \
    UserManagement/createadminaccountwindow.cpp \
    UserManagement/createstudentaccountwindow.cpp \
    UserManagement/userfeaturescommunication.cpp \
    AlgorithmFeatures/algorithm.cpp \
    AlgorithmFeatures/computeteamscontrol.cpp \
    AlgorithmFeatures/team.cpp \
    AlgorithmFeatures/algorithmfeaturescommunication.cpp \
    AlgorithmFeatures/computeteamswindow.cpp \
    AlgorithmFeatures/algorithmresults.cpp \
    AlgorithmFeatures/question.cpp \
    AlgorithmFeatures/questionlist.cpp

HEADERS  += \
    Database/database.h \
    Database/sqlitedatabase.h \
    Database/sqlitejoinedprojectrepository.h \
    Database/sqliteprofilerepository.h \
    Database/sqliteprojectrepository.h \
    Database/sqliteuserrepository.h \
    Storage/admin.h \
    Storage/profile.h \
    Storage/project.h \
    Storage/qualification.h \
    Storage/storagemanager.h \
    Storage/student.h \
    Storage/user.h \
    Storage/proxyprofile.h \
    Storage/proxyproject.h \
    Storage/proxystudent.h \
    Storage/realprofile.h \
    Storage/realproject.h \
    Storage/realstudent.h \
    Storage/storage.h \
    AdminFeatures/adminhomecontrol.h \
    AdminFeatures/manageprojectcontrol.h \
    AdminFeatures/adminhomewindow.h \
    AdminFeatures/manageprojectwindow.h \
    AdminFeatures/adminfeaturescommunication.h \
    StudentFeatures/studenthomecontrol.h \
    StudentFeatures/manageprofilecontrol.h \
    StudentFeatures/manageprofilewindow.h \
    StudentFeatures/studenthomewindow.h \
    StudentFeatures/joinprojectcontrol.h \
    StudentFeatures/joinprojectwindow.h \
    StudentFeatures/studentfeaturescommunication.h \
    questions.h \
    UserManagement/adminsignupview.h \
    UserManagement/createadminaccountcontrol.h \
    UserManagement/createstudentaccountcontrol.h \
    UserManagement/accounttypeoption.h \
    UserManagement/loginwindow.h \
    UserManagement/logincontrol.h \
    UserManagement/createstudentaccountwindow.h \
    UserManagement/createadminaccountwindow.h \
    UserManagement/usermanagementcommunication.h \
    AlgorithmFeatures/algorithm.h \
    AlgorithmFeatures/computeteamscontrol.h \
    AlgorithmFeatures/team.h \
    AlgorithmFeatures/algorithmfeaturescommunication.h \
    AlgorithmFeatures/computeteamswindow.h \
    AlgorithmFeatures/algorithmresults.h \
    AlgorithmFeatures/question.h \
    AlgorithmFeatures/questionlist.h

FORMS    += \
    AdminFeatures/adminhomewindow.ui \
    AdminFeatures/manageprojectwindow.ui \
    StudentFeatures/manageprofilewindow.ui \
    StudentFeatures/studenthomewindow.ui \
    StudentFeatures/joinprojectwindow.ui \
    UserManagement/accounttypeoption.ui \
    UserManagement/loginwindow.ui \
    UserManagement/createadminaccountwindow.ui \
    UserManagement/createstudentaccountwindow.ui \
    AlgorithmFeatures/computeteamswindow.ui

RESOURCES += \
    Resources.qrc
