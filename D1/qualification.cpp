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
    _min_answer = minAns;
}

void Qualification::setMaxAnswer(int maxAns)
{
    _max_answer = maxAns;
}

int Qualification::getAnswer()
{
    return _answer;
}

int Qualification::getMinAnswer()
{
    return _min_answer;
}

int Qualification::getMaxAnswer()
{
    return _max_answer;
}

