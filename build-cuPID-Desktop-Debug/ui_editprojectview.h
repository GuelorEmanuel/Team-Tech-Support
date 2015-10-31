/********************************************************************************
** Form generated from reading UI file 'editprojectview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROJECTVIEW_H
#define UI_EDITPROJECTVIEW_H

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

class Ui_EditProjectView
{
public:
    QLabel *label_6;
    QPushButton *createBtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *projectStatusLE;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *maxTeamSizeLE;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *minTeamSizeLE;
    QFrame *line;
    QPlainTextEdit *plainTextEdit;
    QPushButton *updateBtn;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *projectNameLE;
    QLabel *dialogTitleLbl;

    void setupUi(QDialog *EditProjectView)
    {
        if (EditProjectView->objectName().isEmpty())
            EditProjectView->setObjectName(QStringLiteral("EditProjectView"));
        EditProjectView->resize(621, 404);
        label_6 = new QLabel(EditProjectView);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 171, 20));
        createBtn = new QPushButton(EditProjectView);
        createBtn->setObjectName(QStringLiteral("createBtn"));
        createBtn->setGeometry(QRect(510, 370, 99, 27));
        layoutWidget = new QWidget(EditProjectView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 70, 252, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        projectStatusLE = new QLineEdit(layoutWidget);
        projectStatusLE->setObjectName(QStringLiteral("projectStatusLE"));

        horizontalLayout->addWidget(projectStatusLE);

        layoutWidget_2 = new QWidget(EditProjectView);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 130, 254, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        maxTeamSizeLE = new QLineEdit(layoutWidget_2);
        maxTeamSizeLE->setObjectName(QStringLiteral("maxTeamSizeLE"));

        horizontalLayout_3->addWidget(maxTeamSizeLE);

        layoutWidget_3 = new QWidget(EditProjectView);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(330, 130, 251, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        minTeamSizeLE = new QLineEdit(layoutWidget_3);
        minTeamSizeLE->setObjectName(QStringLiteral("minTeamSizeLE"));

        horizontalLayout_4->addWidget(minTeamSizeLE);

        line = new QFrame(EditProjectView);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 40, 581, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        plainTextEdit = new QPlainTextEdit(EditProjectView);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 200, 581, 161));
        updateBtn = new QPushButton(EditProjectView);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setGeometry(QRect(510, 370, 99, 27));
        layoutWidget_4 = new QWidget(EditProjectView);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 70, 251, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        projectNameLE = new QLineEdit(layoutWidget_4);
        projectNameLE->setObjectName(QStringLiteral("projectNameLE"));

        horizontalLayout_2->addWidget(projectNameLE);

        dialogTitleLbl = new QLabel(EditProjectView);
        dialogTitleLbl->setObjectName(QStringLiteral("dialogTitleLbl"));
        dialogTitleLbl->setGeometry(QRect(240, 20, 101, 17));

        retranslateUi(EditProjectView);

        QMetaObject::connectSlotsByName(EditProjectView);
    } // setupUi

    void retranslateUi(QDialog *EditProjectView)
    {
        EditProjectView->setWindowTitle(QApplication::translate("EditProjectView", "Dialog", 0));
        label_6->setText(QApplication::translate("EditProjectView", "Project Description:", 0));
        createBtn->setText(QApplication::translate("EditProjectView", "Create", 0));
        label_2->setText(QApplication::translate("EditProjectView", "Project status:", 0));
        label->setText(QApplication::translate("EditProjectView", "Max team size:", 0));
        label_4->setText(QApplication::translate("EditProjectView", "Min team size:", 0));
        updateBtn->setText(QApplication::translate("EditProjectView", "Update", 0));
        label_3->setText(QApplication::translate("EditProjectView", "Project Name:", 0));
        dialogTitleLbl->setText(QApplication::translate("EditProjectView", "Edit Project", 0));
    } // retranslateUi

};

namespace Ui {
    class EditProjectView: public Ui_EditProjectView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROJECTVIEW_H
