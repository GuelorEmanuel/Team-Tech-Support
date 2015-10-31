/********************************************************************************
** Form generated from reading UI file 'adminhomepageview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOMEPAGEVIEW_H
#define UI_ADMINHOMEPAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminhomepageview
{
public:
    QListView *studentsLV;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *studentBtn;
    QPushButton *studentInProjectBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *HomeBtn;
    QPushButton *addNewProjectBtn;
    QPushButton *signOutBtn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QListView *projetcsLV;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *runAlgo;
    QPushButton *editBtn;
    QPushButton *deleteBtn;

    void setupUi(QWidget *adminhomepageview)
    {
        if (adminhomepageview->objectName().isEmpty())
            adminhomepageview->setObjectName(QStringLiteral("adminhomepageview"));
        adminhomepageview->resize(802, 420);
        studentsLV = new QListView(adminhomepageview);
        studentsLV->setObjectName(QStringLiteral("studentsLV"));
        studentsLV->setGeometry(QRect(0, 190, 241, 221));
        line = new QFrame(adminhomepageview);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 60, 211, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(adminhomepageview);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 130, 211, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(adminhomepageview);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 150, 247, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        studentBtn = new QPushButton(layoutWidget);
        studentBtn->setObjectName(QStringLiteral("studentBtn"));

        horizontalLayout->addWidget(studentBtn);

        studentInProjectBtn = new QPushButton(layoutWidget);
        studentInProjectBtn->setObjectName(QStringLiteral("studentInProjectBtn"));

        horizontalLayout->addWidget(studentInProjectBtn);

        layoutWidget1 = new QWidget(adminhomepageview);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 90, 241, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        HomeBtn = new QPushButton(layoutWidget1);
        HomeBtn->setObjectName(QStringLiteral("HomeBtn"));

        horizontalLayout_2->addWidget(HomeBtn);

        addNewProjectBtn = new QPushButton(layoutWidget1);
        addNewProjectBtn->setObjectName(QStringLiteral("addNewProjectBtn"));

        horizontalLayout_2->addWidget(addNewProjectBtn);

        signOutBtn = new QPushButton(layoutWidget1);
        signOutBtn->setObjectName(QStringLiteral("signOutBtn"));

        horizontalLayout_2->addWidget(signOutBtn);

        layoutWidget2 = new QWidget(adminhomepageview);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 241, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        projetcsLV = new QListView(adminhomepageview);
        projetcsLV->setObjectName(QStringLiteral("projetcsLV"));
        projetcsLV->setGeometry(QRect(320, 50, 361, 361));
        label_3 = new QLabel(adminhomepageview);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 10, 121, 20));
        widget = new QWidget(adminhomepageview);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(690, 310, 101, 95));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        runAlgo = new QPushButton(widget);
        runAlgo->setObjectName(QStringLiteral("runAlgo"));

        verticalLayout->addWidget(runAlgo);

        editBtn = new QPushButton(widget);
        editBtn->setObjectName(QStringLiteral("editBtn"));

        verticalLayout->addWidget(editBtn);

        deleteBtn = new QPushButton(widget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));

        verticalLayout->addWidget(deleteBtn);


        retranslateUi(adminhomepageview);

        QMetaObject::connectSlotsByName(adminhomepageview);
    } // setupUi

    void retranslateUi(QWidget *adminhomepageview)
    {
        adminhomepageview->setWindowTitle(QApplication::translate("adminhomepageview", "Form", 0));
        studentBtn->setText(QApplication::translate("adminhomepageview", "Students", 0));
        studentInProjectBtn->setText(QApplication::translate("adminhomepageview", "Students in projects", 0));
        HomeBtn->setText(QApplication::translate("adminhomepageview", "Home", 0));
        addNewProjectBtn->setText(QApplication::translate("adminhomepageview", "+", 0));
        signOutBtn->setText(QApplication::translate("adminhomepageview", "Sign Out", 0));
        label->setText(QApplication::translate("adminhomepageview", "TextLabel", 0));
        label_2->setText(QApplication::translate("adminhomepageview", "TextLabel", 0));
        label_3->setText(QApplication::translate("adminhomepageview", "Available projects", 0));
        runAlgo->setText(QApplication::translate("adminhomepageview", "run Algo", 0));
        editBtn->setText(QApplication::translate("adminhomepageview", "edit", 0));
        deleteBtn->setText(QApplication::translate("adminhomepageview", "delete", 0));
    } // retranslateUi

};

namespace Ui {
    class adminhomepageview: public Ui_adminhomepageview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOMEPAGEVIEW_H
