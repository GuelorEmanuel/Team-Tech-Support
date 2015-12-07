#ifndef QUESTIONLIST_H
#define QUESTIONLIST_H

#include "AlgorithmFeatures/question.h"

class QuestionList
{
public:
    static QuestionList* instance();

    enum
    {
        Q_DESIRED_GRADE = 0,
        Q_PROCRASTINATION,
        Q_QUALITY_STANDARDS,
        Q_GRADE_CGPA,
        Q_GRADE_2401,
        Q_GRADE_2404,
        Q_TIME_WORK_OVER_BREAK,
        Q_TIME_MORNING_PERSON,
        Q_TIME_NIGHT_OWL,
        Q_TIME_FLEXIBILITY,
        Q_ROLE_LEADER,
        Q_ROLE_FOLLOWER,
        Q_ROLE_DETAIL,
        Q_ROLE_BIG_PICTURE,
        Q_ROLE_CHALLENGE,
        Q_ROLE_REPETITIVE,
        Q_ROLE_IDEA_GENERATION,
        Q_ROLE_IDEA_EVALUATION,
        Q_PERSONALITY_BLUNTNESS,
        Q_PERSONALITY_COMMUNICATION,
        Q_PERSONALITY_STRUCTURE,
        Q_SKILL_PROGRAMMING,
        Q_SKILL_DOCUMENTATION,
        Q_SKILL_PRESENTATION,
        Q_SKILL_ORGANIZATION,
        Q_SKILL_RESEARCH,
        Q_EFFICIENCY,
        Q_WORKLOAD
    };

private:
    QuestionList();
    ~QuestionList();
    QuestionList(QuestionList const&); // no implementation
    void operator=(QuestionList const&); // no implementation
    static QuestionList* _instance;
    Question* _questions[28];
};

#endif // QUESTIONLIST_H
