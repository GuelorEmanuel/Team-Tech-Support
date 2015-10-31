/********************************************************************************
** Form generated from reading UI file 'signupview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPVIEW_H
#define UI_SIGNUPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signupview
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *firstNameLE;
    QLineEdit *lastnameLE;
    QLineEdit *idLE;
    QHBoxLayout *horizontalLayout;
    QPushButton *submitBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *Signupview)
    {
        if (Signupview->objectName().isEmpty())
            Signupview->setObjectName(QStringLiteral("Signupview"));
        Signupview->resize(400, 300);
        label = new QLabel(Signupview);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 101, 17));
        label_2 = new QLabel(Signupview);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 50, 271, 20));
        layoutWidget = new QWidget(Signupview);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 80, 180, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        firstNameLE = new QLineEdit(layoutWidget);
        firstNameLE->setObjectName(QStringLiteral("firstNameLE"));

        verticalLayout->addWidget(firstNameLE);

        lastnameLE = new QLineEdit(layoutWidget);
        lastnameLE->setObjectName(QStringLiteral("lastnameLE"));

        verticalLayout->addWidget(lastnameLE);

        idLE = new QLineEdit(layoutWidget);
        idLE->setObjectName(QStringLiteral("idLE"));

        verticalLayout->addWidget(idLE);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        submitBtn = new QPushButton(layoutWidget);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));

        horizontalLayout->addWidget(submitBtn);

        cancelBtn = new QPushButton(layoutWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout->addWidget(cancelBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Signupview);

        QMetaObject::connectSlotsByName(Signupview);
    } // setupUi

    void retranslateUi(QDialog *Signupview)
    {
        Signupview->setWindowTitle(QApplication::translate("Signupview", "Dialog", 0));
        label->setText(QApplication::translate("Signupview", "SIGN UP", 0));
        label_2->setText(QApplication::translate("Signupview", "It's free and takes less than 30 seconds", 0));
        firstNameLE->setPlaceholderText(QApplication::translate("Signupview", "        Your First Name", 0));
        lastnameLE->setPlaceholderText(QApplication::translate("Signupview", "        Your Last Name", 0));
        idLE->setPlaceholderText(QApplication::translate("Signupview", "                 Your ID", 0));
        submitBtn->setText(QApplication::translate("Signupview", "Submit", 0));
        cancelBtn->setText(QApplication::translate("Signupview", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Signupview: public Ui_Signupview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPVIEW_H
