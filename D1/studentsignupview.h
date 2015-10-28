#ifndef STUDENTSIGNUPVIEW_H
#define STUDENTSIGNUPVIEW_H

#include <QWidget>

namespace Ui {
class studentsignupView;
}

class studentsignupView : public QWidget
{
    Q_OBJECT

public:
    explicit studentsignupView(QWidget *parent = 0);
    ~studentsignupView();

private:
    Ui::studentsignupView *ui;
};

#endif // STUDENTSIGNUPVIEW_H
