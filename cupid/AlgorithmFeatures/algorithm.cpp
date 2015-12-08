#include "AlgorithmFeatures/algorithm.h"
#include "AlgorithmFeatures/question.h"
#include "AlgorithmFeatures/questionlist.h"
#include "Storage/qualification.h"
#include "Storage/project.h"
#include "Storage/storage.h"
#include "Storage/student.h"
#include "AlgorithmFeatures/team.h"
#include <QDebug>
#include  <algorithm>
using namespace storage;
using namespace algorithm;

constexpr int Algorithm::similarityQuestions[12];
constexpr int Algorithm::similarityWeights[12];
constexpr int Algorithm::customTimeRules[5][5];
constexpr int Algorithm::customEfficiencyRules[5][5];
constexpr int Algorithm::customWorkloadRules[5][5];

Algorithm::Algorithm(ProjectPtr project)
    : _project(project)
{
    _students = _project->getStudents();
    _remainingStudents = *(_project->getStudents());
    sortRemainingStudents();

    // Figure out how many teams there will be
    int initialSize = _students->size() / _project->getMinTeamSize();
    qDebug() << "There are " << _students->size()
             << " students in the project.";
    qDebug() << "There will be "
             << initialSize
             << " team(s) of " << _project->getMinTeamSize()
             << " with " << (initialSize % _project->getMinTeamSize())
             << " student(s) left over to be distributed among them.";

    // Create one person teams starting with the people who are
    // hardest to match
    {
        auto it = _remainingStudents.begin();
        for (int i = 0; i < initialSize; ++i)
        {
            TeamPtr team(std::make_shared<Team>());
            team->addStudent(*it);
            _teams.push_back(team);
            ++it;
        }

        // Remove the students we have matched so far
        _remainingStudents.erase(_remainingStudents.begin(), it-1);
    }



    sortRemainingStudents();
}

std::vector<algorithm::TeamPtr>& Algorithm::getTeams()
{
    return _teams;
}

/**
 * @brief Algorithm::sortRemainingStudents
 * After calling this, _remainingStudents will be sorted in order
 * from the hardest to match student to the easiest.
 */
void Algorithm::sortRemainingStudents()
{
    // Figure out how easy to match they all are
    std::vector<std::pair<StudentPtr, int> > easeOfMatching;
    for (auto it = _remainingStudents.begin();
         it != _remainingStudents.end(); ++it)
    {
        StudentPtr s(*it);
        easeOfMatching.push_back(
                    std::pair<StudentPtr, int>(s, calculateEaseOfMatching(s)));
    }

    // Sort them by ease of matching
    std::sort(easeOfMatching.begin(),
              easeOfMatching.end(),
              [](const std::pair<StudentPtr, int>& lhs,
                 const std::pair<StudentPtr, int>& rhs)
    {
        return lhs.second < rhs.second;
    });

    // Update the data member
    _remainingStudents.clear();
    for (auto it = easeOfMatching.begin();
         it != easeOfMatching.end(); ++it)
    {
        _remainingStudents.push_back(it->first);
    }
}

/**
 * Calculates how compatible a team is with remaining students, in general.
 * A high value means they're easy to match. A low value means
 * they're difficult to match.
 *
 * @param team  The team you want to consider adding someone to
 * @param remainingStudents  All the students who still have no team
 * @return A number representing how easy it is to find a good match
 */
double Algorithm::calculateEaseOfMatching(TeamPtr team,
                                          StudentList remainingStudents)
{
    double ret = 0;
    double currentScore = team->getScore();
    for (auto it = remainingStudents->begin();
         it != remainingStudents->end(); ++it)
    {
        ret += (CalculateScore(*it, team) - currentScore);
    }
}

/**
 * Calculates how compatible a student is with others, in general.
 * A high value means they're easy to match. A low value means
 * they're difficult to match.
 *
 * @param a The student you want to assess
 * @return A number representing how easy they are to match
 */
