#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Storage/storage.h"
#include "AlgorithmFeatures/questionlist.h"
#include <unordered_map>
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
    std::vector<algorithm::TeamPtr>& getTeams();

private:
    storage::ProjectPtr _project;
    storage::StudentList _students;
    std::vector<algorithm::TeamPtr> _teams;
    std::vector<storage::StudentPtr> _remainingStudents;
    void sortRemainingStudents();
    double calculateEaseOfMatching(algorithm::TeamPtr team,
                                   storage::StudentList remainingStudents);
    double calculateEaseOfMatching(storage::StudentPtr a);
    double CalculateScore(Team& team);
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

    static double basicComplementRule(const Question& qleft,
                                      const Question& qright,
                                      storage::StudentPtr student,
                                      Team& team);

    static constexpr int similarityQuestions[12] = {
        QuestionList::Q_DESIRED_GRADE,
        QuestionList::Q_PROCRASTINATION,
        QuestionList::Q_QUALITY_STANDARDS,
        QuestionList::Q_GRADE_CGPA,
        QuestionList::Q_GRADE_2401,
        QuestionList::Q_GRADE_2404,
        QuestionList::Q_TIME_WORK_OVER_BREAK,
        QuestionList::Q_TIME_MORNING_PERSON,
        QuestionList::Q_TIME_NIGHT_OWL,
        QuestionList::Q_PERSONALITY_BLUNTNESS,
        QuestionList::Q_PERSONALITY_COMMUNICATION,
        QuestionList::Q_PERSONALITY_STRUCTURE
    };

    static constexpr int similarityWeights[12] = {
        5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3
    };

};

#endif // ALGORITHM_H
