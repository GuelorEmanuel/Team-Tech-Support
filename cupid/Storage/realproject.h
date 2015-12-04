#ifndef REALPROJECT_H
#define REALPROJECT_H
#include <memory>
#include <QString>
#include <vector>
#include "realstudent.h"

class RealProject
{
public:
    RealProject();
private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    std::vector<RealStudent> _students;
};

#endif // REALPROJECT_H
