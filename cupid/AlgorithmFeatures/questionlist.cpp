#include "AlgorithmFeatures/questionlist.h"
#include "AlgorithmFeatures/question.h"

QuestionList* QuestionList::_instance = NULL;

QuestionList::QuestionList()
{
    _questions[0] = new Question(0, 12, "Desired grade", 0);
    _questions[1] = new Question(1, 5, "Start late or early", 1);
    _questions[2] = new Question(1, 5, "Quality standards", 2);
    _questions[3] = new Question(0, 12, "GPA", 3);
    _questions[4] = new Question(0, 12, "Grade in 2401", 4);
    _questions[5] = new Question(0, 12, "Grade in 2404", 5);
    _questions[6] = new Question(1, 5, "Work over break", 6);
    _questions[7] = new Question(1, 5, "Morning person", 7);
    _questions[8] = new Question(1, 5, "Night owl", 8);
    _questions[9] = new Question(1, 5, "Schedule flexibility", 9);
    _questions[10] = new Question(1, 5, "Leader role", 10);
    _questions[11] = new Question(1, 5, "Follower role", 11);
    _questions[12] = new Question(1, 5, "Detail-oriented role", 12);
    _questions[13] = new Question(1, 5, "Big picture role", 13);
    _questions[14] = new Question(1, 5, "Challenge role", 14);
    _questions[15] = new Question(1, 5, "Repetitive role", 15);
    _questions[16] = new Question(1, 5, "Idea generation role", 16);
    _questions[17] = new Question(1, 5, "Idea evaluation role", 17);
    _questions[18] = new Question(1, 5, "Bluntness", 18);
    _questions[19] = new Question(1, 5, "Amount of communication", 19);
    _questions[20] = new Question(1, 5, "Amount of structure", 20);
    _questions[21] = new Question(1, 5, "Programming skill", 21);
    _questions[22] = new Question(1, 5, "Documentation skill", 22);
    _questions[23] = new Question(1, 5, "Presentation skill", 23);
    _questions[24] = new Question(1, 5, "Organizing skill", 24);
    _questions[25] = new Question(1, 5, "Research skill", 25);
    _questions[26] = new Question(1, 5, "Efficiency", 26);
    _questions[27] = new Question(1, 5, "Workload", 27);
}

const Question* QuestionList::getQuestion(int index) const
{
    return _questions[index];
}

QuestionList* QuestionList::instance() {
    if (_instance == NULL) {
        _instance = new QuestionList();
    }

    return _instance;
}

QuestionList::~QuestionList() {
    if (_instance) {
        for (int i = 0; i < 28; ++i)
        {
            delete _instance->_questions[i];
            _instance->_questions[i] = NULL;
        }
        delete _instance;
        _instance = NULL;
    }
}
