#ifndef USERMANAGEMENTCOMMUNICATION_H
#define USERMANAGEMENTCOMMUNICATION_H

#include <QString>
#include "Storage/storage.h"

class UserManagementCommunication
{
public:
    static storage::UserPtr getUser(QString name);
    static storage::AdminPtr getAdmin(int id);
    static storage::StudentPtr getStudent(int id);
    static void showAdminHome(storage::UserPtr user);
    static void showStudentHome(storage::UserPtr user);
    static bool userNameAvailable(QString name);
    static void createAdmin(storage::AdminPtr admin);
private:
    UserManagementCommunication();
    void operator=(
            UserManagementCommunication const& rhs) = delete;
    UserManagementCommunication(
            UserManagementCommunication const& rhs) = delete;
};

#endif // USERMANAGEMENTCOMMUNICATION_H
