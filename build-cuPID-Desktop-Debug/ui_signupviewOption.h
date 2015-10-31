/********************************************************************************
** Form generated from reading UI file 'signupviewOption.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPVIEWOPTION_H
#define UI_SIGNUPVIEWOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupView
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *adminSignupBtn;
    QPushButton *studentSignUpBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *signupView)
    {
        if (signupView->objectName().isEmpty())
            signupView->setObjectName(QStringLiteral("signupView"));
        signupView->resize(400, 300);
        label = new QLabel(signupView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 67, 17));
        widget = new QWidget(signupView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 90, 191, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        adminSignupBtn = new QPushButton(widget);
        adminSignupBtn->setObjectName(QStringLiteral("adminSignupBtn"));

        verticalLayout->addWidget(adminSignupBtn);

        studentSignUpBtn = new QPushButton(widget);
        studentSignUpBtn->setObjectName(QStringLiteral("studentSignUpBtn"));

        verticalLayout->addWidget(studentSignUpBtn);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        verticalLayout->addWidget(cancelBtn);


        retranslateUi(signupView);

        QMetaObject::connectSlotsByName(signupView);
    } // setupUi

    void retranslateUi(QWidget *signupView)
    {
        signupView->setWindowTitle(QApplication::translate("signupView", "Form", 0));
        label->setText(QApplication::translate("signupView", "SIGN UP", 0));
        adminSignupBtn->setText(QApplication::translate("signupView", "Administrator", 0));
        studentSignUpBtn->setText(QApplication::translate("signupView", "Student", 0));
        cancelBtn->setText(QApplication::translate("signupView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class signupView: public Ui_signupView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPVIEWOPTION_H
