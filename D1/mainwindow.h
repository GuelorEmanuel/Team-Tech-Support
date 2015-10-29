#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonSignIn_clicked();

    void on_buttonSignUp_clicked();

    void on_signUpBtn_clicked();

    void on_signInBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
