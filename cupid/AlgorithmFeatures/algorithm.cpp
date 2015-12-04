#include "algorithm.h"

Algorithm::Algorithm(Project& project, std::vector<Student&> students)
    : _project(project), _students(students)
{

}

double Algorithm::CalculateScore(const Student& a, const Student& b)
{

}

double Algorithm::CalculateScore(const Team& team)
{

}

double Algorithm::CalculateScore(const Student& student, const Team& team)
{

}

double Algorithm::CalculateScore(const std::vector<Team&>& teams)
{

}

// Gives you the score for how well b is a match for a.
// Not necessarily the same as the score for how well
// a matches b.
double Algorithm::BasicSimilarityRule(Question q, Qualification a,
                                      Qualification b)
{
    double range = q.max - q.min + 1;
    double aInflexibility = range - (a.max - a.min);
    int distance = a.value < b.value ? b.value - a.value : a.value - b.value;
    if (b.value < a.min) {
        int pdistance = a.min - b.value;
        return (1 + aInflexibility/range)*-(distance + pdistance)/range;
    } else if (b.value > a.max) {
        int pdistance = b.value - a.max;
        return (1 + aInflexibility/range)*-(distance + pdistance)/range;
    } else {
        return (1 + aInflexibility/range)*(range - distance)/range;
    }
}

// Have to repeat with left and right swapped, since this
// is definitely not a symmetric function.
double Algorithm::BasicComplementRule(Question q, Qualification aLeftAnswer,
                      Qualification aRightAnswer,
                      std::vector<Qualification> teamRightAnswers) {
    int dissimilaritySum = 0;

    // Calculate team average and max answers for right
    double averageRight = 0;
    int maxLead = 0;
    for (int i = 0; i < teamRightAnswers.size(); i++) {
        dissimilaritySum += min(aLeftAnswer.value, teamRightAnswers[i].value);
        if (teamRightAnswers[i].value > maxRight) maxRight = teamRightAnswers[i].value;
        averageRight += teamRightAnswers[i].value;
    }
    averageRight = averageRight / teamRightAnswers.size();

    // Result will be sum of dissimilarity value plus
    // some kind of preference value.

    int range = q.max - q.min + 1;
    int inflexibility = range - (aRightAnswer.max - aLeaderAnswer.min + 1); // # values they won’t accept
    double inflexibilityFactor = 1 + inflexibility/range;
    double averageRightFactor = 0;
    double maxRightFactor = 0;

    // Is the team average inside or outside the preferred range
    if (averageRight < aRightAnswer.min) {
        averageRightFactor = aRightAnswer.min - averageRight;
    } else if (averageRight > aRightAnswer.max) {
        averageRightFactor = averageRight - aRightAnswer.max;
    }
    if (maxRight < aRightAnswer.min) {
        maxRightFactor = aRightAnswer.min - maxRight;
    } else if (maxRight > aRightAnswer.max) {
        maxRightFactor = maxRight - aRightAnswer.max;
    }

    // Preference penalty depends on how inflexible the person is
    double preferencePenalty = inflexibilityFactor * maxRightFactor * averageRightFactor;

    // Rule output depends on how dissimilar they are
    // minus some adjustment based on whether the team falls
    // within the person’s preferred range.
    return dissimilaritySum - preferencePenalty;
}
