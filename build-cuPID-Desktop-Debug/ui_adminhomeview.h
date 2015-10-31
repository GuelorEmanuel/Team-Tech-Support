/********************************************************************************
** Form generated from reading UI file 'adminhomeview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOMEVIEW_H
#define UI_ADMINHOMEVIEW_H

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

class Ui_AdminHomeView
{
public:
    QListWidget *listOfStudentsLv;
    QFrame *line;
    QFrame *line_2;
    QListWidget *listOfProjectLv;
    QPushButton *runAlgoBtn;
    QPushButton *editProjectBtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *createProjectBtn;
    QPushButton *signoutBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *picLbl;
    QLabel *profNameLbl;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *lisStudentBtn;
    QPushButton *lisStudentInProjBtn;

    void setupUi(QDialog *AdminHomeView)
    {
        if (AdminHomeView->objectName().isEmpty())
            AdminHomeView->setObjectName(QStringLiteral("AdminHomeView"));
        AdminHomeView->resize(807, 415);
        listOfStudentsLv = new QListWidget(AdminHomeView);
        listOfStudentsLv->setObjectName(QStringLiteral("listOfStudentsLv"));
        listOfStudentsLv->setGeometry(QRect(10, 170, 271, 231));
        line = new QFrame(AdminHomeView);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 150, 271, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(AdminHomeView);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 40, 271, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        listOfProjectLv = new QListWidget(AdminHomeView);
        listOfProjectLv->setObjectName(QStringLiteral("listOfProjectLv"));
        listOfProjectLv->setGeometry(QRect(335, 11, 321, 391));
        runAlgoBtn = new QPushButton(AdminHomeView);
        runAlgoBtn->setObjectName(QStringLiteral("runAlgoBtn"));
        runAlgoBtn->setGeometry(QRect(690, 350, 99, 27));
        editProjectBtn = new QPushButton(AdminHomeView);
        editProjectBtn->setObjectName(QStringLiteral("editProjectBtn"));
        editProjectBtn->setGeometry(QRect(690, 310, 99, 27));
        editProjectBtn->setCheckable(false);
        layoutWidget = new QWidget(AdminHomeView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 269, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        createProjectBtn = new QPushButton(layoutWidget);
        createProjectBtn->setObjectName(QStringLiteral("createProjectBtn"));

        horizontalLayout->addWidget(createProjectBtn);

        signoutBtn = new QPushButton(layoutWidget);
        signoutBtn->setObjectName(QStringLiteral("signoutBtn"));

        horizontalLayout->addWidget(signoutBtn);

        layoutWidget1 = new QWidget(AdminHomeView);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 261, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        picLbl = new QLabel(layoutWidget1);
        picLbl->setObjectName(QStringLiteral("picLbl"));

        horizontalLayout_2->addWidget(picLbl);

        profNameLbl = new QLabel(layoutWidget1);
        profNameLbl->setObjectName(QStringLiteral("profNameLbl"));

        horizontalLayout_2->addWidget(profNameLbl);

        layoutWidget2 = new QWidget(AdminHomeView);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 110, 271, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lisStudentBtn = new QPushButton(layoutWidget2);
        lisStudentBtn->setObjectName(QStringLiteral("lisStudentBtn"));
        lisStudentBtn->setCheckable(false);

        horizontalLayout_3->addWidget(lisStudentBtn);

        lisStudentInProjBtn = new QPushButton(layoutWidget2);
        lisStudentInProjBtn->setObjectName(QStringLiteral("lisStudentInProjBtn"));
        lisStudentInProjBtn->setCheckable(false);

        horizontalLayout_3->addWidget(lisStudentInProjBtn);


        retranslateUi(AdminHomeView);

        QMetaObject::connectSlotsByName(AdminHomeView);
    } // setupUi

    void retranslateUi(QDialog *AdminHomeView)
    {
        AdminHomeView->setWindowTitle(QApplication::translate("AdminHomeView", "Dialog", 0));
        runAlgoBtn->setText(QApplication::translate("AdminHomeView", "Run Algo", 0));
        editProjectBtn->setText(QApplication::translate("AdminHomeView", "Edit", 0));
        createProjectBtn->setText(QApplication::translate("AdminHomeView", "Create Project", 0));
        signoutBtn->setText(QApplication::translate("AdminHomeView", "Sign Out", 0));
        picLbl->setText(QApplication::translate("AdminHomeView", "pic", 0));
        profNameLbl->setText(QApplication::translate("AdminHomeView", "ProfName", 0));
        lisStudentBtn->setText(QApplication::translate("AdminHomeView", "Students", 0));
        lisStudentInProjBtn->setText(QApplication::translate("AdminHomeView", "Students in projects", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminHomeView: public Ui_AdminHomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOMEVIEW_H
