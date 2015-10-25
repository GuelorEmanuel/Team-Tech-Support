#include "team.h"

Team::Team(int s) : size(s)
{
    students = new Student*[size];
    numOfStuds = 0;
}

Team::~Team() {
    delete students;
}

int Team::addStudent(Student* stu)
{
    if(numOfStu == size)
        return 0;
    else {
        students[numOfStu] = stu;
        ++numOfStu;
        return 1;
    }
}




