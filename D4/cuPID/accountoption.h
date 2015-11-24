#ifndef ACCOUNTOPTION_H
#define ACCOUNTOPTION_H

#include <QDialog>

namespace Ui {
class AccountOption;
}

class AccountOption : public QDialog
{
    Q_OBJECT

public:
    explicit AccountOption(QWidget *parent = 0);
    ~AccountOption();

private:
    Ui::AccountOption *ui;
};

#endif // ACCOUNTOPTION_H
