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

    int getAnswer() const;
    int getMinAnswer() const;
    int getMaxAnswer() const;

private:
    int _answer;
    int _minAnswer;
    int _maxAnswer;
};

#endif // QUALIFICATION_H
