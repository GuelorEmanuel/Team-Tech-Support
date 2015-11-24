#ifndef MANAGEPROJECTVIEW_H
#define MANAGEPROJECTVIEW_H

#include <QDialog>

namespace Ui {
class ManageProjectView;
}

class ManageProjectView : public QDialog
{
    Q_OBJECT

public:
    explicit ManageProjectView(QWidget *parent = 0);
    ~ManageProjectView();

private:
    Ui::ManageProjectView *ui;
};

#endif // MANAGEPROJECTVIEW_H
