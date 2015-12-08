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
    _view->clearWindow();
    /*std::vector<algorithm::TeamPtr>& teams = _algorithm->getTeams();
    for(int i = 0; i < teams.size(); i++) {
        _view->addDetailedTeam(teams[i], i+1);
    }*/
}

void ComputeTeamsControl::showSummary()
{
   /* _view->clearWindow();
    std::vector<algorithm::TeamPtr>& teams = _algorithm->getTeams();
    for(int i = 0; i < teams.size(); i++) {
        _view->addSummaryTeam(teams[i], i+1);
    }*/
}
