#ifndef PROXYSTUDENT_H
#define PROXYSTUDENT_H

#include "storage.h"
#include "student.h"
#include <memory>
class RealStudent;

class ProxyStudent: public Student {

  public:
    ProxyStudent();
    ProxyStudent(int id);
    virtual ~ProxyStudent();
    virtual QString getStudentId();
    virtual void setStudentId(QString value);
    virtual storage::ProfilePtr getProfile();
    virtual void setProfile(storage::ProfilePtr value);
    virtual storage::ProjectList getProjects();
    virtual void joinProject(storage::ProjectPtr project);
    virtual bool operator<(const Student& rhs) const;
    virtual bool operator==(const Student& rhs) const;


  protected:
    void initRealStudent();

  private:
    QString _studentId;
    int _profileId;
    std::unique_ptr<RealStudent> _realStudent;
};

#endif // PROXYSTUDENT_H
