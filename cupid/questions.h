#ifndef QUESTIONS_H
#define QUESTIONS_H
#include <QList>

class Questions
{
public:
    Questions();
    ~Questions();
    void loadQuestions();
    QList<QString> getQuestions();

 private:
    QList<QString> questionsList;
};

#endif // QUESTIONS_H
