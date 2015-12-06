#ifndef STUDENTHOMEWINDOW_H
#define STUDENTHOMEWINDOW_H

#include "Storage/storage.h"
#include <QDialog>
#include <QString>
#include "ui_studenthomewindow.h"

class StudentHomeControl;

namespace Ui {
    class StudentHomeWindow;
}

class StudentHomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StudentHomeWindow(StudentHomeControl &control,
                               QWidget *parent = 0);
    ~StudentHomeWindow();
    void addUnjoinedProject(int id, QString name);
    void addJoinedProject(int id, QString name);
    void setName(QString name);
    void updateJoinedProjects(QString name);

private slots:
    void on_editProfileBtn_clicked();
    void on_signOutBtn_clicked();
    void on_openProjectBtn_clicked();

private:
    std::unique_ptr<Ui::StudentHomeWindow> ui;
    StudentHomeControl& _control;
};

#endif // STUDENTHOMEWINDOW_H
