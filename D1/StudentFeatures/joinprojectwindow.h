#ifndef JOINPROJECTWINDOW_H
#define JOINPROJECTWINDOW_H

#include <QDialog>
#include <memory>
#include "Storage/project.h"

class JoinProjectControl;

namespace Ui {
class JoinProjectWindow;
}

class JoinProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit JoinProjectWindow(JoinProjectControl &control, QWidget *parent = 0);
    ~JoinProjectWindow();

    void refreshProjectSettings(const Project& project);

private slots:
    void on_leaveProjectBtn_clicked();

    void on_joinProjectBtn_clicked();

private:
    std::auto_ptr<Ui::JoinProjectWindow> ui;
    JoinProjectControl &_control;
};

#endif // JOINPROJECTWINDOW_H
