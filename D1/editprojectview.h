#ifndef EDITPROJECTVIEW_H
#define EDITPROJECTVIEW_H

#include <QDialog>
#include <memory>
class EditProjectControl;

namespace Ui {
    class EditProjectView;
}

class EditProjectView : public QDialog
{
    Q_OBJECT

public:
    EditProjectView(EditProjectControl &control, QWidget *parent = 0);
    ~EditProjectView();

private slots:
    void on_updateBtn_clicked();

private:
    EditProjectControl &_control;
    std::auto_ptr<Ui::EditProjectView> ui;
};

#endif // EDITPROJECTVIEW_H
