#ifndef ADMINHOMEVIEW_H
#define ADMINHOMEVIEW_H

#include <QDialog>
#include <memory>
class AdminMainControl;

namespace Ui {
    class AdminHomeView;
}

class AdminHomeView : public QDialog
{
    Q_OBJECT

public:
    explicit AdminHomeView(AdminMainControl &control, QWidget *parent = 0);
    void addProject(int id, QString name);
    void setName(QString name);
    ~AdminHomeView();

private slots:

    void on_createProjectBtn_clicked();
    void on_signoutBtn_clicked();
    void on_editProjectBtn_clicked();
    void on_runAlgoBtn_clicked();

private:
    std::auto_ptr<Ui::AdminHomeView> ui;
    AdminMainControl& _control;
};

#endif // ADMINHOMEVIEW_H
