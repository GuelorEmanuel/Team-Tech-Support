#ifndef TEAM_H
#define TEAM_H

#include <QString>
#include "Storage/profile.h"
#include "Storage/student.h"
#include <vector>

class Team
{
public:
    Team();
    void addStudent(Student&);
    int getScore() const;
    double getOverallSkillAverage() const;
    double getAverage(int questionId) const;
    double getMax(int questionId) const;
    int getId() const;
    int getSize() const;
private:
    static const int* _needStats;
    bool _cacheValid;
    mutable double _score;
    mutable QString _id;
    mutable double _overallSkillAverage;
    mutable double _averages[28];
    mutable double _maxes[28];
    std::vector<Student&> _students;
    void recalculateStats() const;
};

#endif // TEAM_H
