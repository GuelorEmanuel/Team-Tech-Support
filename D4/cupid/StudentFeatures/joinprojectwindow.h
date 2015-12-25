#ifndef JOINPROJECTWINDOW_H
#define JOINPROJECTWINDOW_H

#include "Storage/storage.h"
#include <QDialog>
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
    void refreshProjectSettings(storage::ProjectPtr project);

private slots:
    void on_leaveProjectBtn_clicked();
    void on_joinProjectBtn_clicked();

private:
    std::unique_ptr<Ui::JoinProjectWindow> ui;
    JoinProjectControl &_control;
};

#endif // JOINPROJECTWINDOW_H
