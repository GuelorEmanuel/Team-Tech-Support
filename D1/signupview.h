#ifndef SIGNUPVIEW_H
#define SIGNUPVIEW_H

#include <QWidget>

namespace Ui {
class signupView;
}

class signupView : public QWidget
{
    Q_OBJECT

public:
    explicit signupView(QWidget *parent = 0);
    ~signupView();

private slots:
    void on_submitBtn_clicked();

    void on_submitBtn_2_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::signupView *ui;
};

#endif // SIGNUPVIEW_H
