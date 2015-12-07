#include "AlgorithmFeatures/questionlist.h"
#include "AlgorithmFeatures/question.h"

QuestionList* QuestionList::_instance = NULL;

QuestionList::QuestionList()
{
    _questions[0] = new Question(0, 12, "Desired grade");
    _questions[1] = new Question(1, 5, "Start late or early");
    _questions[2] = new Question(1, 5, "Quality standards");
    _questions[3] = new Question(0, 12, "GPA");
    _questions[4] = new Question(0, 12, "Grade in 2401");
    _questions[5] = new Question(0, 12, "Grade in 2404");
    _questions[6] = new Question(1, 5, "Work over break");
    _questions[7] = new Question(1, 5, "Morning person");
    _questions[8] = new Question(1, 5, "Night owl");
    _questions[9] = new Question(1, 5, "Schedule flexibility");
    _questions[10] = new Question(1, 5, "Leader role");
    _questions[11] = new Question(1, 5, "Follower role");
    _questions[12] = new Question(1, 5, "Detail-oriented role");
    _questions[13] = new Question(1, 5, "Big picture role");
    _questions[14] = new Question(1, 5, "Challenge role");
    _questions[15] = new Question(1, 5, "Repetitive role");
    _questions[16] = new Question(1, 5, "Idea generation role");
    _questions[17] = new Question(1, 5, "Idea evaluation role");
    _questions[18] = new Question(1, 5, "Bluntness");
    _questions[19] = new Question(1, 5, "Amount of communication");
    _questions[20] = new Question(1, 5, "Amount of structure");
    _questions[21] = new Question(1, 5, "Programming skill");
    _questions[22] = new Question(1, 5, "Documentation skill");
    _questions[23] = new Question(1, 5, "Presentation skill");
    _questions[24] = new Question(1, 5, "Organizing skill");
    _questions[25] = new Question(1, 5, "Research skill");
    _questions[26] = new Question(1, 5, "Efficiency");
    _questions[27] = new Question(1, 5, "Workload");
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
