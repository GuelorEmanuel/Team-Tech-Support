/********************************************************************************
** Form generated from reading UI file 'studentsignupview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSIGNUPVIEW_H
#define UI_STUDENTSIGNUPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentsignupView
{
public:

    void setupUi(QWidget *studentsignupView)
    {
        if (studentsignupView->objectName().isEmpty())
            studentsignupView->setObjectName(QStringLiteral("studentsignupView"));
        studentsignupView->resize(400, 300);

        retranslateUi(studentsignupView);

        QMetaObject::connectSlotsByName(studentsignupView);
    } // setupUi

    void retranslateUi(QWidget *studentsignupView)
    {
        studentsignupView->setWindowTitle(QApplication::translate("studentsignupView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class studentsignupView: public Ui_studentsignupView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSIGNUPVIEW_H
