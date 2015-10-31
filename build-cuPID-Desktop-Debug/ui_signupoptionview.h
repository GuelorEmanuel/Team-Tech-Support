/********************************************************************************
** Form generated from reading UI file 'signupoptionview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPOPTIONVIEW_H
#define UI_SIGNUPOPTIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupOptionView
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *adminBtn;
    QPushButton *studentBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *SignupOptionView)
    {
        if (SignupOptionView->objectName().isEmpty())
            SignupOptionView->setObjectName(QStringLiteral("SignupOptionView"));
        SignupOptionView->resize(400, 300);
        label = new QLabel(SignupOptionView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 67, 17));
        widget = new QWidget(SignupOptionView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 40, 157, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        adminBtn = new QPushButton(widget);
        adminBtn->setObjectName(QStringLiteral("adminBtn"));

        verticalLayout->addWidget(adminBtn);

        studentBtn = new QPushButton(widget);
        studentBtn->setObjectName(QStringLiteral("studentBtn"));

        verticalLayout->addWidget(studentBtn);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        verticalLayout->addWidget(cancelBtn);


        retranslateUi(SignupOptionView);

        QMetaObject::connectSlotsByName(SignupOptionView);
    } // setupUi

    void retranslateUi(QDialog *SignupOptionView)
    {
        SignupOptionView->setWindowTitle(QApplication::translate("SignupOptionView", "Dialog", 0));
        label->setText(QApplication::translate("SignupOptionView", "SIGN UP", 0));
        label_2->setText(QApplication::translate("SignupOptionView", "Select an Account type", 0));
        adminBtn->setText(QApplication::translate("SignupOptionView", "Administrator", 0));
        studentBtn->setText(QApplication::translate("SignupOptionView", "Student", 0));
        cancelBtn->setText(QApplication::translate("SignupOptionView", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SignupOptionView: public Ui_SignupOptionView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPOPTIONVIEW_H
