#ifndef PROXYPROJECT_H
#define PROXYPROJECT_H

#include "student.h"
#include <QString>
#include <memory>
#include <vector>
#include "realproject.h"

class ProxyProject
{
public:
    explicit ProxyProject();
    explicit ProxyProject(QString name, QString description,
                 int minTeamSize, int maxTeamSize);
    explicit ProxyProject(int id, QString name, QString description,
                 int minTeamSize, int maxTeamSize);
    explicit ProxyProject(int id, QString name, QString description,
                 int minTeamSize, int maxTeamSize,
                 std::vector<Student&>& students);
    virtual ~ProxyProject();
    virtual int getId() const;
    virtual int setId(int value);
    virtual int getMinTeamSize() const;
    virtual void setMinTeamSize(int value);
    virtual int getMaxTeamSize() const;
    virtual void setMaxTeamSize(int value);
    virtual QString getName() const;
    virtual void setName(QString value);
    virtual QString getDescription() const;
    virtual void setDescription(QString value);
    virtual std::vector<Student&>& getStudents();
    virtual void setStudents(std::vector<Student&>& students);
    virtual void registerStudent(Student& student);
private:
    std::auto_ptr<RealProject> _project;
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    void initRealProject();
};

#endif // PROXYPROJECT_H
