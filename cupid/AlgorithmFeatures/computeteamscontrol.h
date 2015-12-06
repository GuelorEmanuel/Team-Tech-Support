#ifndef COMPUTETEAMSCONTROL_H
#define COMPUTETEAMSCONTROL_H

#include "Storage/storage.h"
#include <QString>
class Algorithm;
class ComputeTeamsWindow;

class ComputeTeamsControl
{
public:
    ComputeTeamsControl(storage::ProjectPtr project);
    ~ComputeTeamsControl();
    void back();
    void showDetails();
    void showSummary();
private:
    storage::ProjectPtr _project;
    std::unique_ptr<ComputeTeamsWindow> _view;
    std::unique_ptr<Algorithm> _algorithm;
};

#endif // COMPUTETEAMSCONTROL_H
