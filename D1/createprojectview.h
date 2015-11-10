#ifndef CREATEPROJECTVIEW_H
#define CREATEPROJECTVIEW_H

#include <QDialog>
#include <memory>
#include <QDebug>

class CreateProjectControl;

namespace Ui {
    class CreateProjectView;
}

class CreateProjectView : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProjectView(CreateProjectControl &control, QWidget *parent = 0);
    ~CreateProjectView();
    void displayError(QString msg);

private slots:
    void on_createBtn_clicked();
    void on_cancelButton_clicked();

private:
    std::auto_ptr<Ui::CreateProjectView> ui;
    CreateProjectControl &_control;
};

#endif // CREATEPROJECTVIEW_H
