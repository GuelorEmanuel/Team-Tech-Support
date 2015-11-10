#include "qualification.h"


Qualification::Qualification()
{
}

Qualification::~Qualification() {
}

void Qualification::setAnswer(int ans)
{
    _answer = ans;
}

void Qualification::setMinAnswer(int minAns)
{
    _minAnswer = minAns;
}

void Qualification::setMaxAnswer(int maxAns)
{
    _maxAnswer = maxAns;
}

int Qualification::getAnswer() const
{
    return _answer;
}

int Qualification::getMinAnswer() const
{
    return _minAnswer;
}

int Qualification::getMaxAnswer() const
{
    return _maxAnswer;
}

