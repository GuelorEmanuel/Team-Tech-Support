#ifndef COMPUTETEAMSVIEW_H
#define COMPUTETEAMSVIEW_H

#include <QDialog>

namespace Ui {
class ComputeTeamsView;
}

class ComputeTeamsView : public QDialog
{
    Q_OBJECT

public:
    explicit ComputeTeamsView(QWidget *parent = 0);
    ~ComputeTeamsView();

private:
    Ui::ComputeTeamsView *ui;
};

#endif // COMPUTETEAMSVIEW_H
