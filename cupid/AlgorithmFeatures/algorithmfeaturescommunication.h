#ifndef ALGORITHMFEATURESCOMMUNICATION_H
#define ALGORITHMFEATURESCOMMUNICATION_H

#include "Storage/storage.h"

class AlgorithmFeaturesCommunication
{
public:
    static void showComputeTeamsWindow(storage::ProjectPtr project);
private:
    AlgorithmFeaturesCommunication();
    void operator=(
            AlgorithmFeaturesCommunication const& rhs) = delete;
    AlgorithmFeaturesCommunication(
            AlgorithmFeaturesCommunication const& rhs) = delete;
};

#endif // ALGORITHMFEATURESCOMMUNICATION_H
