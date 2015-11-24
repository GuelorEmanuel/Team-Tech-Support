#ifndef STUDENTPROFILEVIEW_H
#define STUDENTPROFILEVIEW_H

#include <QDialog>

namespace Ui {
class StudentProfileView;
}

class StudentProfileView : public QDialog
{
    Q_OBJECT

public:
    explicit StudentProfileView(QWidget *parent = 0);
    ~StudentProfileView();

private:
    Ui::StudentProfileView *ui;
};

#endif // STUDENTPROFILEVIEW_H
