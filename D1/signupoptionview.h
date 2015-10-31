#ifndef SIGNUPOPTIONVIEW_H
#define SIGNUPOPTIONVIEW_H

#include <memory>
#include <QDialog>
class SignUpMainControl;

namespace Ui {
class SignupOptionView;
}

class SignupOptionView : public QDialog
{
    Q_OBJECT

public:
    explicit SignupOptionView(SignUpMainControl &control,
                              QWidget *parent = 0);
    ~SignupOptionView();

private slots:
    void on_adminBtn_clicked();
    void on_studentBtn_clicked();
    void on_cancelBtn_clicked();

private:
    std::auto_ptr<Ui::SignupOptionView> ui;
    SignUpMainControl &_control;
};

#endif // SIGNUPOPTIONVIEW_H
