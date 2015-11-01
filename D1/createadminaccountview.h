#ifndef CREATEADMINACCOUNTVIEW_H
#define CREATEADMINACCOUNTVIEW_H

#include <QDialog>
#include <memory>
class CreateAdminAccountControl;

namespace Ui {
    class CreateAdminAccountView;
}

class CreateAdminAccountView : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateAdminAccountView(CreateAdminAccountControl &control,
                                    QWidget *parent = 0);
    ~CreateAdminAccountView();

private slots:
    void on_submitBtn_clicked();
    void on_cancelBtn_clicked();

private:
    std::auto_ptr<Ui::CreateAdminAccountView> ui;
    CreateAdminAccountControl &_control;
};

#endif // CREATEADMINACCOUNTVIEW_H
