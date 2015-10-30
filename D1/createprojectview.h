#ifndef CREATEPROJECTVIEW_H
#define CREATEPROJECTVIEW_H

#include <QDialog>

namespace Ui {
class CreateProjectView;
}

class CreateProjectView : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProjectView(QWidget *parent = 0);
    ~CreateProjectView();
    void editProjectView();
    void createProjectView();

private slots:
    void on_updateBtn_clicked();

    void on_createBtn_clicked();

private:
    Ui::CreateProjectView *ui;
};

#endif // CREATEPROJECTVIEW_H