double Algorithm::calculateEaseOfMatching(StudentPtr a)
{
    double ret = 0;

    // If there are no teams yet, compare to all other students
    if (_teams.size() == 0)
    {
        for (auto it = _students->begin(); it != _students->end(); ++it)
        {
            if ((*it)->getId() == a->getId()) {
                continue;
            }

            // Score from comparing student to other student
            ret += CalculateScore(a, *it);
        }
        return ret;
    }

    // If there are teams, compare student to the teams
    for (auto it = _teams.begin(); it != _teams.end(); ++it)
    {
        // Score from adding student to the team
        Team potentialTeam(**it);
        potentialTeam.addStudent(a);
        ret += potentialTeam.getScore();
    }
    return ret;
}

double Algorithm::CalculateScore(StudentPtr a, StudentPtr b)
{
    ProfilePtr pa(a->getProfile());
    ProfilePtr pb(b->getProfile());
    double ret = 0;
    for (int i = 0; i < 12; ++i)
    {
        ret += Algorithm::similarityWeights[i]
                * basicSimilarityRule(Algorithm::similarityQuestions[i],
                                      pa, pb);
    }
}

double Algorithm::CalculateScore(Team& team)
{
    const std::vector<StudentPtr>& students = team.getStudents();
}

double Algorithm::CalculateScore(StudentPtr student, TeamPtr team)
{
    Team potentialTeam(*team);
    potentialTeam.addStudent(student);
    return potentialTeam.getScore();
}

double Algorithm::CalculateScore(TeamList teams)
{
    return 0;
}

double Algorithm::basicSimilarityRule(int questionNumber,
                                      ProfilePtr a,
                                      ProfilePtr b)
{
    const Question& q = *(QuestionList::instance()->getQuestion(questionNumber));
    basicSimilarityRule(q,
                        a->getQualification(questionNumber),
                        b->getQualification(questionNumber));
}

// Gives you the score for how well b is a match for a.
// Not necessarily the same as the score for how well
// a matches b.
double Algorithm::basicSimilarityRule(const Question& q,
                                      const Qualification& a,
                                      const Qualification& b)
{    
    double range = q.max - q.min + 1;

    double aInflexibility = range - (a.getMaxAnswer() - a.getMinAnswer());
    int distance = a.getAnswer() < b.getAnswer()
            ? b.getAnswer() - a.getAnswer() : a.getAnswer() - b.getAnswer();
    if (b.getAnswer() < a.getMinAnswer()) {
        int pdistance = a.getMinAnswer() - b.getAnswer();
        return (1 + aInflexibility/range)*-(distance + pdistance)/range;
    } else if (b.getAnswer() > a.getMaxAnswer()) {
        int pdistance = b.getAnswer() - a.getMaxAnswer();
        return (1 + aInflexibility/range)*-(distance + pdistance)/range;
    } else {
        return (1 + aInflexibility/range)*(range - distance)/range;
    }
}

/*
 * Simple utility method, calls basic complement rule, which is meant
 * for comparing a student to a team, on a student and a student,
 * by wrapping the other student in its own team.
 */
double Algorithm::basicComplementRule(const Question& qleft,
                                      const Question& qright,
                                      StudentPtr student,
                                      StudentPtr otherStudent)
{
    Team t(otherStudent);
    return basicComplementRule(qleft, qright, student, t);
}

/**
 * @brief Algorithm::basicComplementRule
 * Note that when calling this, you should also call it again with
 * qleft and qright reversed. This only does half the comparisons needed.
 * @param qleft The 1st question in the complement pair
 * @param qright The 2nd question in the complement pair
 * @param student The student you're comparing to the team
 * @param team The team the student is in
 * @return A number representing how well the student fits for this rule
 */
