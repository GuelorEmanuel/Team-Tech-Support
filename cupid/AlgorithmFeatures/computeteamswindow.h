#ifndef COMPUTETEAMSWINDOW_H
#define COMPUTETEAMSWINDOW_H

#include "team.h"
#include "Storage/student.h"
#include "Storage/storage.h"
#include "algorithm"
#include <memory>
#include <QDialog>
#include <QString>
class ComputeTeamsControl;

namespace Ui {
    class ComputeTeamsWindow;
}

class ComputeTeamsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComputeTeamsWindow(ComputeTeamsControl& control,
                                QWidget *parent = 0);
    void setProjectTitle(QString str);
    ~ComputeTeamsWindow();
    void clearWindow();
    void addSummaryTeam(algorithm::TeamPtr team, int num);
    void addDetailedTeam(algorithm::TeamPtr team, int num);

private slots:
    void on_backButton_clicked();
    void on_summaryButton_clicked();
    void on_detailsButton_clicked();

private:
    ComputeTeamsControl& _control;
    std::unique_ptr<Ui::ComputeTeamsWindow> ui;
};

#endif // COMPUTETEAMSWINDOW_H
