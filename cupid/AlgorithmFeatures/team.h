#ifndef TEAM_H
#define TEAM_H

#include "AlgorithmFeatures/algorithm.h"
#include "Storage/storage.h"
#include <QString>
#include "Storage/profile.h"
#include "Storage/student.h"
#include <vector>

class Team
{
public:
    Team();
    Team(storage::StudentPtr student);
    void addStudent(storage::StudentPtr student);
    double getScore() const;
    double getOverallSkillAverage() const;
    double getAverage(int questionId) const;
    double getMax(int questionId) const;
    const std::vector<storage::StudentPtr>& getStudents() const;
    QString getId() const;
    int getSize() const;
private:
    static const int* _needStats;
    mutable bool _cacheValid;
    mutable double _score;
    mutable QString _id;
    mutable double _overallSkillAverage;
    mutable double _averages[28];
    mutable double _maxes[28];
    std::vector<storage::StudentPtr> _students;
    void recalculateStats() const;
};

#endif // TEAM_H
