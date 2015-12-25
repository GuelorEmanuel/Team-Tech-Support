#ifndef ACCOUNTTYPEOPTION_H
#define ACCOUNTTYPEOPTION_H

#include "ui_accounttypeoption.h"
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
    LoginControl &_control;
    std::unique_ptr<Ui::AccountTypeOption> _ui;
};

#endif // ACCOUNTTYPEOPTION_H
