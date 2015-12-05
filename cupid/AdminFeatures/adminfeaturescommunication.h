#ifndef ADMINFEATURESCOMMUNICATION_H
#define ADMINFEATURESCOMMUNICATION_H

#include "Storage/storage.h"

class AdminFeaturesCommunication
{
public:
    static storage::ProjectPtr getProject(int id);
    static void createProject(storage::ProjectPtr project);
private:
    AdminFeaturesCommunication();
    void operator=(AdminFeaturesCommunication const& rhs) = delete;
    AdminFeaturesCommunication(AdminFeaturesCommunication const& rhs) = delete;
};

#endif // ADMINFEATURESCOMMUNICATION_H
