#ifndef USER_H
#define USER_H

class User
{
public:
    User();
    ~User();
    void setName(string);
    string getName();
 private:
    string username;
};

#endif // USER_H
