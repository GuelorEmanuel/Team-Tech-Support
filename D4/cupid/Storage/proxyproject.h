#ifndef PROXYPROJECT_H
#define PROXYPROJECT_H

#include "storage.h"
#include "project.h"
#include <QString>
#include <memory>
#include <vector>
class RealProject;
class Student;

class ProxyProject : public Project
{
public:
    explicit ProxyProject();
    explicit ProxyProject(int id);
    explicit ProxyProject(QString name, QString description,
                 int minTeamSize, int maxTeamSize);
    explicit ProxyProject(int id, QString name, QString description,
                 int minTeamSize, int maxTeamSize);
    explicit ProxyProject(int id, QString name, QString description,
                 int minTeamSize, int maxTeamSize,
                 storage::StudentList students);
    virtual ~ProxyProject();
    virtual int getId() const;
    virtual void setId(int value);
    virtual int getMinTeamSize() const;
    virtual void setMinTeamSize(int value);
    virtual int getMaxTeamSize() const;
    virtual void setMaxTeamSize(int value);
    virtual QString getName() const;
    virtual void setName(QString value);
    virtual QString getDescription() const;
    virtual void setDescription(QString value);
    virtual storage::StudentList getStudents();
    virtual void setStudents(storage::StudentList students);
    virtual void registerStudent(storage::StudentPtr student);

protected:
     void initRealProject();
private:
    std::unique_ptr<RealProject> _project;
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
};

#endif // PROXYPROJECT_H
