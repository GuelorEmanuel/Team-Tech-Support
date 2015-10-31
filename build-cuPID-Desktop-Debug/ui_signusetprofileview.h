/********************************************************************************
** Form generated from reading UI file 'signusetprofileview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUSETPROFILEVIEW_H
#define UI_SIGNUSETPROFILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signusetprofileview
{
public:
    QLabel *label;

    void setupUi(QWidget *signusetprofileview)
    {
        if (signusetprofileview->objectName().isEmpty())
            signusetprofileview->setObjectName(QStringLiteral("signusetprofileview"));
        signusetprofileview->resize(400, 300);
        label = new QLabel(signusetprofileview);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 71, 21));

        retranslateUi(signusetprofileview);

        QMetaObject::connectSlotsByName(signusetprofileview);
    } // setupUi

    void retranslateUi(QWidget *signusetprofileview)
    {
        signusetprofileview->setWindowTitle(QApplication::translate("signusetprofileview", "Form", 0));
        label->setText(QApplication::translate("signusetprofileview", "Set Profile", 0));
    } // retranslateUi

};

namespace Ui {
    class signusetprofileview: public Ui_signusetprofileview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUSETPROFILEVIEW_H