double Algorithm::basicComplementRule(const Question& qleft,
                                      const Question& qright,
                                      StudentPtr student,
                                      Team& team)
{
    ProfilePtr profile(student->getProfile());
    const std::vector<StudentPtr>& teamMembers = team.getStudents();

    // Calculate team average and max answers for right
    const double averageLeft = team.getAverage(qleft.index);
    const double averageRight = team.getAverage(qright.index);
    const double maxRight = team.getMax(qright.index);

    // Result will be a function of dissimilarity sum and preference penalty
    int dissimilaritySum = 0;
    for (int i = 0; i < team.getSize(); i++)
    {
        /* Bugfix in D4: Don't compare a student to himself */
        if (teamMembers[i]->getId() != student->getId()) continue;

        /* This looks weird, but it makes sense. If one has a 5 for
         * idea generation, and the other has a 5 for idea evaluation,
         * then we add 5 to the score. But if one of them has a 4 instead,
         * then we only add 4, and so on. It's the min of the two values. */
        dissimilaritySum += std::min(profile->getAnswer(qleft.index),
                                     teamMembers[i]->
                                     getProfile()->getAnswer(qright.index));
    }

    /* Update in D4: We also compare the student's answer to the
     * team average for the same question. If student has a 5 and team
     * average is 1, we add 4 to the score. If student has 3 and team
     * average is 3, we add 0 to the score. The more different they are,
     * the stronger the complement, so the better the match. */
    dissimilaritySum += team.getSize()
            * std::abs(averageLeft - profile->getAnswer(qleft.index));

    /* Update in D4: Removed inflexibility factor.
     * The current algorithm takes people's flexibility into account
     * already by prioritizing the matching of those who are hardest
     * to find good matches for. */

    // Is the team average inside or outside the preferred range
    double averageRightFactor = 0;
    if (averageRight < profile->getMinAnswer(qright.index)) {
        averageRightFactor =
                profile->getMinAnswer(qright.index) - averageRight;
    } else if (averageRight > profile->getMaxAnswer(qright.index)) {
        averageRightFactor = averageRight - profile->getMaxAnswer(qright.index);
    }

    // Is the team max inside or outside the preferred range
    double maxRightFactor = 0;
    if (maxRight < profile->getMinAnswer(qright.index)) {
        maxRightFactor = profile->getMinAnswer(qright.index) - maxRight;
    } else if (maxRight > profile->getMaxAnswer(qright.index)) {
        maxRightFactor = maxRight - profile->getMaxAnswer(qright.index);
    }

    // Rule output depends on how dissimilar they are
    // minus some adjustment based on whether the team falls
    // within the person’s preferred range.
    return dissimilaritySum - maxRightFactor * averageRightFactor;
}

double Algorithm::customTimeRule(StudentPtr student, Team& team)
{
    ProfilePtr profile(student->getProfile());
    const int answer = profile->getAnswer(Algorithm::customTimeQuestion);
    const int min = profile->getMinAnswer(Algorithm::customTimeQuestion);
    const int max = profile->getMaxAnswer(Algorithm::customTimeQuestion);
    const int teamAnswer = team.getAverage(Algorithm::customTimeQuestion);
    return Algorithm::customTimeRules[answer-1][teamAnswer-1]
            + ((teamAnswer >= min && teamAnswer <= max) ? 1 : -1);
}

double Algorithm::customEfficiencyRule(StudentPtr student, Team& team)
{
    ProfilePtr profile(student->getProfile());
    const int answer = profile->getAnswer(Algorithm::customEfficiencyQuestion);
    const int min = profile->getMinAnswer(Algorithm::customEfficiencyQuestion);
    const int max = profile->getMaxAnswer(Algorithm::customEfficiencyQuestion);
    const int teamAnswer
            = team.getAverage(Algorithm::customEfficiencyQuestion);
    return Algorithm::customEfficiencyRules[answer-1][teamAnswer-1]
            + ((teamAnswer >= min && teamAnswer <= max) ? 1 : -1);
}

double Algorithm::customWorkloadRule(StudentPtr student, Team& team)
{
    ProfilePtr profile(student->getProfile());
    const int answer = profile->getAnswer(Algorithm::customWorkloadQuestion);
    const int min = profile->getMinAnswer(Algorithm::customWorkloadQuestion);
    const int max = profile->getMaxAnswer(Algorithm::customWorkloadQuestion);
    const int teamAnswer = team.getAverage(Algorithm::customWorkloadQuestion);
    return Algorithm::customEfficiencyRules[answer-1][teamAnswer-1]
            + ((teamAnswer >= min && teamAnswer <= max) ? 1 : -1);
}
