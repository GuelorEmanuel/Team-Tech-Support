#ifndef STUDENTFEATURESCOMMUNICATION_H
#define STUDENTFEATURESCOMMUNICATION_H

#include "Storage/storage.h"

class StudentFeaturesCommunication
{
public:    
    static void showStudentHome(storage::StudentPtr student);
private:
    StudentFeaturesCommunication();
    void operator=(
            StudentFeaturesCommunication const& rhs) = delete;
    StudentFeaturesCommunication(
            StudentFeaturesCommunication const& rhs) = delete;
};

#endif // STUDENTFEATURESCOMMUNICATION_H
