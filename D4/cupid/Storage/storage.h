#ifndef STORAGE_H
#define STORAGE_H

#include <memory>
#include <vector>
#include <unordered_map>
class Student;
class Profile;
class Project;
class Admin;
class User;

namespace storage
{
    typedef std::shared_ptr<Student> StudentPtr;
    typedef std::shared_ptr<Profile> ProfilePtr;
    typedef std::shared_ptr<Project> ProjectPtr;
    typedef std::shared_ptr<Admin> AdminPtr;
    typedef std::shared_ptr<User> UserPtr;
    typedef std::shared_ptr<std::vector<StudentPtr > > StudentList;
    typedef std::shared_ptr<std::vector<ProfilePtr > > ProfileList;
    typedef std::shared_ptr<std::vector<ProjectPtr > > ProjectList;
    typedef std::shared_ptr<const std::vector<StudentPtr > > StudentListConst;
    typedef std::unordered_map<int, std::shared_ptr<Student> > StudentMap;
    typedef std::unordered_map<int, std::shared_ptr<Profile> > ProfileMap;
    typedef std::unordered_map<int, std::shared_ptr<Project> > ProjectMap;
    typedef std::unordered_map<int, std::shared_ptr<Admin> > AdminMap;
    typedef std::unordered_map<int, std::shared_ptr<User> > UserMap;
}

#endif // STORAGE_H
