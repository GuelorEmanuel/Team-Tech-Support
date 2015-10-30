#ifndef SIGNUPVIEW_H
#define SIGNUPVIEW_H

#include <QDialog>

namespace Ui {
class Signupview;
}

class Signupview : public QDialog
{
    Q_OBJECT

public:
    explicit Signupview(QWidget *parent = 0);
    ~Signupview();

private slots:
    void on_cancelBtn_clicked();

private:
    Ui::Signupview *ui;
};

#endif // SIGNUPVIEW_H
