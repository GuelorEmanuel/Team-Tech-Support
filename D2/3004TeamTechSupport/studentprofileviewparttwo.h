#ifndef STUDENTPROFILEVIEWPARTTWO_H
#define STUDENTPROFILEVIEWPARTTWO_H

#include <QDialog>

namespace Ui {
class StudentProfileViewPartTwo;
}

class StudentProfileViewPartTwo : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProfileViewPartTwo(QWidget *parent = 0);
    ~StudentProfileViewPartTwo();

private:
    Ui::StudentProfileViewPartTwo *ui;
};

#endif // STUDENTPROFILEVIEWPARTTWO_H
