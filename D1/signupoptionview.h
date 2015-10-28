#ifndef SIGNUPOPTIONVIEW_H
#define SIGNUPOPTIONVIEW_H

#include <QWidget>

namespace Ui {
class signupoptionview;
}

class signupoptionview : public QWidget
{
    Q_OBJECT

public:
    explicit signupoptionview(QWidget *parent = 0);
    ~signupoptionview();

private:
    Ui::signupoptionview *ui;
};

#endif // SIGNUPOPTIONVIEW_H
