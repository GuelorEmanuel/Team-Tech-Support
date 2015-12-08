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

Algorithm::Algorithm(ProjectPtr project)
    : _project(project)
{
    std::vector<std::pair<StudentPtr, int> > easeOfMatching;
    _students = _project->getStudents();
    for (auto it = _students->begin(); it != _students->end(); ++it)
    {
        StudentPtr s(*it);
        easeOfMatching.push_back(
                    std::pair<StudentPtr, int>(s,calculateEaseOfMatching(s)));
    }

    // Sort according to who is hardest to match
    std::sort(easeOfMatching.begin(),
              easeOfMatching.end(),
              [](const std::pair<StudentPtr, int>& lhs,
                 const std::pair<StudentPtr, int>& rhs)
    {
        return lhs.second < rhs.second;
    });


    for (auto it = easeOfMatching.begin(); it != easeOfMatching.end(); ++it)
    {
        qDebug() << "Ease of matching for "
                    << it->first->getDisplayName() << " = "
                    << it->second;
    }

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
        auto it = easeOfMatching.begin();
        for (int i = 0; i < initialSize; ++i)
        {
            TeamPtr team(std::make_shared<Team>());
            team->addStudent(it->first);
            _teams.push_back(team);
            ++it;
        }
    }

    // Find the team that will be hardest to match

    /*for (auto it = easeOfMatching.begin(); it != easeOfMatching.end(); ++it)
    {
        Team t;
        t.addStudent(*it);
        it->first->
    }
    _teams->push_back()*/
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
    ProfilePtr pa(a->getProfile());
    for (auto it = _students->begin(); it != _students->end(); ++it)
    {
        if ((*it)->getId() == a->getId()) {
            continue;
        }

        ret += CalculateScore(a, *it);
    }
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

    //_similarityScores.insert({std::pair<int,int>(a->getId(), b->getId()), ret});
    //qDebug() << "Algorithm::CalculateScore("
    //         << a->getDisplayName() << "(" << a->getId() << "," << pa->getId() << ") vs "
    //         << b->getDisplayName() << "(" << b->getId() << "," << pb->getId() << ") = " << ret;
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

// Have to repeat with left and right swapped, since this
// is definitely not a symmetric function.
double Algorithm::basicComplementRule(const Question& qleft,
                                      const Question& qright,
                                      StudentPtr student,
                                      Team& team)
{
    ProfilePtr profile(student->getProfile());
    const std::vector<StudentPtr>& teamMembers = team.getStudents();

    // Calculate team average and max answers for right
    const double averageRight = team.getAverage(qright.index);
    const double maxRight = team.getMax(qright.index);

    // Result will be a function of dissimilarity sum and preference penalty
    int dissimilaritySum = 0;
    for (int i = 0; i < team.getSize(); i++)
    {
        dissimilaritySum += std::min(profile->getAnswer(qleft.index),
                                     teamMembers[i]->
                                     getProfile()->getAnswer(qright.index));
    }

    // Range the the # of values the question will accept
    const int range = qleft.max - qleft.min + 1;

    // Inflexibility is the # of values they won’t accept
    const int inflexibility = range - (profile->getMaxAnswer(qright.index)
                                       - profile->getMinAnswer(qleft.index) // ????? left or right?
                                       + 1);

    // How inflexible the student is relative to this question
    const double inflexibilityFactor = 1 + inflexibility/range;


    double averageRightFactor = 0;
    double maxRightFactor = 0;

    // Is the team average inside or outside the preferred range
    /*if (averageRight < aRightAnswer.min) {
        averageRightFactor = aRightAnswer.min - averageRight;
    } else if (averageRight > aRightAnswer.max) {
        averageRightFactor = averageRight - aRightAnswer.max;
    }
    if (maxRight < aRightAnswer.min) {
        maxRightFactor = aRightAnswer.min - maxRight;
    } else if (maxRight > aRightAnswer.max) {
        maxRightFactor = maxRight - aRightAnswer.max;
    }*/

    // Preference penalty depends on how inflexible the person is
    double preferencePenalty = inflexibilityFactor * maxRightFactor * averageRightFactor;

    // Rule output depends on how dissimilar they are
    // minus some adjustment based on whether the team falls
    // within the person’s preferred range.
    //return dissimilaritySum - preferencePenalty;*/
    return 0;
}
