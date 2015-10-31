/********************************************************************************
** Form generated from reading UI file 'studenthomepageview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTHOMEPAGEVIEW_H
#define UI_STUDENTHOMEPAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studenthomepageview
{
public:

    void setupUi(QWidget *studenthomepageview)
    {
        if (studenthomepageview->objectName().isEmpty())
            studenthomepageview->setObjectName(QStringLiteral("studenthomepageview"));
        studenthomepageview->resize(400, 300);

        retranslateUi(studenthomepageview);

        QMetaObject::connectSlotsByName(studenthomepageview);
    } // setupUi

    void retranslateUi(QWidget *studenthomepageview)
    {
        studenthomepageview->setWindowTitle(QApplication::translate("studenthomepageview", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class studenthomepageview: public Ui_studenthomepageview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTHOMEPAGEVIEW_H
