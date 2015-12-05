#ifndef COMPUTETEAMSCONTROL_H
#define COMPUTETEAMSCONTROL_H

#include <QString>
class ComputeTeamsControl
{
public:
    ComputeTeamsControl();
    int startAlgorithm(QString projectName);
    int cancel();
};

#endif // COMPUTETEAMSCONTROL_H
