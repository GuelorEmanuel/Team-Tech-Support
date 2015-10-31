/********************************************************************************
** Form generated from reading UI file 'createprojectview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROJECTVIEW_H
#define UI_CREATEPROJECTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateProjectView
{
public:
    QFrame *line;
    QLabel *dialogTitleLbl;
    QPushButton *updateBtn;
    QPushButton *createBtn;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *projectStatusLE;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *projectNameLE;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *maxTeamSizeLE;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *minTeamSizeLE;

    void setupUi(QDialog *CreateProjectView)
    {
        if (CreateProjectView->objectName().isEmpty())
            CreateProjectView->setObjectName(QStringLiteral("CreateProjectView"));
        CreateProjectView->resize(602, 391);
        line = new QFrame(CreateProjectView);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 30, 581, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        dialogTitleLbl = new QLabel(CreateProjectView);
        dialogTitleLbl->setObjectName(QStringLiteral("dialogTitleLbl"));
        dialogTitleLbl->setGeometry(QRect(230, 10, 101, 17));
        updateBtn = new QPushButton(CreateProjectView);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setGeometry(QRect(500, 360, 99, 27));
        createBtn = new QPushButton(CreateProjectView);
        createBtn->setObjectName(QStringLiteral("createBtn"));
        createBtn->setGeometry(QRect(500, 360, 99, 27));
        label_6 = new QLabel(CreateProjectView);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 170, 171, 20));
        plainTextEdit = new QPlainTextEdit(CreateProjectView);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 190, 581, 161));
        widget = new QWidget(CreateProjectView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(320, 60, 252, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        projectStatusLE = new QLineEdit(widget);
        projectStatusLE->setObjectName(QStringLiteral("projectStatusLE"));

        horizontalLayout->addWidget(projectStatusLE);

        widget1 = new QWidget(CreateProjectView);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 60, 251, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        projectNameLE = new QLineEdit(widget1);
        projectNameLE->setObjectName(QStringLiteral("projectNameLE"));

        horizontalLayout_2->addWidget(projectNameLE);

        widget2 = new QWidget(CreateProjectView);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 120, 254, 29));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        maxTeamSizeLE = new QLineEdit(widget2);
        maxTeamSizeLE->setObjectName(QStringLiteral("maxTeamSizeLE"));

        horizontalLayout_3->addWidget(maxTeamSizeLE);

        widget3 = new QWidget(CreateProjectView);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(320, 120, 251, 29));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        minTeamSizeLE = new QLineEdit(widget3);
        minTeamSizeLE->setObjectName(QStringLiteral("minTeamSizeLE"));

        horizontalLayout_4->addWidget(minTeamSizeLE);

        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        projectNameLE->raise();
        line->raise();
        maxTeamSizeLE->raise();
        projectStatusLE->raise();
        minTeamSizeLE->raise();
        label_3->raise();
        dialogTitleLbl->raise();
        updateBtn->raise();
        createBtn->raise();
        label_6->raise();
        plainTextEdit->raise();

        retranslateUi(CreateProjectView);

        QMetaObject::connectSlotsByName(CreateProjectView);
    } // setupUi

    void retranslateUi(QDialog *CreateProjectView)
    {
        CreateProjectView->setWindowTitle(QApplication::translate("CreateProjectView", "Dialog", 0));
        dialogTitleLbl->setText(QApplication::translate("CreateProjectView", "Create Project", 0));
        updateBtn->setText(QApplication::translate("CreateProjectView", "Update", 0));
        createBtn->setText(QApplication::translate("CreateProjectView", "Create", 0));
        label_6->setText(QApplication::translate("CreateProjectView", "Project Description:", 0));
        label_2->setText(QApplication::translate("CreateProjectView", "Project status:", 0));
        label_3->setText(QApplication::translate("CreateProjectView", "Project Name:", 0));
        label->setText(QApplication::translate("CreateProjectView", "Max team size:", 0));
        label_4->setText(QApplication::translate("CreateProjectView", "Min team size:", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateProjectView: public Ui_CreateProjectView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROJECTVIEW_H
