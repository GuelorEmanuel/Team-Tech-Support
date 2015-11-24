#ifndef ADMINHOMEWINDOW_H
#define ADMINHOMEWINDOW_H

#include <QDialog>
#include <memory>
class AdminHomeControl;

namespace Ui {
    class AdminHomeWindow;
}

class AdminHomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminHomeWindow(AdminHomeControl &control, QWidget *parent = 0);
    void addProject(int id, QString name);
    void setName(QString name);
    ~AdminHomeWindow();

private slots:

    void on_createProjectBtn_clicked();
    void on_signoutBtn_clicked();
    void on_editProjectBtn_clicked();
    void on_runAlgoBtn_clicked();

private:
    std::auto_ptr<Ui::AdminHomeWindow> ui;
    AdminHomeControl& _control;
};

#endif // ADMINHOMEWINDOW_H
