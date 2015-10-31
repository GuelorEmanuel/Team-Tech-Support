/********************************************************************************
** Form generated from reading UI file 'studentprojectview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPROJECTVIEW_H
#define UI_STUDENTPROJECTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_StudentProjectView
{
public:
    QLabel *projectNameLbl;
    QFrame *line;
    QLabel *proffessorNameLbl;
    QTextBrowser *projectDescriptTb;
    QLabel *descriptionLbl;
    QPushButton *leaveProjectBtn;
    QPushButton *joinProjectBtn;

    void setupUi(QDialog *StudentProjectView)
    {
        if (StudentProjectView->objectName().isEmpty())
            StudentProjectView->setObjectName(QStringLiteral("StudentProjectView"));
        StudentProjectView->resize(662, 351);
        projectNameLbl = new QLabel(StudentProjectView);
        projectNameLbl->setObjectName(QStringLiteral("projectNameLbl"));
        projectNameLbl->setGeometry(QRect(220, 10, 201, 20));
        line = new QFrame(StudentProjectView);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 641, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        proffessorNameLbl = new QLabel(StudentProjectView);
        proffessorNameLbl->setObjectName(QStringLiteral("proffessorNameLbl"));
        proffessorNameLbl->setGeometry(QRect(10, 70, 331, 20));
        projectDescriptTb = new QTextBrowser(StudentProjectView);
        projectDescriptTb->setObjectName(QStringLiteral("projectDescriptTb"));
        projectDescriptTb->setGeometry(QRect(100, 120, 511, 181));
        descriptionLbl = new QLabel(StudentProjectView);
        descriptionLbl->setObjectName(QStringLiteral("descriptionLbl"));
        descriptionLbl->setGeometry(QRect(10, 120, 91, 17));
        leaveProjectBtn = new QPushButton(StudentProjectView);
        leaveProjectBtn->setObjectName(QStringLiteral("leaveProjectBtn"));
        leaveProjectBtn->setGeometry(QRect(10, 310, 99, 27));
        joinProjectBtn = new QPushButton(StudentProjectView);
        joinProjectBtn->setObjectName(QStringLiteral("joinProjectBtn"));
        joinProjectBtn->setGeometry(QRect(550, 310, 99, 27));

        retranslateUi(StudentProjectView);

        QMetaObject::connectSlotsByName(StudentProjectView);
    } // setupUi

    void retranslateUi(QDialog *StudentProjectView)
    {
        StudentProjectView->setWindowTitle(QApplication::translate("StudentProjectView", "Dialog", 0));
        projectNameLbl->setText(QApplication::translate("StudentProjectView", "     Project Name Goes Here", 0));
        proffessorNameLbl->setText(QApplication::translate("StudentProjectView", "Proffessor: ", 0));
        descriptionLbl->setText(QApplication::translate("StudentProjectView", "Description:", 0));
        leaveProjectBtn->setText(QApplication::translate("StudentProjectView", "Leave", 0));
        joinProjectBtn->setText(QApplication::translate("StudentProjectView", "Join", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentProjectView: public Ui_StudentProjectView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPROJECTVIEW_H
