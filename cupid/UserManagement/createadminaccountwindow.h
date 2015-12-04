#ifndef CREATEADMINACCOUNTWINDOW_H
#define CREATEADMINACCOUNTWINDOW_H

#include <QDialog>
#include <memory>
class CreateAdminAccountControl;

namespace Ui {
    class CreateAdminAccountWindow;
}

class CreateAdminAccountWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateAdminAccountWindow(CreateAdminAccountControl &control,
                                    QWidget *parent = 0);
    ~CreateAdminAccountWindow();

private slots:
    void on_submitBtn_clicked();
    void on_cancelBtn_clicked();

private:
    std::auto_ptr<Ui::CreateAdminAccountWindow> ui;
    CreateAdminAccountControl &_control;
};

#endif // CREATEADMINACCOUNTWINDOW_H