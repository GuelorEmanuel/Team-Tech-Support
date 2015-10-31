/********************************************************************************
** Form generated from reading UI file 'adminsignupview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSIGNUPVIEW_H
#define UI_ADMINSIGNUPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminSignupView
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *firstNameLE;
    QLineEdit *lastNameLE;
    QLineEdit *idLE;
    QPushButton *submitBtn;
    QPushButton *cancelBtn;
    QLineEdit *pwdLE;

    void setupUi(QWidget *adminSignupView)
    {
        if (adminSignupView->objectName().isEmpty())
            adminSignupView->setObjectName(QStringLiteral("adminSignupView"));
        adminSignupView->resize(400, 300);
        label = new QLabel(adminSignupView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 67, 17));
        widget = new QWidget(adminSignupView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(122, 50, 148, 194));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        firstNameLE = new QLineEdit(widget);
        firstNameLE->setObjectName(QStringLiteral("firstNameLE"));

        verticalLayout->addWidget(firstNameLE);

        lastNameLE = new QLineEdit(widget);
        lastNameLE->setObjectName(QStringLiteral("lastNameLE"));

        verticalLayout->addWidget(lastNameLE);

        idLE = new QLineEdit(widget);
        idLE->setObjectName(QStringLiteral("idLE"));

        verticalLayout->addWidget(idLE);

        submitBtn = new QPushButton(widget);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));

        verticalLayout->addWidget(submitBtn);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        verticalLayout->addWidget(cancelBtn);

        pwdLE = new QLineEdit(widget);
        pwdLE->setObjectName(QStringLiteral("pwdLE"));

        verticalLayout->addWidget(pwdLE);


        retranslateUi(adminSignupView);

        QMetaObject::connectSlotsByName(adminSignupView);
    } // setupUi

    void retranslateUi(QWidget *adminSignupView)
    {
        adminSignupView->setWindowTitle(QApplication::translate("adminSignupView", "Form", 0));
        label->setText(QApplication::translate("adminSignupView", "SIGN UP", 0));
        firstNameLE->setPlaceholderText(QApplication::translate("adminSignupView", "   Your First Name", 0));
        lastNameLE->setPlaceholderText(QApplication::translate("adminSignupView", "   Your Last Name", 0));
        idLE->setPlaceholderText(QApplication::translate("adminSignupView", "   Your Work ID", 0));
        submitBtn->setText(QApplication::translate("adminSignupView", "Submit", 0));
        cancelBtn->setText(QApplication::translate("adminSignupView", "Cancel", 0));
        pwdLE->setPlaceholderText(QApplication::translate("adminSignupView", "Password(Optional)", 0));
    } // retranslateUi

};

namespace Ui {
    class adminSignupView: public Ui_adminSignupView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSIGNUPVIEW_H
