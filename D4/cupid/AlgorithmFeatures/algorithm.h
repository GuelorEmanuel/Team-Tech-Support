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
    static QString getMatchDetails(Team& team);

private:
    storage::ProjectPtr _project;
    storage::StudentList _students;
    std::vector<algorithm::TeamPtr> _teams;
    std::vector<storage::StudentPtr> _remainingStudents;
    void sortRemainingStudents();
    void sortTeams();
    void removeStudentFromConsideration(storage::StudentPtr s);    
    storage::StudentPtr findBestStudentMatch(algorithm::TeamPtr team);
    double calculateEaseOfMatching(algorithm::TeamPtr team);
    double calculateEaseOfMatching(storage::StudentPtr a);
    double static calculateScore(Team& team);
    double calculateScore(storage::StudentPtr a,
                          storage::StudentPtr b);
    double calculateScore(algorithm::TeamList teams);
    static double basicSimilarityRule(int questionNumber,
                                      storage::ProfilePtr a,
                                      storage::ProfilePtr b);
    static double basicSimilarityRule(const Question& q,
                                      const Qualification& a,
                                      const Qualification& b);
    static double basicComplementRule(const Question& qleft,
                                      const Question& qright,
                                      storage::StudentPtr student,
                                      storage::StudentPtr otherStudent);
    static double basicComplementRule(const Question& qleft,
                                      const Question& qright,
                                      storage::StudentPtr student,
                                      Team& team);
    static double customTimeRule(storage::StudentPtr student,
                                 Team& team);
    static double customEfficiencyRule(storage::StudentPtr student,
                                       Team& team);
    static double customWorkloadRule(storage::StudentPtr student,
                                     Team& team);
    static double skillsetRule(storage::StudentPtr student,
                               Team& team);

    /*
     * Whereas the QuestionList just tells you the questions,
     * this part organizes them by rules and gives the weights.
     */

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

    static constexpr int complementQuestions[8] = {
        QuestionList::Q_ROLE_LEADER,
        QuestionList::Q_ROLE_FOLLOWER,
        QuestionList::Q_ROLE_DETAIL,
        QuestionList::Q_ROLE_BIG_PICTURE,
        QuestionList::Q_ROLE_CHALLENGE,
        QuestionList::Q_ROLE_REPETITIVE,
        QuestionList::Q_ROLE_IDEA_GENERATION,
        QuestionList::Q_ROLE_IDEA_EVALUATION
    };

    static constexpr int complementWeights[8] = {
        5, 5, 3, 3, 3, 3, 3, 3
    };

    static constexpr int skillsetQuestions[5] = {
        QuestionList::Q_SKILL_PROGRAMMING,
        QuestionList::Q_SKILL_DOCUMENTATION,
        QuestionList::Q_SKILL_PRESENTATION,
        QuestionList::Q_SKILL_ORGANIZATION,
        QuestionList::Q_SKILL_RESEARCH
    };

    static constexpr int skillsetWeights[5] = {
        3, 1, 1, 1, 1
    };

    static const int customTimeQuestion = QuestionList::Q_TIME_FLEXIBILITY;
    static const int customTimeWeight = 3;
    static constexpr int customTimeRules[5][5] = {
        {-1,-1,2,3,4}, // most inflexible student
        {-1,-1,0,1,2},
        {2,0,0,0,0},   // {most inflexible team, ..., most flexible team}
        {3,1,0,0,0},
        {4,2,0,0,0}    // most flexible student
    };

    static const int customEfficiencyQuestion = QuestionList::Q_EFFICIENCY;
    static const int customEfficiencyWeight = 1;
    static constexpr int customEfficiencyRules[5][5] = {
        {0,0,0,2,3},   // most efficient student
        {0,0,0,1,2},
        {0,0,0,1,1},   // {most efficient team, ..., most inefficient team}
        {2,1,1,-1,-1},
        {3,2,1,-1,-2}  // most inefficient student
    };

    static const int customWorkloadQuestion = QuestionList::Q_WORKLOAD;
    static const int customWorkloadWeight = 3;
    static constexpr int customWorkloadRules[5][5] = {
        {0,0,0,-1,-1},   // least busy student
        {0,0,0,1,0},
        {0,0,0,1,2},     // {least busy team, ..., most busy team}
        {-1,1,1,-1,-1},
        {-1,0,2,-1,-2}   // most busy student
    };
};

#endif // ALGORITHM_H
