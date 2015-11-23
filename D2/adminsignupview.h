#ifndef ADMINSIGNUPVIEW_H
#define ADMINSIGNUPVIEW_H

#include <QWidget>

namespace Ui {
class adminSignupView;
}

class adminSignupView : public QWidget
{
    Q_OBJECT

public:
    explicit adminSignupView(QWidget *parent = 0);
    ~adminSignupView();

private slots:
    void on_submitBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::adminSignupView *ui;
};

#endif // ADMINSIGNUPVIEW_H
