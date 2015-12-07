#include "AlgorithmFeatures/algorithm.h"
#include "AlgorithmFeatures/computeteamscontrol.h"
#include "AlgorithmFeatures/computeteamswindow.h"
#include "Storage/project.h"

ComputeTeamsControl::ComputeTeamsControl(storage::ProjectPtr project)
    : _project(project), _view(new ComputeTeamsWindow(*this)),
      _algorithm(new Algorithm(project))
{
    _view->setProjectTitle(project->getName());
    _view->setModal(true);
    _view->exec();
}

ComputeTeamsControl::~ComputeTeamsControl() {}

void ComputeTeamsControl::back()
{
    _view->close();
}

void ComputeTeamsControl::showDetails()
{
}

void ComputeTeamsControl::showSummary()
{
}
