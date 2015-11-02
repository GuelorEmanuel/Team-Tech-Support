#ifndef QUALIFICATION_H
#define QUALIFICATION_H

class Qualification
{
public:
    Qualification();
    ~Qualification();
    void setAnswer(int ans);
    void setMinAnswer(int minAns);
    void setMaxAnswer(int maxAns);

    int  getAnswer();
    int  getMinAnswer();
    int  getMaxAnswer();
private:
    int _answer;
    int _min_answer;
    int _max_answer;
};

#endif // QUALIFICATION_H
