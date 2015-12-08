#ifndef QUESTION_H
#define QUESTION_H

#include <QString>

struct Question
{
public:
    Question(int min, int max, QString prompt, int index);
    int min;
    int max;
    QString prompt;
    int index;
};

#endif // QUESTION_H
