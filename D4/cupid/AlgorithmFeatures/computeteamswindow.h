#ifndef COMPUTETEAMSWINDOW_H
#define COMPUTETEAMSWINDOW_H
#include "computeteamscontrol.h"
#include <auto_ptr.h>
#include <QDialog>

namespace Ui {
    class ComputeTeamsWindow;
}

class ComputeTeamsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComputeTeamsWindow(ComputeTeamsControl& control, QWidget *parent = 0);
    ~ComputeTeamsWindow();

private slots:
    void on_cancelButton_clicked();

    void on_submitButton_clicked();

private:
    ComputeTeamsControl& _control;
    std::auto_ptr<Ui::ComputeTeamsWindow> ui;
};

#endif // COMPUTETEAMSWINDOW_H
