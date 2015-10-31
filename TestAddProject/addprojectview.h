#ifndef ADDPROJECTVIEW_H
#define ADDPROJECTVIEW_H

#include <QMainWindow>

namespace Ui {
class AddProjectView;
}

class AddProjectView : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddProjectView(QWidget *parent = 0);
    ~AddProjectView();

private:
    Ui::AddProjectView *ui;
};

#endif // ADDPROJECTVIEW_H
