#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QMainWindow>

namespace Ui {
class LoginView;
}

class LoginView : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginView(QWidget *parent = 0);
    ~LoginView();

private:
    Ui::LoginView *ui;
};

#endif // LOGINVIEW_H
