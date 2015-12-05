#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <memory>

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
    std::unique_ptr<Ui::LoginWindow> _ui;
};

#endif // LOGINWINDOW_H
