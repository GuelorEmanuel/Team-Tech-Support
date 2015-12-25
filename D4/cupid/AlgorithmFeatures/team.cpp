#include "team.h"

static const int _needStatsData[] = {
    Profile::Q_TIME_FLEXIBILITY,
    Profile::Q_ROLE_LEADER,
    Profile::Q_ROLE_FOLLOWER,
    Profile::Q_ROLE_DETAIL,
    Profile::Q_ROLE_BIG_PICTURE,
    Profile::Q_ROLE_CHALLENGE,
    Profile::Q_ROLE_REPETITIVE,
    Profile::Q_ROLE_IDEA_GENERATION,
    Profile::Q_ROLE_IDEA_EVALUATION,
    Profile::Q_SKILL_PROGRAMMING,
    Profile::Q_SKILL_DOCUMENTATION,
    Profile::Q_SKILL_PRESENTATION,
    Profile::Q_SKILL_ORGANIZATION,
    Profile::Q_SKILL_RESEARCH,
    Profile::Q_EFFICIENCY,
    Profile::Q_WORKLOAD
};
const int _needStats = _needStatsData;

Team::Team() : _cacheValid(false), _overallSkillAverage(-1)
{

}

double Team::getScore() const
{
    if (!_cacheValid) {
        recalculateStats();
    }

    return _score;
}

QString Team::getId() const
{
    if (!_cacheValid) {
        recalculateStats();
    }

    return _id;
}

// TODO: could optimize to not use 3 function calls
void Team::addStudent(Student& student)
{
    _students.push_back(student);
    std::sort(_students.begin(), _students.end());
    std::unique(_students.begin(), _student.end());
}

int Team::getSize() const
{
    return _students.size();
}

double Team::getOverallSkillAverage() const
{
    if (!_cacheValid)
    {
        recalculateStats();
    }

    return _overallSkillAverage;
}

// TODO: only allow valid questionIds
double Team::getAverage(int questionId) const
{
    if (!_cacheValid)
    {
        recalculateStats();
    }

    return _averages[questionId];
}

// TODO: only allow valid questionIds
double Team::getMax(int questionId) const
{
    if (!_cacheValid)
    {
        recalculateStats();
    }

    return _maxes[questionId];
}

void Team::recalculateStats() const
{
    for (int i = 0; i < 28; ++i)
    {
        _averages[i] = 0;
        _maxes[i] = 0;
    }
    _id.clear();
    _overallSkillAverage = 0;

    for (_students::iterator it = _students.begin();
         it != _students.end(); ++it)
    {
        Profile sp = *it.getProfile();

        // Recalculate the overall skill average
        _overallSkillAverage +=
                sp.getAnswer(Profile::Q_SKILL_PROGRAMMING) * 2
                + sp.getAnswer(Profile::Q_SKILL_DOCUMENTATION)
                + sp.getAnswer(Profile::Q_SKILL_ORGANIZATION)
                + sp.getAnswer(Profile::Q_SKILL_PRESENTATION)
                + sp.getAnswer(Profile::Q_SKILL_RESEARCH);

        // Recalculate the team averages and maximums
        for (int i = 0; i < 16; ++i)
        {
            _averages[_needStats[i]] += sp.getAnswer(_needStats[i]);
            if (sp.getAnswer(_needStats[i]) > _maxes[_needStats[i]])
            {
                _maxes[_needStats[i]] = sp.getAnswer(_needStats[i]);
            }
        }

        // Build up the new team ID
        // TODO: Can make more efficient with low-level byte manipulation
        _id.append(QString::number(it->getId()));
    }

    // Finish calculating the averages
    _overallSkillAverage = _overallSkillAverage / (_students.size() * 7);
    for (int i = 0; i < 16; ++i)
    {
        _averages[_needStats[i]] /= _students.size();
    }   

    // Set cache flag to valid
    _cacheValid = true;
}
