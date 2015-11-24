#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "AdminFeatures/adminhomewindow.h"
#include "accounttypeoption.h"

class LoginControl;

namespace Ui {
    class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(LoginControl& control, QWidget *parent = 0);
    ~LoginWindow();

private slots:

    void on_signUpBtn_clicked();
    void on_signInBtn_clicked();
    void on_lineEditUserName_returnPressed();

private:
    LoginControl& _control;
    std::auto_ptr<Ui::LoginWindow> ui;
};

#endif // LOGINWINDOW_H
