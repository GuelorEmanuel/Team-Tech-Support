#ifndef JOINPROJECTVIEW_H
#define JOINPROJECTVIEW_H

#include <QDialog>

namespace Ui {
class JoinProjectView;
}

class JoinProjectView : public QDialog
{
    Q_OBJECT

public:
    explicit JoinProjectView(QWidget *parent = 0);
    ~JoinProjectView();

private:
    Ui::JoinProjectView *ui;
};

#endif // JOINPROJECTVIEW_H
