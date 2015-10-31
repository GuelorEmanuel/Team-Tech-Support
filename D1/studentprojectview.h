#ifndef STUDENTPROJECTVIEW_H
#define STUDENTPROJECTVIEW_H

#include <QDialog>

namespace Ui {
class StudentProjectView;
}

class StudentProjectView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProjectView(QWidget *parent = 0);
    ~StudentProjectView();

private slots:
    void on_leaveProjectBtn_clicked();

    void on_joinProjectBtn_clicked();

private:
    Ui::StudentProjectView *ui;
};

#endif // STUDENTPROJECTVIEW_H
