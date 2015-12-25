#include "AlgorithmFeatures/algorithmfeaturescommunication.h"
#include "AlgorithmFeatures/computeteamscontrol.h"
#include "Storage/storage.h"
using namespace storage;

AlgorithmFeaturesCommunication::AlgorithmFeaturesCommunication()
{
}

void AlgorithmFeaturesCommunication::showComputeTeamsWindow(
        ProjectPtr project)
{
    ComputeTeamsControl ctc(project);
}
