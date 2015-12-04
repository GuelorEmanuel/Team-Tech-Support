#ifndef REALPROJECT_H
#define REALPROJECT_H

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
                 std::vector<Student&>& students);
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
    virtual std::vector<Student&>& getStudents();
    virtual void setStudents(std::vector<Student&>& students);
   // virtual int registerStudent(Student& student);

private:
    int _id;
    QString _name;
    QString _description;
    int _minTeamSize;
    int _maxTeamSize;
    std::shared_ptr<std::vector<Student&> > _students;
};

#endif // REALPROJECT_H
