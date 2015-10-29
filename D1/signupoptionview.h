#ifndef SIGNUPOPTIONVIEW_H
#define SIGNUPOPTIONVIEW_H

#include <QDialog>
#include "signupview.h"

namespace Ui {
class SignupOptionView;
}

class SignupOptionView : public QDialog
{
    Q_OBJECT

public:
    explicit SignupOptionView(QWidget *parent = 0);
    ~SignupOptionView();

private slots:
    void on_adminBtn_clicked();

    void on_studentBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::SignupOptionView *ui;
    Signupview signupview;
};

#endif // SIGNUPOPTIONVIEW_H
