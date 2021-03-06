#ifndef EDITPROJECTVIEW_H
#define EDITPROJECTVIEW_H

#include <QDialog>
#include <memory>
#include"studenthomeview.h"

class EditProjectControl;
class Project;

namespace Ui {
    class EditProjectView;
}

class EditProjectView : public QDialog
{
    Q_OBJECT

public:
    EditProjectView(EditProjectControl &control, QWidget *parent = 0);
    ~EditProjectView();
    void refreshProjectSettings(const Project& project);

private slots:
    void on_updateBtn_clicked();
    void on_cancelButton_clicked();

private:
    EditProjectControl &_control;
    std::auto_ptr<Ui::EditProjectView> ui;
};

#endif // EDITPROJECTVIEW_H
