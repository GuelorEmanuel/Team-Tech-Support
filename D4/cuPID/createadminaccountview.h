#ifndef CREATEADMINACCOUNTVIEW_H
#define CREATEADMINACCOUNTVIEW_H

#include <QDialog>

namespace Ui {
class CreateAdminAccountView;
}

class CreateAdminAccountView : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAdminAccountView(QWidget *parent = 0);
    ~CreateAdminAccountView();

private:
    Ui::CreateAdminAccountView *ui;
};

#endif // CREATEADMINACCOUNTVIEW_H
