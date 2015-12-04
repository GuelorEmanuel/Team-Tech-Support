#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Storage/project.h"
#include "Storage/student.h"
#include "Storage/profile.h"
#include "Storage/qualification.h"
#include "team.h"
#include <vector>
#include <unordered_map>

class Algorithm
{
public:
    Algorithm(Project& project, std::vector<Student&> _students);
private:    
    Project& _project;
    std::vector<Student&> _students;
    std::unordered_map<QString, Team> teams;
    double CalculateScore(const Student& a, const Student& b);
    double CalculateScore(const Team& team);
    double CalculateScore(const Student& student, const Team& team);
    double CalculateScore(const std::vector<Team&>& teams);
};

#endif // ALGORITHM_H
