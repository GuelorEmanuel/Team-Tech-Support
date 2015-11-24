#ifndef COMPUTETEAMSWINDOW_H
#define COMPUTETEAMSWINDOW_H

#include <QDialog>

namespace Ui {
    class ComputeTeamsWindow;
}

class ComputeTeamsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComputeTeamsWindow(QWidget *parent = 0);
    ~ComputeTeamsWindow();

private:
    Ui::ComputeTeamsWindow *ui;
};

#endif // COMPUTETEAMSWINDOW_H
