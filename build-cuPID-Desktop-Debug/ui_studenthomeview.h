/********************************************************************************
** Form generated from reading UI file 'studenthomeview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTHOMEVIEW_H
#define UI_STUDENTHOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentHomeView
{
public:
    QFrame *line;
    QFrame *line_2;
    QPushButton *projectsBtn;
    QPushButton *joinedProjectsBtn;
    QListWidget *projectListLw;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *studentPicLbl;
    QLabel *studentNameLbl;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *editProfileBtn;
    QPushButton *signOutBtn;

    void setupUi(QDialog *StudentHomeView)
    {
        if (StudentHomeView->objectName().isEmpty())
            StudentHomeView->setObjectName(QStringLiteral("StudentHomeView"));
        StudentHomeView->resize(657, 420);
        line = new QFrame(StudentHomeView);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 631, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(StudentHomeView);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 130, 631, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        projectsBtn = new QPushButton(StudentHomeView);
        projectsBtn->setObjectName(QStringLiteral("projectsBtn"));
        projectsBtn->setGeometry(QRect(20, 160, 99, 27));
        joinedProjectsBtn = new QPushButton(StudentHomeView);
        joinedProjectsBtn->setObjectName(QStringLiteral("joinedProjectsBtn"));
        joinedProjectsBtn->setGeometry(QRect(130, 160, 141, 27));
        projectListLw = new QListWidget(StudentHomeView);
        projectListLw->setObjectName(QStringLiteral("projectListLw"));
        projectListLw->setGeometry(QRect(25, 190, 611, 211));
        widget = new QWidget(StudentHomeView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 621, 19));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        studentPicLbl = new QLabel(widget);
        studentPicLbl->setObjectName(QStringLiteral("studentPicLbl"));

        horizontalLayout_2->addWidget(studentPicLbl);

        studentNameLbl = new QLabel(widget);
        studentNameLbl->setObjectName(QStringLiteral("studentNameLbl"));

        horizontalLayout_2->addWidget(studentNameLbl);

        widget1 = new QWidget(StudentHomeView);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 80, 631, 29));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        editProfileBtn = new QPushButton(widget1);
        editProfileBtn->setObjectName(QStringLiteral("editProfileBtn"));

        horizontalLayout->addWidget(editProfileBtn);

        signOutBtn = new QPushButton(widget1);
        signOutBtn->setObjectName(QStringLiteral("signOutBtn"));

        horizontalLayout->addWidget(signOutBtn);

        studentPicLbl->raise();
        studentNameLbl->raise();
        line->raise();
        editProfileBtn->raise();
        signOutBtn->raise();
        signOutBtn->raise();
        editProfileBtn->raise();
        signOutBtn->raise();
        line_2->raise();
        projectsBtn->raise();
        joinedProjectsBtn->raise();
        projectListLw->raise();

        retranslateUi(StudentHomeView);

        QMetaObject::connectSlotsByName(StudentHomeView);
    } // setupUi

    void retranslateUi(QDialog *StudentHomeView)
    {
        StudentHomeView->setWindowTitle(QApplication::translate("StudentHomeView", "Dialog", 0));
        projectsBtn->setText(QApplication::translate("StudentHomeView", "Projects", 0));
        joinedProjectsBtn->setText(QApplication::translate("StudentHomeView", "Joined Projects", 0));
        studentPicLbl->setText(QApplication::translate("StudentHomeView", "Picture Goes here", 0));
        studentNameLbl->setText(QApplication::translate("StudentHomeView", "Student Name Goes here", 0));
        editProfileBtn->setText(QApplication::translate("StudentHomeView", "Edit Profile", 0));
        signOutBtn->setText(QApplication::translate("StudentHomeView", "Sign Out", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentHomeView: public Ui_StudentHomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTHOMEVIEW_H
