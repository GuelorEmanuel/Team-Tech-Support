#ifndef ADMINHOMEWINDOW_H
#define ADMINHOMEWINDOW_H

#include <QDialog>
#include <QString>
#include <memory>
#include "Storage/storage.h"
class AdminHomeControl;

namespace Ui {
    class AdminHomeWindow;
}

class AdminHomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminHomeWindow(AdminHomeControl &control, QWidget *parent = 0);
    void updateProjectsList(storage::ProjectList projects);
    void setName(QString name);
    ~AdminHomeWindow();

private slots:

    void on_createProjectBtn_clicked();
    void on_signoutBtn_clicked();
    void on_editProjectBtn_clicked();
    void on_runAlgoBtn_clicked();

private:
    AdminHomeControl& _control;
    std::unique_ptr<Ui::AdminHomeWindow> ui;
};

#endif // ADMINHOMEWINDOW_H
