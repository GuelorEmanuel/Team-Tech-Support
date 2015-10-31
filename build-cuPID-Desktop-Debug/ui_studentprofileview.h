/********************************************************************************
** Form generated from reading UI file 'studentprofileview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPROFILEVIEW_H
#define UI_STUDENTPROFILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentProfileView
{
public:
    QLabel *label;
    QFrame *line;
    QPushButton *saveBtn;
    QPushButton *exitBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *StudentProfileView)
    {
        if (StudentProfileView->objectName().isEmpty())
            StudentProfileView->setObjectName(QStringLiteral("StudentProfileView"));
        StudentProfileView->resize(652, 460);
        label = new QLabel(StudentProfileView);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 67, 17));
        line = new QFrame(StudentProfileView);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(7, 40, 611, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        saveBtn = new QPushButton(StudentProfileView);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(520, 400, 99, 27));
        exitBtn = new QPushButton(StudentProfileView);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(400, 400, 99, 27));
        widget = new QWidget(StudentProfileView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 60, 611, 19));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        widget1 = new QWidget(StudentProfileView);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 80, 601, 20));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);


        retranslateUi(StudentProfileView);

        QMetaObject::connectSlotsByName(StudentProfileView);
    } // setupUi

    void retranslateUi(QDialog *StudentProfileView)
    {
        StudentProfileView->setWindowTitle(QApplication::translate("StudentProfileView", "Dialog", 0));
        label->setText(QApplication::translate("StudentProfileView", "Profile", 0));
        saveBtn->setText(QApplication::translate("StudentProfileView", "Save", 0));
        exitBtn->setText(QApplication::translate("StudentProfileView", "exit", 0));
        label_2->setText(QApplication::translate("StudentProfileView", "Strongly Agree", 0));
        label_3->setText(QApplication::translate("StudentProfileView", "Agree", 0));
        label_4->setText(QApplication::translate("StudentProfileView", "Indiferent", 0));
        label_5->setText(QApplication::translate("StudentProfileView", "Disagree", 0));
        label_6->setText(QApplication::translate("StudentProfileView", "Strongly Disagree", 0));
        label_7->setText(QApplication::translate("StudentProfileView", "1", 0));
        label_8->setText(QApplication::translate("StudentProfileView", "2", 0));
        label_9->setText(QApplication::translate("StudentProfileView", "3", 0));
        label_10->setText(QApplication::translate("StudentProfileView", "4", 0));
        label_11->setText(QApplication::translate("StudentProfileView", "5", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentProfileView: public Ui_StudentProfileView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPROFILEVIEW_H
