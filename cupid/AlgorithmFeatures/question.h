#ifndef QUESTION_H
#define QUESTION_H

#include <QString>

struct Question
{
public:
    Question(int max, int min, QString prompt);
    int max;
    int min;
    QString prompt;
};

#endif // QUESTION_H
