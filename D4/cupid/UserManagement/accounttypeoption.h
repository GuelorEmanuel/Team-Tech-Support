#ifndef ACCOUNTTYPEOPTION_H
#define ACCOUNTTYPEOPTION_H

#include <memory>
#include <QDialog>

class LoginControl;
namespace Ui {
    class AccountTypeOption;
}

class AccountTypeOption : public QDialog
{
    Q_OBJECT

public:
    explicit AccountTypeOption(LoginControl &control,
                              QWidget *parent = 0);
    ~AccountTypeOption();

private slots:
    void on_adminBtn_clicked();
    void on_studentBtn_clicked();
    void on_cancelBtn_clicked();

private:
    std::auto_ptr<Ui::AccountTypeOption> ui;
    LoginControl &_control;
};

#endif // ACCOUNTTYPEOPTION_H
