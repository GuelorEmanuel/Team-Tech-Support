#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Storage/storage.h"
#include <QString>
class Question;
class Qualification;
class Team;

namespace algorithm
{
    typedef std::shared_ptr<Team> TeamPtr;
    typedef std::shared_ptr<std::vector<TeamPtr > > TeamList;
    typedef std::unordered_map<QString, std::shared_ptr<Team> > TeamMap;
}

class Algorithm
{
public:
    Algorithm(storage::ProjectPtr project);

private:
    storage::ProjectPtr _project;
    storage::StudentList _students;
    algorithm::TeamList _teams;
    double CalculateScore(storage::StudentPtr a,
                          storage::StudentPtr b);
    double CalculateScore(algorithm::TeamPtr team);
    double CalculateScore(storage::StudentPtr student,
                          algorithm::TeamPtr team);
    double CalculateScore(algorithm::TeamList teams);
    static double basicSimilarityRule(int questionNumber,
                                      storage::ProfilePtr a,
                                      storage::ProfilePtr b);
    static double basicSimilarityRule(const Question& q,
                                      const Qualification& a,
                                      const Qualification& b);
    static double basicComplementRule(const Question& q,
                                      const Qualification& aLeftAnswer,
                                      const Qualification& aRightAnswer,
                                      algorithm::TeamPtr team);
};

#endif // ALGORITHM_H
