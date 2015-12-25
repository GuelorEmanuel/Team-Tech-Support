#ifndef REALPROJECT_H
#define REALPROJECT_H

#include "storage.h"
#include "project.h"
#include "student.h"
#include <vector>
#include <QString>
#include <memory>

class RealProject : public Project
{
public:
    explicit RealProject(int id, QString name, QString description,
                 int minTeamSize, int maxTeamSize,
                 storage::StudentList students);
    virtual ~RealProject();
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

private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    storage::StudentList _students;
};

#endif // REALPROJECT_H
